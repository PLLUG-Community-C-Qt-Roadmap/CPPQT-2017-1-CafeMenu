#ifndef MENUITEM_H
#define MENUITEM_H

#include <iostream>

#include "abstractmenuitem.h"

class MenuItem : public AbstractMenuItem
{
public:
    MenuItem();
    ~MenuItem();
    double price() const;
    void setPrice(double price);

    std::string description() const;
    void setDescription(const std::string &description);

    double weight() const;
    void setWeight(double weight);

    std::string Ingradients() const;
    void setIngradients(const std::string &Ingradients);

private:
    double mPrice;
    std::string mDescription;
    double mWeight;
    std::string mIngradients;

    // AbstractMenuItem interface
public:
    virtual void apply(AbstractVisitor *visitor) override;
};

#endif // MENUITEM_H
