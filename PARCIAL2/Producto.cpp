#include <iostream>
#include <string>
#include <limits>
#include <cctype> 

using namespace std;

// Vuelo class

class Producto{
    protected:
    string marca;
    long long modelo;
    long long precio;

    public:
    Producto(string marca, long long modelo, long long precio){
        this->marca = marca;
        this->modelo = modelo;
        this->precio = precio;
    }

    virtual ~Producto(){}



    // Se deben agregar los get y set

    string getMarca(){
        return this->marca;
    }

    long long getModelo(){
        return modelo;
    }

    long long getPrecio(){
        return this->precio;
    }

    void showInfo(){};
};

class Televisor : public Producto{
    protected:
    int pulgadas;
    int resolucion;

    public:
    Televisor(string marca, long long modelo, long long precio, int pulgadas, int resolucion) : Producto(marca, modelo, precio){
        this->pulgadas = pulgadas;
        this->resolucion = resolucion;
    }

    int getPulgadas(){
        return this->pulgadas;
    }
    int getResolucion(){
        return this->resolucion;
    }
    void showInfo(){
        cout << "Marca: " << this->marca << endl;
        cout << "Modelo: " << this->modelo << endl;
        cout << "Precio: " << this->precio << endl;
        cout << "Pulgadas: " << this->pulgadas << endl;
        cout << "Resolucion: " << this->resolucion << endl;
    }


};

class Computador : public Producto{
    protected:
    int ram;
    int almacenamiento;

    public:
    Computador(string marca, long long modelo, long long precio, int ram, int almacenamiento) : Producto(marca, modelo, precio){
        this->ram = ram;
        this->almacenamiento = almacenamiento;
    }

    public:
    int getRam(){
        return this->ram;
    }
    int getAlmacenamiento(){
        return this->almacenamiento;
    }
    void showInfo(){
        cout << "Marca: " << this->marca << endl;
        cout << "Modelo: " << this->modelo << endl;
        cout << "Precio: " << this->precio << endl;
        cout << "Ram: " << this->ram << endl;
        cout << "Almacenamiento: " << this->almacenamiento << endl;
    }
};

class Celular : public Producto{
    protected:
    int almacenamiento;
    int resolucion;
    int camara;

    public:
    Celular(string marca, long long modelo, long long precio, int almacenamiento, int resolucion, int camara) : Producto(marca, modelo, precio){
        this->almacenamiento = almacenamiento;
        this->resolucion = resolucion;
        this->camara = camara;
    }

    public:
    int getAlmacenamiento(){
        return this->almacenamiento;
    }
    int getResolucion(){
        return this->resolucion;
    }
    int getCamara(){
        return this->camara;
    }
    void showInfo(){
        cout << "Marca: " << this->marca << endl;
        cout << "Modelo: " << this->modelo << endl;
        cout << "Precio: " << this->precio << endl;
        cout << "Almacenamiento: " << this->almacenamiento << endl;
        cout << "Resolucion: " << this->resolucion << endl;
        cout << "Camara: " << this->camara << endl;
    }
};