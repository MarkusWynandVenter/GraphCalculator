#include "equationSimplify.h"

EquationSimplify::EquationSimplify()
{
    setEquation("Simplify");
}

EquationSimplify::~EquationSimplify()
{
}
void EquationSimplify::solveEquation()
{
    setSolvedEquation("Simplify");
    printSolved();
}
