#include <iostream>

#include "menugroup.h"
#include "menuitem.h"

#include "consoleprintmenuvisitor.h"

int main()
{
    MenuItem  *beer = new MenuItem;
    beer->setName("Beer");
    MenuItem  *water = new MenuItem;
    water->setName("water");

    MenuGroup *drinks = new MenuGroup;
    drinks->setName("drinks");
    drinks->addItem(beer);
    drinks->addItem(water);

    MenuItem *potatoFree = new MenuItem;
    potatoFree->setName("potatoFree");
    MenuItem *borshch = new MenuItem;
    borshch->setName("borshch");

    MenuGroup *food = new MenuGroup;
    food->setName("food");
    food->addItem(potatoFree);
    food->addItem(borshch);

    MenuGroup *menu = new MenuGroup;
    menu->setName("MENU");
    menu->addItem(drinks);
    menu->addItem(food);

    ConsolePrintMenuVisitor visitor;
    menu->apply(&visitor);

    return 0;
}

