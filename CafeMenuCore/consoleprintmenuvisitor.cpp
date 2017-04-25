#include "consoleprintmenuvisitor.h"

#include <iostream>

#include "menuitem.h"
#include "menugroup.h"

void ConsolePrintMenuVisitor::visit(MenuItem *item)
{
    std::cout << item->name()  << std::endl;
    std::cout << "  Descr: " << item->description()  << std::endl;
}

void ConsolePrintMenuVisitor::visit(MenuGroup *item)
{
    std::cout << "Group: " << item->name()  << std::endl;
}

