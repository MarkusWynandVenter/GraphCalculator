#include "equationSimplify.h"

EquationSimplify::EquationSimplify()
{
    this->solvedEquation = "";
    this->equation = "";
}

EquationSimplify::~EquationSimplify()
{
}

void EquationSimplify::setEquation(string equation)
{
    this->equation = equation;
}

string EquationSimplify::getEquation()
{
    return this->equation;
}

string EquationSimplify::getSolvedEquation()
{
    return this->solvedEquation;
}

string EquationSimplify::getEquationSteps()
{
    string steps = "";
    for (int i = 0; i < this->equationSteps.size(); i++)
    {
        steps += this->equationSteps[i] + "\n";
    }
    return steps;
}

void EquationSimplify::solveEquation()
{
    this->equationSteps.push_back("Simplifying equation");
    this->equationSteps.push_back("x = " + this->equation);
    this->solvedEquation = this->equation;
}
