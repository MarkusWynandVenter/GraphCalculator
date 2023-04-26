#include "equationContext.h"

void EquationContext::setSolver(unique_ptr<EquationSolver> equationSolver)
{
    this->equationSolver = move(equationSolver);
}

void EquationContext::solveEquation()
{
    equationSolver->solveEquation();
}