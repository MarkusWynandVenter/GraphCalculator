#ifndef EQUAION_SOLVER_H
#define EQUAION_SOLVER_H

//The abstract class for the equation solver strategy Pattern
//It also has methods for getting the equations, solved equations, and equation steps
//It also has a pure virtual method for solving the equation
//The three classes that inherit from this class are EquationDifferentiate, EquationFindX, and EquationSimplify

#include <vector>
#include <string>
#include "toString.h"

using namespace std;

class EquationSolver
{
    private:
        string solvedEquation;
        string equation;
        vector<string> equationSteps;
        ToString* outputString;

    public:
        EquationSolver();
        ~EquationSolver();
        void setEquation(string equation);
        void setSolvedEquation(string solvedEquation);
        void setEquationSteps(vector<string> equationSteps);
        string getEquation();
        string getSolvedEquation();
        string getEquationSteps();
        virtual void solveEquation() = 0;
        void addStep(string step);
        void printSolved();
        void printSteps();
        
};

#endif