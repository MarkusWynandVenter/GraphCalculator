#include "equationDifferentiate.h"

EquationDifferentiate::EquationDifferentiate()
{
    setEquation("Differentiate");
}

EquationDifferentiate::~EquationDifferentiate()
{
}

void EquationDifferentiate::solveEquation()
{
    //Differentiates the equation and calls for the solution to be printed
    
    setSolvedEquation("Differentiate");
    printSolved();
}