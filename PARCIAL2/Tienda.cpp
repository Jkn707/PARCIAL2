#include "LinkedList.cpp"

class Tienda{

    public:

    Tienda(){};

    LinkedList addProduct(LinkedList a, Producto* p){
        a.AddAtTail(p);
        return a;
    };

    LinkedList deleteProduct(LinkedList a, Producto* p){
        a.DeleteItem(p);
        return a;
    }

    void showProducts(LinkedList Inventario){
        Inventario.ShowList();
    }

};
