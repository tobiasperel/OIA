# include<iostream>
# include<stdlib.h>
# include<time.h>

using namespace std;

int pedirEntero(string mensaje)
{
	int entero;
	cout << mensaje << endl;
	cin >> entero;
	return entero;
}

int verificarCantidad(int cantidad, string mensaje)
{

	while (cantidad > 6 || cantidad < 1)
	{

		cout << "Error, la cantidad de caballos debe estar entre 1 y 6" << endl;
		cantidad = pedirEntero(mensaje);

	}
	return cantidad;
}

string pedirString(string mensaje)
{

	string nombre;

	cout << mensaje << endl;
	cin >> nombre;
	return nombre;

}

void ingresarVectorNumero(int vec[], int cantidad, string mensaje)
{

	for (int i = 0; i < cantidad; i++)
	{

		vec[i] = pedirEntero(mensaje);
	}

}

void pedirVectorColor(string color[], int cantidad, string mensaje)
{
	string nombre;
	for (int i = 0; i < cantidad; i++)
	{
		nombre = pedirString(mensaje);

		while (nombre != "azul" & nombre != "rojo" & nombre != "amarillo" & nombre != "verde" & nombre != "violeta" & nombre != "rosa")
		{
			cout << "color no reconocido" << endl;
			nombre = pedirString(mensaje);
		}
		color[i] = nombre;
	}

}

void pedirVectorNombre(string nombreCab[], int cantidad, string mensaje)
{
	string nombre;

	for (int i = 0; i < cantidad; i++)
	{
		nombre = pedirString(mensaje);
		nombreCab[i] = nombre;

	}

}

void pasosTotalesCero(int pasosTotales[])
{

	for (int i = 0; i < 6; i++)
	{

		pasosTotales[i] = 0;

	}

}

void pasosRandom(int pasosTotales[], int pasos[], int cantidad, string nombreCab[], int n[], string color[], int posicionMayor)
{

	while (pasosTotales[1] < 1000 & pasosTotales[2] < 1000 & pasosTotales[3] < 1000 & pasosTotales[4] < 1000 & pasosTotales[5] < 1000 & pasosTotales[0] < 1000)
	{

		for (int i = 0; i < cantidad; i++)
		{
			pasos[i] = 1 + rand() % (21 - 1);

		}

		pasosTotales[1] = pasosTotales[1] + pasos[1];
		pasosTotales[2] = pasosTotales[2] + pasos[2];
		pasosTotales[3] = pasosTotales[3] + pasos[3];
		pasosTotales[4] = pasosTotales[4] + pasos[4];
		pasosTotales[5] = pasosTotales[5] + pasos[5];
		pasosTotales[0] = pasosTotales[0] + pasos[0];

		for (int i = 0; i < 50; i++)
		{

			if (i % 4 == 0 & pasosTotales[i])
			{
				cout << "El caballo " << nombreCab[posicionMayor] << " color " << color[posicionMayor] << " con el numero " << n[posicionMayor] << " va " << pasosTotales[i] << " metros " << endl;
			}
		}
	}
}

void calcularGanador(int pasosTotales[], int cantidad, int &masGrande, int &posicionMayor)
{

	for (int i = 0; i < cantidad; i++)
	{

		if (pasosTotales[i] > masGrande)
		{
			masGrande = pasosTotales[i];
			posicionMayor = i;
		}

	}
}

void mostrarGanador(string nombreCab[], int n[], string color[], int posicionMayor)
{

	cout << "El caballo " << nombreCab[posicionMayor] << " color " << color[posicionMayor] << " con el numero " << n[posicionMayor] << " gano la carrera " << endl;
}

void main()
{

	int cantidad, n1, n[6], pasos[6], pasosTotales[6], masGrande = 0, posicionMayor = 0;
	string nombre, nombreCab[6], color[6];


	cantidad = pedirEntero("Ingrese la cantidad de caballos de la carrera: ");
	cantidad = verificarCantidad(cantidad, "Ingrese la cantidad de caballos de la carrera: ");
	system("cls");

	ingresarVectorNumero(n, cantidad, "ingrese el numero del caballo");
	system("cls");
	pedirVectorColor(color, cantidad, "ingrese el color del caballo");
	system("cls");
	pedirVectorNombre(nombreCab, cantidad, "ingrese el nombre del caballo");
	system("cls");

	pasosTotalesCero(pasosTotales);
	pasosRandom(pasosTotales, pasos, cantidad, nombreCab, n, color, posicionMayor);
	calcularGanador(pasosTotales, cantidad, masGrande, posicionMayor);
	mostrarGanador(nombreCab, n, color, posicionMayor);


	system("pause");
}