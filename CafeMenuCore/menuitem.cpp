#include "menuitem.h"

#include "abstractvisitor.h"

MenuItem::MenuItem()
{

}

MenuItem::~MenuItem()
{

}

double MenuItem::price() const
{
    return mPrice;
}

void MenuItem::setPrice(double price)
{
    mPrice = price;
}

std::string MenuItem::description() const
{
    return mDescription;
}

void MenuItem::setDescription(const std::string &description)
{
    mDescription = description;
}

double MenuItem::weight() const
{
    return mWeight;
}

void MenuItem::setWeight(double weight)
{
    mWeight = weight;
}

std::string MenuItem::Ingradients() const
{
    return mIngradients;
}

void MenuItem::setIngradients(const std::string &Ingradients)
{
    mIngradients = Ingradients;
}

void MenuItem::apply(AbstractVisitor *visitor)
{
    visitor->visit(this);
}

