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
    //Solves for x and calls for the solution to be printed
    
    setSolvedEquation("Find X");
    printSolved();
}
