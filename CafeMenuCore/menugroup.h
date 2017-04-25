#ifndef MENUGROUP_H
#define MENUGROUP_H

#include <vector>

#include "abstractmenuitem.h"
#include "menuitem.h"

class MenuGroup : public AbstractMenuItem
{
public:
    MenuGroup();
    void addItem(AbstractMenuItem *item);

private:
    std::vector<AbstractMenuItem*> mListItems;


    // AbstractMenuItem interface
public:
    virtual void apply(AbstractVisitor *visitor) override;
};


#endif // MENUGROUP_H
