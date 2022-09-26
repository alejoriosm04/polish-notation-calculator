#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include "ExpressionChecker.h"
#include "Node.h"
#include "List.h"

using namespace std;

void menu() {
    // Declaration variables
    string equation;
    const char delimeter = ' ';
    vector <string> expression;
    ExpressionChecker* ec1 = new ExpressionChecker();
    List* pila = new List();

    // Ask for data
    getline(cin, equation);

    // Verification of expression and organized it
    ec1->splitString(equation, delimeter, expression);

    bool valid = ec1->checker(expression, pila);

    if (valid) {
        string result = ec1->calculation(expression, pila);
        cout << "-------------------------------------------------------------------------------------------" << endl;
        cout << "The answer is: ";
        cout << result << endl;
    } else {
        cout << "Process finished" << endl;
    }
}

int main(){
    cout << "-------------------------------------------------------------------------------------------" << endl;
    cout << "Welcome to the Polish Notation Calculator." << endl;
    cout << "Please take into account the following recommendations:" << endl;
    cout << "- Each character, number or operator must be separated to each other by a space." << endl;
    cout << "- At the moment, the calculator only accepts +, -, * and / , as mathematic operations." << endl;
    cout << "- Use the prefix polish notation, the program at the moment, only works with this notation." << endl;
    cout << "We hope you enjoy this program. Soon we will add new features..." << endl;
    cout << "-------------------------------------------------------------------------------------------" << endl;
    // cout << "Enter the expression to calculate:" << endl;

    while(true) {
        cin.get();
        cout << "------------------------------------------" << endl;
        cout << "Welcome to the Polish Notation Calculator." << endl;
        cout << "0. Exit program." << endl;
        cout << "1. Start Polish Notation Calculator." << endl;
        cout << "------------------------------------------" << endl;

        int option;
        cout << "Enter an option:" << endl;
        cin >> option;

        if (option == 0) {
            break;
        }

        if (option == 1) {
            // // Declaration variables
            // string equation;
            // const char delimeter = ' ';
            // vector <string> expression;
            // ExpressionChecker* ec1 = new ExpressionChecker();
            // List* pila = new List();

            // // Ask for data
            // getline(cin, equation);

            // // Verification of expression and organized it
            // ec1->splitString(equation, delimeter, expression);

            // // bool valid = ec1->checker(expression, pila);
            // // if (valid) {
            // //     string result = ec1->calculation(expression, pila);
            // //     cout << result << endl;
            // // } else {
            // //     cout << "Process finished" << endl;
            // // }

            // cout << "fvf" << endl;
            // menu();
        }
    }
    menu();

    // do {
    //     cout << "------------------------------------------" << endl;
    //     cout << "Welcome to the Polish Notation Calculator." << endl;
    //     cout << "0. Exit program." << endl;
    //     cout << "1. Start Polish Notation Calculator." << endl;
    //     cout << "------------------------------------------" << endl;

    //     int option;
    //     cout << "Enter an option:" << endl;
    //     cin >> option;

    //     if (option == 0) {
    //         break;
    //     }

    //     if (option == 1) {
    //         // // Declaration variables
    //         // string equation;
    //         // const char delimeter = ' ';
    //         // vector <string> expression;
    //         // ExpressionChecker* ec1 = new ExpressionChecker();
    //         // List* pila = new List();

    //         // // Ask for data
    //         // getline(cin, equation);

    //         // // Verification of expression and organized it
    //         // ec1->splitString(equation, delimeter, expression);

    //         // // bool valid = ec1->checker(expression, pila);
    //         // // if (valid) {
    //         // //     string result = ec1->calculation(expression, pila);
    //         // //     cout << result << endl;
    //         // // } else {
    //         // //     cout << "Process finished" << endl;
    //         // // }

    //         // cout << "fvf" << endl;
    //         menu();
    //     }
    // } while (true);

    cout << "" << endl;
    cout << "-------------------------------------------------------------------------------------------" << endl;
    cout << "Exit. Program finished" << endl;
    cout << "-------------------------------------------------------------------------------------------" << endl;

    return 0;
}