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

    // Print the content of the vector
    // for(int i = 0; i < expression.size(); i++) {
    //     cout << expression[i] << endl;
    // }
    // cout << expression[expression.size()-1] << endl;

    bool valid = ec1->checker(expression, pila);

    if (valid) {
        cout << "Do you want to calculate the answer of the expression? (Y/N)" << endl;
        string answer;
        getline(cin, answer);
        cout << "-------------------------------------------------------------------------------------------" << endl;
        if (answer == "Y" || answer == "y") {
            string result = ec1->calculation(expression, pila);
            cout << "-------------------------------------------------------------------------------------------" << endl;
            cout << "The answer is: ";
            cout << result << endl;
            cout << "-------------------------------------------------------------------------------------------" << endl;
        }
    } else {
        cout << "Task Failed Successfully😎..." << endl;
        cout << "-------------------------------------------------------------------------------------------" << endl;
    }
}

int main(){
    cout << "-------------------------------------------------------------------------------------------" << endl;
    cout << "Welcome to the Polish Notation Calculator." << endl;
    cout << "Please take into account the following recommendations:" << endl;
    cout << "- Each character, number or operator must be separated to each other by only ONE space." << endl;
    cout << "- At the moment, the calculator only accepts +, -, * and / , as mathematic operations." << endl;
    cout << "- Use the Prefix Polish Notation, the program at the moment, only works with this notation." << endl;
    cout << "We hope you enjoy this program. Soon we will add new features..." << endl;
    cout << "-------------------------------------------------------------------------------------------" << endl;

    // Create a menu in an infinite loop that asks for the expression to calculate or ask to exit the program
    while (true) {
        cout << "Enter the expression to calculate (PREFIX NOTATION):" << endl;
        menu();
        cout << "Do you want to calculate another expression? (Y/N)" << endl;
        string answer;
        getline(cin, answer);
        cout << "-------------------------------------------------------------------------------------------" << endl;
        if (answer == "N" || answer == "n") {
            break;
        }
    }

    // while(true) {
    //     cin.get();
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
    //         // menu();
    //     }
    // }
    // menu();

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
    cout << "Thank you for using our program. We hope you enjoyed it." << endl;
    cout << "-------------------------------------------------------------------------------------------" << endl;

    return 0;
}