#include <iostream>
#include<windows.h>
#include <vector>
#include<string>
using namespace std;

struct productos {
    const vector<string> PRODUCTOS = { "Barkito", "Quitamanchas", "Firmesandwich", "HarinaDapan", "AceiteNosepega", "MateKozi2", "Percha", "StanCafe" };
    vector<int> stock = { 159, 34, 12, 49, 57, 36, 4, 5 };
    const vector<int> PRECIO = { 200, 342, 135, 38, 342, 2, 130, 453 };
};

struct datos {
    int dni;
    string apellido;
    string formaDePago;
};

void datosFinales(string apellidoGastoMas, int montoGastoMas, int cantEfectivo, int cantTarjeta, productos productos, int recaudacion) {
    cout << apellidoGastoMas << " fue la persona con la compra mas cara, que fue de $" << montoGastoMas << endl;
    cout << "La cantidad de ventas con tarjeta: " << cantTarjeta << endl;
    cout << "La cantidad de ventas con efectivo: " << cantEfectivo << endl;
    cout << "La cantidad de stock por cada producto despues de la dificil cuarentena: " << endl;
    for (int i = 0; i < productos.PRODUCTOS.size(); i++) {
        cout << productos.PRODUCTOS[i] << " x " << productos.stock[i] << endl;
    }
    cout << "Recaduacion total de la empresa: " << recaudacion << endl;
}

void mostrarDatos(int precio) {
    datos datos;
    cout << "DNI: " << datos.dni << endl;
    cout << "Apellido: " << datos.apellido << endl;
    cout << "La forma de pago es: " << datos.formaDePago << endl;
    cout << "Precio total de la compra es: " << precio << "pesos"<< endl;
}

string pedirFormaDePago(string mensaje1, string mensaje2) {
    int formaPago;
    cout << "1. Efectivo" << endl
        << "2. Tarjeta" << endl;
    cout << mensaje1;
    cin >> formaPago;
    while (formaPago != 1 && formaPago != 2) {
        cout << mensaje2 << endl;
        cout << mensaje1;
        cin >> formaPago;
    }
    switch (formaPago) {
    case 1:
        return "Efectivo";
    case 2:
        return "Tarjeta";
    }
}

void mostrarProducto(vector<string> productos) {
    for (int i = 0; i < productos.size(); i++) {
        cout << i + 1 << ". " << productos[i] << endl;
    }
}

int pedirPosicion(vector<string> productos, string productoBuscar) {
    for (int i = 0; i < productos.size(); i++) {
        if (productoBuscar == productos[i]) {
            return i;
        }
    }
}

int pedirInt(string mensaje) {
    int num;
    cout << mensaje;
    cin >> num;
    return num;
}

string pedirProducto(vector<string> productos, string mensaje1,string mensaje2) {
    string prod;
    int numero;
    cout << mensaje1;
    cin >> prod;
    if (prod == "FIN") {
        return "FIN";
    }
    numero = stoi(prod);
    if (numero > productos.size()) {
        cout << mensaje2 << endl;
        cout << mensaje1;
        cin >> prod;
        numero = stoi(prod);
    }

    return productos[numero - 1];
}   

int ingresarEntero(string mensaje) {
    int numero;
    cout << mensaje << endl;
    cin >> numero;
    return numero;
}

string  ingresarString(string mensaje) {
    string palabra;
    cout << mensaje << endl;
    cin >> palabra;
    return palabra;
}
void mostrarMensaje(string mensaje,int posicion, productos &productos) {
    
    cout << mensaje << endl;
    cout << "El stock de " << productos.PRODUCTOS[posicion] << " es " << productos.stock[posicion] << endl;
 
}

float calcularDescuento(float precioCompra, int &cantEfectivo, int &cantTarjeta, datos &datos) {
 
    const float DESCUENTO= 0.9;
    if (datos.formaDePago == "Efectivo") {
        precioCompra = precioCompra * DESCUENTO;
        cantEfectivo++;
    }
    else {
        cantTarjeta++;
    }

    return precioCompra;
}

float calcularGastoMas(string &apellidoGastoMas, float precioCompra, float montoGastoMas, datos &datos){
    
    if (precioCompra > montoGastoMas) {
        apellidoGastoMas = datos.apellido;
        montoGastoMas = precioCompra;
    }
 return montoGastoMas;
}
int main() {

    int cantidad, cantEfectivo = 0, cantTarjeta = 0;
    string productoIngresado, apellidoGastoMas;
    float recaudacion = 0, precioProducto, precioCompra = 0, montoGastoMas = 0;

    productos productos;
    datos datos;
    datos.dni = ingresarEntero("Ingrese su DNI: ");
    
    while (datos.dni != 0) {
        
        datos.apellido = ingresarString("Ingrese su apellido: ");
        datos.formaDePago = pedirFormaDePago("Ingrese el numero opcion que  usted quiere abonar: ", "forma de pago incorrecta");       mostrarProducto(productos.PRODUCTOS);
        productoIngresado = pedirProducto(productos.PRODUCTOS, "Ingrese el numero del producto que desea comprar, o 'FIN' si quiere terminar el pedido: ", "El numero ingresado no es valido");
        while (productoIngresado != "FIN") {
            int posicion = pedirPosicion(productos.PRODUCTOS, productoIngresado);
            string mensaje = "Ingrese la cantidad de " + productoIngresado + " que quiere: ";
            cantidad = pedirInt(mensaje);

            while (productos.stock[posicion] < cantidad) {
                mostrarMensaje("El producto que quiere comprar no tiene stock suficiente :(", posicion, productos);      
                cantidad = pedirInt(mensaje);
            }

            productos.stock[posicion] = productos.stock[posicion] - cantidad;
            productoIngresado = pedirProducto(productos.PRODUCTOS, "Ingrese el numero del producto que quiere comprar, o 'FIN' si quiere terminar el pedido: ", "El numero ingresado no es valido");
            precioProducto = cantidad * productos.PRECIO[posicion];
            precioCompra = precioCompra + precioProducto;
        }
        precioCompra = calcularDescuento(precioCompra,cantEfectivo,cantTarjeta,datos);
        montoGastoMas = calcularGastoMas(apellidoGastoMas, precioCompra,montoGastoMas,datos);
       
        recaudacion = recaudacion + precioCompra;
        mostrarDatos(precioCompra);
        system("cls");
        datos.dni = ingresarEntero("Ingrese su DNI:");
    }
    datosFinales(apellidoGastoMas, montoGastoMas, cantEfectivo, cantTarjeta, productos, recaudacion);
    system("pause");
}