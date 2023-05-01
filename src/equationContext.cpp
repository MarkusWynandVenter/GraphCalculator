#include "equationContext.h"

void EquationContext::setSolver(unique_ptr<EquationSolver> equationSolver)
{
    //Sets the equation solver to the equationSolver passed in as a parameter to on of the current 3 solvers available
    //The three available solvers are EquationDifferentiate, EquationFindX, and EquationSimplify
    this->equationSolver = move(equationSolver);
}

void EquationContext::solveEquation()
{
    //Calls the solveEquation method of the equationSolver
    //Which calls the method from one of the 3 classes mentioned above
    equationSolver->solveEquation();
}