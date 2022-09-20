#pragma once
#include <iostream>
#include <string>
#include "Node.h"

using namespace std;

class List{
    private:
        Node* head;

    public:
        List() {
            this->head = NULL;
        }
        void append(Node* data);
        Node* pop();

};
