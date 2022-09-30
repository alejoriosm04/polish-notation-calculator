#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include "ExpressionChecker.h"

using namespace std;

ExpressionChecker::ExpressionChecker(){}

void ExpressionChecker::splitString(string &str, char delimeter, vector <string> &expression) {
    string expNueva = "";
    int i=0;
    while(str[i]){
        if(i == 0){
            expNueva+=str[i];
            i++;
            continue;
        }
        if (str[i]!= ' '){
            expNueva += " ";
            expNueva+=str[i];
        }
        i++;
    }
    stringstream s(expNueva);

    string equation;

    while(getline(s, equation, delimeter)){
        expression.push_back(equation);
    }

    reverse(expression.begin(), expression.end());
}

bool ExpressionChecker::checker(vector <string> expression, List* pila) {
    try {
        ExpressionChecker::calculationChecker(expression, pila);
        cout << "-------------------------------------------------------------------------------------------" << endl;
        cout << "Valid expression." << endl;
        cout << "-------------------------------------------------------------------------------------------" << endl;
        return true;
    } catch (invalid_argument& e) {
         cout << "-------------------------------------------------------------------------------------------" << endl;
         cout << "We were unable to calculate the expression, please check the expression and try again." << endl;
         cout << e.what() << endl;
         cout << "-------------------------------------------------------------------------------------------" << endl;
         return false;
    }
}

string ExpressionChecker::calculationChecker(vector <string> expression, List* pila) {
    // If the expression is empty, return an error
    if (expression.empty()) {
        throw invalid_argument("The expression is empty.");
    }
    // If the expression starts with an operator, return an error
    if (expression[0] == "+" || expression[0] == "-" || expression[0] == "*" || expression[0] == "/") {
        throw invalid_argument("The expression starts with an operator or probably your input is in sufix notation.");
    }
    // If the expression has equal or more operators than numbers, return an error
    int operators = 0;
    int numbers = 0;
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == "+" || expression[i] == "-" || expression[i] == "*" || expression[i] == "/") {
            operators++;
        } else {
            numbers++;
        }
    }
    if (operators >= numbers) {
        throw invalid_argument("The expression has equal or more operators than numbers.");
    }
    for(int i = 0; i < expression.size(); i++) {
        if (expression[i].compare("+") == 0 || expression[i].compare("-") == 0 || expression[i].compare("*") == 0 || expression[i].compare("/") == 0) {
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
            pila->append(new Node(answer_str, NULL));
        } else {
            float checker = stof(expression[i]);
            pila->append( new Node(expression[i], NULL));
        }
    }
    string result = pila->pop()->data;
    return result;
}

string ExpressionChecker::calculation(vector <string> expression, List* pila) {
    for(int i = 0; i < expression.size(); i++) {
        if (expression[i].compare("+") == 0 || expression[i].compare("-") == 0 || expression[i].compare("*") == 0 || expression[i].compare("/") == 0) {
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
            float checker = stof(expression[i]);
            pila->append( new Node(expression[i], NULL));
        }
    }
    string result = pila->pop()->data;
    return result;
}