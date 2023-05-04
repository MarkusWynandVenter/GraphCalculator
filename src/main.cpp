#include <iostream>
#include <string>
#include <memory>
#include "equationContext.h"
#include "equationSolver.h"
#include "equationDifferentiate.h"
#include "equationFindX.h"
#include "equationSimplify.h"
#include "gatherInput.h"


using namespace std;

int main () {
    bool programRunning = true;
    EquationContext equationContext;
    gatherInput* input;

    while(programRunning)
    {
        //This loop will run until the user enters "Exit"

        //First we gather the input from the user using the gatherInput class
        input = new gatherInput();

        //Then we set the equation solver based on the equation type from the input
        //Inside a try bracket to catch invalid input

        try {
            if(input->getEquationType() == "Diff")
            {
                //Sees the input is for a differentiation equation
                equationContext.setSolver(make_unique<EquationDifferentiate>(input->getEquation()));
                equationContext.solveEquation();
                delete input;
            }
            else if (input->getEquationType() == "Solve")
            {
                //Sees the input is for a solve for x equation
                equationContext.setSolver(make_unique<EquationFindX>(input->getEquation()));
                equationContext.solveEquation();
                delete input;
            }
            else if (input->getEquationType() == "Simplify")
            {
                //Sees the input is for a simplify equation
                equationContext.setSolver(make_unique<EquationSimplify>(input->getEquation()));
                equationContext.solveEquation();
                delete input;
            }
            else if (input->getInput() == "Exit"){
                //Sees the users wants to exit the program
                programRunning = false;
                cout << "Exiting Program" << endl;
                delete input;
                exit(0);
            }      
            else
            {
                //Sees the input is invalid
                throw "Invalid Input";
            }
        }

        catch(const char* msg)
        {
            //Catches the error and prints it to the console
            cout << "Error: ";
            cout << msg << endl << endl;
            delete input;
        }
    }

    return 0;
}