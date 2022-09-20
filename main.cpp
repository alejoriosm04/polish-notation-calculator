#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include "Expression.h"
#include "Node.h"
#include "List.h"

using namespace std;

int main(){
    // Testing message
    cout << "Hello World" << endl;
    
    // Declaration variables
    string equation;
    const char delimeter = ' ';
    vector <string> expression;
    Expression* exp1 = new Expression();
    List* pila = new List();

    // Ask for data
    getline(cin, equation);
    // Testing message
    cout << equation << endl;

    // Verification of expression and organized it
    exp1->splitString(equation, delimeter, expression);

    /*
    // Testing Print data
    for(const auto equation: expression){
        cout << equation;
    }
    // */

    // cout << typeid(expression[1]).name() << endl;


    // Cycle that goes through the vector and works with the list
    for(int i = 0; i < expression.size(); i++) {
        if (expression[i].compare("+") == 0 || expression[i].compare("-") == 0 || expression[i].compare("*") == 0 || expression[i].compare("/") == 0) {
            // cout << expression[i] << endl;

            float number1 = stof(pila->pop()->data);

            float number2 = stof(pila->pop()->data);

            cout << number2 + number1 << endl;
        } else {
            // cout << expression[i] << endl;
            pila->append(new Node(expression[i], NULL));
            // float number1 = stof(expression[i]);
            // cout << number1 + 1 << endl;
        }
    }

    // */

    return 0;
}