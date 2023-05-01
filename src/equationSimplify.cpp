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
    //Simplifies the equation and calls for the solution to be printed
    setSolvedEquation("Simplify");
    printSolved();
}
