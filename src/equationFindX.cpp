#include "equationFindX.h"

EquationFindX::EquationFindX()
{
    setEquation("Find X");
}

EquationFindX::~EquationFindX()
{
}

void EquationFindX::solveEquation()
{
    setSolvedEquation("Find X");
    printSolved();
}
