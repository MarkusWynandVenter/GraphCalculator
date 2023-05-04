#include "equationDifferentiate.h"

EquationDifferentiate::EquationDifferentiate(string parEquation)
{
    setEquation(parEquation);
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