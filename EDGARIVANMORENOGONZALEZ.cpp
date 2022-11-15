#include<iostream>
#include<conio.h>
#include<string.h>
#include<string>
#include<fstream>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>

//https://github.com/ChatowGamer/GPO011873866EdgarMoreno/tree/main//

using namespace std;

int* numart, * date, registros, n = 1;
string* nombre, * clasf, * caract, * descp, * gnr;
float* preu, * iva, * total;

void alta();
void modificar();
void eliminar();
void lista();
void archivo();

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int opcion;

	printf("\t ***NADEKO STORE*** \n");
	printf("1.-Agregar Articulo \n2.-Modificar Articulo \n3.-Eliminar Articulo \n4.-Lista de Articulos \n5.-Limpiar pantalla \n6.-Salir \n");
	scanf_s("%d", &opcion);

	switch (opcion)
	{
	case 1: 
		alta();
		system("pause");
		return main();
		break;

	case 2: 
		modificar();
		system("pause");
		return main();
		break;

	case 3: 
		eliminar();
		system("pause");
		return main();
		break;

	case 4: 
		lista();
		system("pause");
		return main();
		break;

	case 5:  
		system("cls");
		return main();
		break;

	case 6:  
		archivo();
		exit(1);
		system("pause");
		break;

	default:   
		printf("Opcion incorrecta \nIngrese una opcion valida");
		system("pause");
		return main();
		break;
	}
}

void alta()
{
	printf("Cuantos registros quiere dar de alta: \n");
	scanf_s("%d", &registros);
	if (registros > 0)
	{
		numart = new int[registros];
		date = new int[registros];
		nombre = new string[registros];
		clasf = new string[registros];
		caract = new string[registros];
		gnr = new string[registros];
		descp = new string[registros];
		preu = new float[registros];
		iva = new float[registros];
		total = new float[registros];

		for (int i = 0; i < registros; i++)
		{
			printf("Ingrese el numero del articulo: \n");
			scanf_s("%d", &numart[i]);
			do
			{
				if (numart[i] != numart[i - n])
				{
					n = n + 1;
				}
				else
				{
					printf("El articulo ya esta ocupado \n");
					printf("Ingrese el nuevo numero de articulo: \n");
					scanf_s("%d", numart[i]);
				}
			} while (n < registros);
			printf("Ingrese la fecha de lanzamiento: \n");
			scanf_s("%d", &date[i]);
			printf("Ingrese el nombre del videojuego: \n");
			cin.ignore();
			getline(cin, nombre[i]);
			printf("Ingrese la clasificacion del videojuego: \n");
			getline(cin, clasf[i]);
			printf("Ingrese las caracteristicas del videojuego: \n");
			getline(cin, caract[i]);
			printf("Ingrese el genero del videojuego: \n");
			getline(cin, gnr[i]);
			printf("Ingrese la descripcion del videojuego: \n");
			getline(cin, descp[i]);
			printf("Ingrese el precio del videojuego: \n");
			scanf_s("%f", &preu[i]);
			iva[i] = preu[i] * .16;
			total[i] = preu[i] + iva[i];
			printf("---------------------------------------------------- \n\n");  



			if (i == (registros - 1))
			{
				break;

			}
		}
	}
	else
	{
		printf("El valor ingresado no es valido \n");
	}
}

void modificar()
{
	int mod;

	printf("Ingrese el numero de articulo que desea modificar: \n");
	scanf_s("%d", &mod);
	if (mod > 0)
	{
		for (int i = 0; i < registros; i++)
		{
			if (mod == numart[i])
			{
				printf("Ingrese la fecha de lanzamiento: \n");
				scanf_s("%d", &date[i]);
				printf("Ingrese el nombre del videojuego: \n");
				cin.ignore();
				getline(cin, nombre[i]);
				printf("Ingrese la clasificacion del videojuego: \n");
				getline(cin, clasf[i]);
				printf("Ingrese las caracteristicas del videojuego: \n");
				getline(cin, caract[i]);
				printf("Ingrese el genero del videojuego: \n");
				getline(cin, gnr[i]);
				printf("Ingrese la descripcion del videojuego: \n");
				getline(cin, descp[i]);
				printf("Ingrese el precio del videojuego: \n");
				scanf_s("%f", &preu[i]);
				iva[i] = preu[i] * .16;
				total[i] = preu[i] + iva[i];
			}
		}
	}
	else
	{
		printf("Opcion invalida \n");
	}

}

