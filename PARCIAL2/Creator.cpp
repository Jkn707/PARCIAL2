#include "Producto.cpp"


class Creator{
    public:
    static Producto* createProduct(){
        string marca;
        long long modelo;
        long long precio;
        int pulgadas;
        int resolucion;
        int ram;
        int almacenamiento;
        int camara;
        int type;
      
        cout << "Ingrese la marca del producto" << endl;
        while ((cin >> marca)) {  
        bool var1 = true;  
        for (char c : marca) {  
            if (!isalpha(c)) {  
                var1 = false;  
                break;  
            }
        }
        if (var1) {  
            break;
        }
        cout << "Error. Por favor, ingrese una cadena de letras: ";
        }

        cout << "Ingrese el modelo del artículo" << endl;
        while (!(cin >> modelo)) {  
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        cout << "Error. Por favor, ingrese un número adecuado: ";
        }

        cout << "Ingrese el precio del artículo" << endl;
        while (!(cin >> precio)) {  
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        cout << "Error. Por favor, ingrese un número adecuado: ";
        }
      
        cout << "¿Qué producto es? (1 = Televisor, 2 = Computador, 3 = Celular)" << endl;
        while ((cin >> type), type != 1 && type != 2 && type != 3) {  
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        cout << "Por favor ingresar un tipo adecuado: ";
        }

        Producto* product;

        if (type == 1){
            cout << "Ingrese el número de pulgadas del televisor" << endl;
            while (!(cin >> pulgadas)) {  
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Error. Por favor, ingrese un número adecuado: ";
            }

            cout << "Ingrese la resolución del televisor" << endl;
            while (!(cin >> resolucion)) {  
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Error. Por favor, ingrese un número adecuado: ";
            }

            product = new Televisor(marca, modelo, precio, pulgadas, resolucion);
        }else if (type == 2){
            cout << "Ingrese la cantidad de RAM del computador" << endl;
            while (!(cin >> ram)) {  
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Error. Por favor, ingrese un número adecuado: ";
            }

            cout << "Ingrese el almacenamiento del computador" << endl;
            while (!(cin >> almacenamiento)) {  
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Error. Por favor, ingrese un número adecuado: ";
            }

            product = new Computador(marca, modelo, precio, ram, almacenamiento);
        }else if (type == 3){
            cout << "Ingrese la cantidad de megapixeles de la cámara del celular" << endl;
            while (!(cin >> camara)) {  
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Error. Por favor, ingrese un número adecuado: ";
            }
            cout << "Ingrese el almacenamiento del celular" << endl;
            while (!(cin >> almacenamiento)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error. Por favor, ingrese un número adecuado: ";
            }
            cout << "Ingrese la resolución del celular" << endl;
            while (!(cin >> resolucion)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error. Por favor, ingrese un número adecuado: ";
            }

            product = new Celular(marca, modelo, precio, almacenamiento, resolucion, camara);
        }
        return product;
    }
    
};