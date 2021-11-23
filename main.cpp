#include <iostream>
#include <sstream>
#include "std_lib_facilities.h"

using namespace std;

//returns the result of two numbers based on the operation
int calculate(const string& operation, int x, int y)
{
    //addition
    if(operation =="+")
    {
      return x+y;
    }

    //subtraction
    else if(operation =="-")
    {
        return x-y;
    }

    //division
    else if(operation =="/")
    {
        return x/y;
    }

    //multiplication
    else if(operation =="/")
    {
        return x*y;
    }

    //if user inputs something that's not a valid operation
    else
    {
        cout << "Not a valid operation!";
        return 0;
    }
}

int main() {

    string operation;
    int x;
    int y;

    //user inputs the operations and 2 numbers
    cin >> operation >> x >> y;

    //if user inputted two numbers, run the program
    if(isdigit(x) && isdigit(y))
    {
        //prints the result
        int result = calculate(operation, x,y);
        if( result != 0)
        {
            cout << result;
        }
    }

    //remind user what to input
    else
    {
        cout << "Integers only!";
    }
    return 0;
}