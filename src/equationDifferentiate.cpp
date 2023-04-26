#include "equationDifferentiate.h"

EquationDifferentiate::EquationDifferentiate()
{
    this->solvedEquation = "";
    this->equation = "";
}

EquationDifferentiate::~EquationDifferentiate()
{
}

void EquationDifferentiate::setEquation(string equation)
{
    this->equation = equation;
}

string EquationDifferentiate::getEquation()
{
    return this->equation;
}

string EquationDifferentiate::getSolvedEquation()
{
    return this->solvedEquation;
}

string EquationDifferentiate::getEquationSteps()
{
    string steps = "";
    for (int i = 0; i < this->equationSteps.size(); i++)
    {
        steps += this->equationSteps[i] + "\n";
    }
    return steps;
}

void EquationDifferentiate::solveEquation()
{
    this->equationSteps.push_back("Differentiating equation");
    this->equationSteps.push_back("x = " + this->equation);
    this->solvedEquation = this->equation;
}