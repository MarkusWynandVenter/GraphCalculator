#include "gatherInput.h"

gatherInput::gatherInput()
{
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

    if(equation == "")
    {
        cout << "Invalid Input" << endl;
        exit(0);
    }
}

void gatherInput::setEquationType()
{
    for(int i = 0; i < input.length(); i++)
    {
        if(input[i] == '(')
        {
            equationType = input.substr(0, i);
            break;
        }
    }

    if(equationType == "")
    {
        cout << "Invalid Input" << endl;
        exit(0);
    }
}

string gatherInput::getEquation()
{
    setEquation();
    return equation;
}

string gatherInput::getEquationType()
{
    setEquationType();
    return equationType;
}

string gatherInput::getInput()
{
    return input;
}