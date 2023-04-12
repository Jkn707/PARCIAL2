#include "Tienda.cpp"

int main(){
    LinkedList Inventario;
    Tienda tienda;
    Producto* p = new Televisor("Samsung", 123, 1000000, 50, 4);
    Producto* p2 = new Computador("HP", 456, 2000000, 8, 500);
    Inventario = tienda.addProduct(Inventario, p);
    Inventario = tienda.addProduct(Inventario, p2);
    tienda.showProducts(Inventario);
}