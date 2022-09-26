#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include "ExpressionChecker.h"

using namespace std;

ExpressionChecker::ExpressionChecker(){}

void ExpressionChecker::splitString(string &str, char delimeter, vector <string> &expression) {
    stringstream s(str);

    string equation;

    while(getline(s, equation, delimeter)){
        expression.push_back(equation);
    }

    reverse(expression.begin(), expression.end());
}

bool ExpressionChecker::checker(vector <string> expression, List* pila) {
    try {
        ExpressionChecker::calculation(expression, pila);
        cout << "Valid expression" << endl;
        return true;
    } catch (invalid_argument& e) {
        cout << "Invalid expression" << endl;
        return false;
    }
}

string ExpressionChecker::calculation(vector <string> expression, List* pila) {
    for(int i = 0; i < expression.size(); i++) {
        if (expression[i].compare("+") == 0 || expression[i].compare("-") == 0 || expression[i].compare("*") == 0 || expression[i].compare("/") == 0) {
        // */
            // cout << expression[i] << endl;

            float number1 = stof(pila->pop()->data);

            float number2 = stof(pila->pop()->data);

            float answer;

            if (expression[i].compare("+") == 0) {
                answer = number2 + number1;
            } else if (expression[i].compare("-") == 0) {
                answer = number2 - number1;
            } else if (expression[i].compare("*") == 0) {
                answer = number2 * number1;
            } else if (expression[i].compare("/") == 0) {
                answer = number2 / number1;
            }
            string answer_str = to_string(answer);
            answer_str = answer_str.substr(0, answer_str.find(".")+3);
            cout << number2 << " " << expression[i] << " " << number1 << " = " << answer_str << endl; 
            pila->append(new Node(answer_str, NULL));
        } else {
            // cout << expression[i] << endl;
            float checker = stof(expression[i]);
            pila->append(new Node(expression[i], NULL));
            // float number1 = stof(expression[i]);
            // cout << number1 + 1 << endl;
        }
    }
    string result = pila->pop()->data;
    return result;
}