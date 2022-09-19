#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include "Expression.h"

using namespace std;

Expression::Expression(){}

void Expression::splitString(string &str, char delimeter, vector <string> &expression){
    stringstream s(str);

    string equation;

    while(getline(s, equation, delimeter)){
        expression.push_back(equation);
    }

    reverse(expression.begin(), expression.end());
}
