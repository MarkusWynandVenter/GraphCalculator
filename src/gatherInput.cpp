#include "gatherInput.h"

gatherInput::gatherInput()
{
    //Initializes the variables
    //Asks the user for input in a specific format and stores it in the input variable

    equation = "";
    equationType = "";
    input = "";

    cout << "Please enter the type of equation (Example Diff(), Solve(), Simplify()) " << endl;
    cout << "Enter the Equation: ";

    getline(cin, input);
}

gatherInput::~gatherInput()
{
}

void gatherInput::setEquation()
{
    //Seperates the equation from the input and stores it in the equation variable

    for(int i = 0; i < input.length(); i++)
    {
        if(input[i] == '(')
        {
            for(int j = i; j < input.length(); j++)
            {
                if(input[j] == ')')
                {
                    equation = input.substr(i, j - i + 1);
                    break;
                }
            }
        }
    }
}

void gatherInput::setEquationType()
{
    //Seperates the equation type from the input and stores it in the equationType variable

    for(int i = 0; i < input.length(); i++)
    {
        if(input[i] == '(')
        {
            equationType = input.substr(0, i);
            break;
        }
    }
}

string gatherInput::getEquation()
{
    //calls the setEquation method and returns the equation variable
    setEquation();
    return equation;
}

string gatherInput::getEquationType()
{
    //calls the setEquationType method and returns the equationType variable
    setEquationType();
    return equationType;
}

string gatherInput::getInput()
{
    //returns the input variable
    return input;
}