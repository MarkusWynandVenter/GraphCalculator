#include "equationFindX.h"

EquationFindX::EquationFindX(string parEquation)
{
    setEquation(parEquation);
}

EquationFindX::~EquationFindX()
{
}

void EquationFindX::solveEquation()
{
    //Solves for x and calls for the solution to be printed
    string equationTemp = getEquation();
    string leftSideEquation = "";
    string rightSideEquation = "";
    string solvedEquationTemp = "";
    commonMathFunc* commonMath = new commonMathFunc();

    //Removes all spaces from the equation using the commonMathFunc class
    equationTemp = commonMath->removeSpaces(equationTemp);

    //Splits the equation into the left and right side of the equation
    for(int i = 0; i < equationTemp.length(); i++)
    {
        if(equationTemp[i] == '=')
        {
            leftSideEquation = equationTemp.substr(0, i);
            rightSideEquation = equationTemp.substr(i + 1, equationTemp.length());
        }
    }

    //Removes parenthesis from the equation using the commonMathFunc class
    //First remove the left side of the equation parenthesis
    leftSideEquation = commonMath->removeParenthesis(leftSideEquation);

    //Then remove the right side of the equation parenthesis
    rightSideEquation = commonMath->removeParenthesis(rightSideEquation);

    setSolvedEquation(solvedEquationTemp);
    printSolved();

}