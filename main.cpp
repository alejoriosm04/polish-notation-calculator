#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include "Expression.h"

using namespace std;

int main(){
    // Testing message
    cout << "Hello World" << endl;
    
    // Declaration variables
    string equation;
    const char delimeter = ' ';
    vector <string> expression;
    Expression* exp1 = new Expression();

    // Ask for data
    getline(cin, equation);
    // Testing message
    cout << equation << endl;

    // Verification of expression and organized it
    exp1->splitString(equation, delimeter, expression);

    // Testing Print data
    for(const auto equation: expression){
        cout << equation;
    }

    return 0;
}
