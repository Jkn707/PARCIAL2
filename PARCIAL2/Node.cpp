#include "Creator.cpp"

class Node{
    public:

    Producto* product;
    Node* next;

    Node(Producto* prod){
        this->product = prod;
        this->next = NULL;
    }
};