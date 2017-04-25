#include "menugroup.h"

#include "abstractvisitor.h"

MenuGroup::MenuGroup()
{

}

void MenuGroup::addItem(AbstractMenuItem *item)
{
    mListItems.push_back(item);
}

void MenuGroup::apply(AbstractVisitor *visitor)
{
    visitor->visit(this);
    for (AbstractMenuItem *item : mListItems)
    {
        item->apply(visitor);
    }
}


