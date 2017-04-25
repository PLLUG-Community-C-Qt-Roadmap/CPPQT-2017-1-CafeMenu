#ifndef CONSOLEPRINTMENUVISITOR_H
#define CONSOLEPRINTMENUVISITOR_H

#include "abstractvisitor.h"

class ConsolePrintMenuVisitor : public AbstractVisitor
{
    // AbstractVisitor interface
public:
    virtual void visit(MenuItem *item) override;
    virtual void visit(MenuGroup *item) override;
};

#endif // CONSOLEPRINTMENUVISITOR_H
