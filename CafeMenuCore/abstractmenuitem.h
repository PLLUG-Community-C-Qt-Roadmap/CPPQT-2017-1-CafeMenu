#ifndef ABSTRACTMENUITEM_H
#define ABSTRACTMENUITEM_H
#include<string>

class AbstractVisitor;

class AbstractMenuItem
{
public:
    AbstractMenuItem();

    std::string name() const;
    void setName(const std::string &name);

    virtual void apply(AbstractVisitor *visitor) = 0;

private:
    std::string mName;
};

#endif // ABSTRACTMENUITEM_H
