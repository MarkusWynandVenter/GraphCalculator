#ifndef EQUAION_SOLVER_H
#define EQUAION_SOLVER_H

#include <vector>
#include <string>

using namespace std;

class EquationSolver
{
    private:
        string solvedEquation;
        string equation;
        vector<string> equationSteps;

    public:
        EquationSolver();
        ~EquationSolver();
        void setEquation(string equation);
        string getEquation();
        string getSolvedEquation();
        string getEquationSteps();
        virtual void solveEquation() = 0;
        
};

#endif