void eliminar()
{
	int elm;
	printf("Ingrese el numero del articulo a eliminar: \n");
	scanf_s("%d", &elm);

	for (int i = 0; i < registros; i++)
	{
		if (elm == numart[i])
		{
			numart[i] = 0;
		}
	}

}

void lista()
{
	int op2 = 0;
	string busc;

	printf("Buscar por \n1.-Clasificacion \n2.-Genero \n3.-Ver todos \n4.-Salir \n");
	scanf_s("%d", &op2);

	switch (op2)
	{

	case 1:
		printf("Ingrese la clasificacion a buscar: \n");
		cin.ignore();
		getline(cin, busc);
		for (int i = 0; i < registros; i++)
		{
			if (clasf[i] == busc)
			{
				printf("Numero articulo: %d \n", numart[i]);
				printf("Fecha: %d \n", date[i]);
				printf("Nombre: %s \n", nombre[i].c_str());
				printf("Clasificacion: %s \n", clasf[i].c_str());
				printf("Genero: %s \n", gnr[i].c_str());
				printf("Caracteristicas: %s \n", caract[i].c_str());
				printf("Descripcion: %s \n", descp[i].c_str());
				printf("Precio: %f \n", preu[i]);
				printf("Iva: %f \n", iva[i]);
				printf("Total: %f \n", total[i]);
			}
		}
		break;

	case 2:
		printf("Ingrese el genero a buscar: \n");
		cin.ignore();
		getline(cin, busc);
		for (int i = 0; i < registros; i++)
		{
			if (gnr[i] == busc)
			{
				printf("Numero articulo: %d \n", numart[i]);
				printf("Fecha: %d \n ", date[i]);
				printf("Nombre: %s \n", nombre[i].c_str());
				printf("Clasificacion: %s \n", clasf[i].c_str());
				printf("Genero: %s \n", gnr[i].c_str());
				printf("Caracteristicas: %s \n", caract[i].c_str());
				printf("Descripcion: %s \n", descp[i].c_str());
				printf("Precio: %f \n", preu[i]);
				printf("Iva: %f \n", iva[i]);
				printf("Total: %f \n", total[i]);
			}
		}
		break;

	case 3:
		for (int i = 0; i < registros; i++)
		{
			if (numart[i] != 0)
			{
				printf("Numero articulo: %d \n", numart[i]);
				printf("Fecha: %d \n ", date[i]);
				printf("Nombre: %s \n", nombre[i].c_str());
				printf("Clasificacion: %s \n", clasf[i].c_str());
				printf("Genero: %s \n", gnr[i].c_str());
				printf("Caracteristicas: %s \n", caract[i].c_str());
				printf("Descripcion: %s \n", descp[i].c_str());
				printf("Precio: %f \n", preu[i]);
				printf("Iva: %f \n", iva[i]);
				printf("Total: %f \n", total[i]);
			}
		}

	case 4:
		break;

	default:
		printf("Opcion incorrecta \nIngrese una opcion valida \n");
		return lista();
		break;
	}
}

void archivo()
{
	ofstream archivo;
	string nombredelarchivo;

	nombredelarchivo = "NADEKOSTORE";
	archivo.open(nombredelarchivo.c_str(), ios::out);

	if (archivo.fail())
	{
		printf("No se genero el archivo \n");
		system("pause");
		exit(1);
	}

	archivo << "\t\t INFORMACION \n";
	for (int i = 0; i < registros; i++)
	{
		if (numart[i] != 0)
		{
			archivo << "Registro " << i + 1 << endl;
			archivo << "Numero articulo: " << numart[i] << endl;
			archivo << "Fecha: " << date[i] << endl;
			archivo << "Nombre: " << nombre[i].c_str() << endl;
			archivo << "Clasificacion: " << clasf[i].c_str() << endl;
			archivo << "Genero: " << gnr[i].c_str() << endl;
			archivo << "Caracteristicas: " << caract[i].c_str() << endl;
			archivo << "Descripcion: " << descp[i].c_str() << endl;
			archivo << "Precio: " << preu[i] << endl;
			archivo << "Iva: " << iva[i] << endl;
			archivo << "Total: " << total[i] << endl;
		}
	}

	archivo.close();
}