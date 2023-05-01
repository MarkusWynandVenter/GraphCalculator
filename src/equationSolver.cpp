#include "equationSolver.h"

EquationSolver::EquationSolver()
{
    this->solvedEquation = "";
    this->equation = "";
}

EquationSolver::~EquationSolver()
{
}

void EquationSolver::setEquation(string equation)
{
    this->equation = equation;
}

void EquationSolver::setSolvedEquation(string solvedEquation)
{
    this->solvedEquation = solvedEquation;
}

void EquationSolver::setEquationSteps(vector<string> equationSteps)
{
    this->equationSteps = equationSteps;
}

string EquationSolver::getEquation()
{
    return this->equation;
}

string EquationSolver::getSolvedEquation()
{
    return this->solvedEquation;
}

string EquationSolver::getEquationSteps()
{
    string steps = "";
    for (int i = 0; i < this->equationSteps.size(); i++)
    {
        steps += this->equationSteps[i] + "\n";
    }
    return steps;
}

void EquationSolver::addStep(string step)
{
    this->equationSteps.push_back(step);
}

void EquationSolver::printSolved()
{
    this->outputString = new ToString(getSolvedEquation());
    this->outputString->output();
}

void EquationSolver::printSteps()
{
    this->outputString = new ToString(getEquationSteps());
    this->outputString->output();
}