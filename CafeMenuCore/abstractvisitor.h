#ifndef ABSTRACTVISITOR_H
#define ABSTRACTVISITOR_H

class MenuItem;
class MenuGroup;

class AbstractVisitor
{
public:
    virtual void visit(MenuItem *item) = 0;
    virtual void visit(MenuGroup *item) = 0;
};

#endif // ABSTRACTVISITOR_H
