#include "abstractmenuitem.h"

#include <iostream>

AbstractMenuItem::AbstractMenuItem()
{

}

std::string AbstractMenuItem::name() const
{
    return mName;
}

void AbstractMenuItem::setName(const std::string &name)
{
    mName = name;
}


