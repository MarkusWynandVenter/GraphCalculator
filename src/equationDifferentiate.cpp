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
    setSolvedEquation("Differentiate");
    printSolved();
}