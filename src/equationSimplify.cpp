#include "equationSimplify.h"

EquationSimplify::EquationSimplify(string parEquation)
{
    setEquation(parEquation);
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
