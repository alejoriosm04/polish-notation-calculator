#pragma once
#include <iostream>
#include <string>

using namespace std;

class Node{
    private:
        

    public:
        string data;
        Node* next;
        Node(string data, Node* next);
        
};
