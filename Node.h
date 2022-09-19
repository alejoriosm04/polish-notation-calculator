#pragma once
#include <iostream>
#include <string>
#include "Expression.h"

using namespace std;

class Node{
    private:
        Expression* data;

    public:
        Node* next;
        Node(Expression* data, Node* next);
        
};
