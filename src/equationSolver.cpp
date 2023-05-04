#include "equationSolver.h"

EquationSolver::EquationSolver()
{
    //Sets the equation, solvedEquation, and equationSteps to empty strings
    this->solvedEquation = "";
    this->equation = "";
}

EquationSolver::~EquationSolver()
{
}

void EquationSolver::setEquation(string equation)
{
    //Sets the equation to the equation passed in as a parameter
    this->equation = equation;
}

void EquationSolver::setSolvedEquation(string solvedEquation)
{
    //Sets the solvedEquation to the solvedEquation passed in as a parameter
    this->solvedEquation = solvedEquation;
}

void EquationSolver::setEquationSteps(vector<string> equationSteps)
{
    //Sets the equationSteps to the equationSteps passed in as a parameter
    this->equationSteps = equationSteps;
}

string EquationSolver::getEquation()
{
    //Returns the equation member variable
    return this->equation;
}

string EquationSolver::getSolvedEquation()
{
    //Returns the solvedEquation member variable
    return this->solvedEquation;
}

string EquationSolver::getEquationSteps()
{
    //Returns the equationSteps member variable by turning it into a string
    string steps = "";
    for (int i = 0; i < this->equationSteps.size(); i++)
    {
        steps += this->equationSteps[i] + "\n";
    }
    return steps;
}

void EquationSolver::addStep(string step)
{
    //Adds a step to the equationSteps vector
    this->equationSteps.push_back(step);
}

void EquationSolver::printSolved()
{
    //Prints the solved equation using the toString class
    this->outputString = new ToString(getSolvedEquation());
    this->outputString->output();
}

void EquationSolver::printSteps()
{
    //Prints the equation steps using the toString class
    this->outputString = new ToString(getEquationSteps());
    this->outputString->output();
}