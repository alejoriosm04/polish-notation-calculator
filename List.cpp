#include <iostream>
#include <string>
#include "Node.h"
#include "List.h"

using namespace std;

void List::append(Node* data){
    data->next = this->head;
    this->head = data;
}

Node* List::pop(){
    Node* tmp = this->head;
    this->head = this->head->next;
    return tmp;
}

// An experimental function without use at the moment
// void List::show(){
//     Node* aux = this->head;
//     while(aux){
//         aux->show();
//         aux = aux->next;
//     }
//     cout << "0";
// }