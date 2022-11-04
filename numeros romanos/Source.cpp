#include <iostream>
#include <string>
using namespace std;



int pedirNumero(string mensaje) {
    int numero;
    cout << mensaje << endl;
    cin >> numero;
    return numero;
}
int validarCantidad(string mensaje) {
    int cant;
    cant = pedirNumero(mensaje);
    
    while (cant < 1) {
       
        cout << " La cantidad de numeros no puedo ser menor que 1 " << endl;
        cant = pedirNumero(mensaje);
        
    }
    if (cant > 0) {
        cant = cant;

    }
    return cant;
}
int validarNumero(int n1, string mensaje) {

    while (n1>4000 || n1 < 1) {

        cout << "  El numero no puedo ser menor que 1 y no puede ser mayor a 4000 " << endl;
        n1 = pedirNumero(mensaje);
    }

    if (4000 > n1 > 0) {
        n1 = n1;

    }
    return n1;
}

int pasoARomanosUnidades(int n1) {
    int unidades;
    unidades = n1 % 10;
    return unidades;
}
int pasoARomanosDecenas(int n1) {
    int decenas;
    decenas = n1 % 10;
    return decenas;
}
int pasoARomanosCentenas(int n1) {
    int centenas;
    centenas= n1 % 10;
    return centenas;
}

int pasoARomanosMiles(int n1) {
    int miles;
    miles = n1 % 10;
    return miles;
}
void mostrarMiles(int miles) {
    cout << "la convresion a numeros romanos es: " << endl;
    switch (miles) {
    case 1:cout << "M"; break;
    case 2:cout << "MM"; break;
    case 3:cout << "MMM"; break;
    }

}
void mostrarCentenas(int centenas) {

    switch (centenas) {
    case 1: cout << "C"; break;
    case 2: cout << "CC"; break;
    case 3: cout << "CCC"; break;
    case 4: cout << "CD"; break;
    case 5: cout << "D"; break;
    case 6: cout << "DC"; break;
    case 7: cout << "DCC"; break;
    case 8: cout << "DCCC"; break;
    case 9: cout << "CM"; break;
    }


}
void mostrarDecenas(int decenas) {
    switch (decenas) {
    case 1: cout << "X"; break;
    case 2: cout << "XX"; break;
    case 3: cout << "XXX"; break;
    case 4: cout << "XL"; break;
    case 5: cout << "L"; break;
    case 6: cout << "LX"; break;
    case 7: cout << "LXX"; break;
    case 8: cout << "LXXX"; break;
    case 9: cout << "XC"; break;
    }

}
void mostrarUnidades(int unidades) {

    switch (unidades) {
    case 1: cout << "I"; break;
    case 2: cout << "II"; break;
    case 3: cout << "III"; break;
    case 4: cout << "IV"; break;
    case 5: cout << "V"; break;
    case 6: cout << "VI"; break;
    case 7: cout << "VII"; break;
    case 8: cout << "VIII"; break;
    case 9: cout << "IX"; break;
    }
    cout << endl<<endl;
}

void main() {

    int n1, unidades, decenas, centenas, miles,cant;

        cant = validarCantidad( " Digite la cantidad de numeros que desea tranformar: ");
    system("cls");
    for (int i = 1; i <= cant; i++) {

        n1 = pedirNumero(" Digite un numero: ");
        n1 = validarNumero(n1, " Digite un numero: " );
        unidades = pasoARomanosUnidades(n1);
        n1 = n1 / 10;
        decenas = pasoARomanosDecenas(n1);
        n1 /= 10;
        centenas = pasoARomanosCentenas(n1);
        n1 /= 10;
        miles = pasoARomanosMiles(n1);
        n1 /= 10;
        mostrarMiles(miles);
        mostrarCentenas(centenas);
        mostrarDecenas(decenas);
        mostrarUnidades(unidades);
    }
    system("pause");
}