#include "equationFindX.h"

EquationFindX::EquationFindX()
{
    this->solvedEquation = "";
    this->equation = "";
}

EquationFindX::~EquationFindX()
{
}

void EquationFindX::setEquation(string equation)
{
    this->equation = equation;
}

string EquationFindX::getEquation()
{
    return this->equation;
}

string EquationFindX::getSolvedEquation()
{
    return this->solvedEquation;
}

string EquationFindX::getEquationSteps()
{
    string steps = "";
    for (int i = 0; i < this->equationSteps.size(); i++)
    {
        steps += this->equationSteps[i] + "\n";
    }
    return steps;
}

void EquationFindX::solveEquation()
{
    this->equationSteps.push_back("Solving for x");
    this->equationSteps.push_back("x = " + this->equation);
    this->solvedEquation = this->equation;

    outputString = new ToString("Find X equation solved");
}
