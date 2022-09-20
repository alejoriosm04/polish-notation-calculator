#include <iostream>
#include <string>
#include "Node.h"

using namespace std;

Node::Node(string data, Node* next){
    this->data = data;
    this->next = next;
}