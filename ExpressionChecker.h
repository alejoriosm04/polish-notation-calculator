#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "List.h"

using namespace std;

class ExpressionChecker {
    private:
        
    public:
        ExpressionChecker();
        void splitString(string &str, char delimeter, vector <string> &expression);
        bool checker(vector <string> expression, List* pila);
        string calculationChecker(vector <string> expression, List* pila);
        string calculation(vector <string> expression, List* pila);

};
