/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int numvid, ALan, opc, valor=1000, impu=160, total;
   string vid, desc, gen, cla;
   
   cout <<"\t ***VideoGame Store GameFun*** \n";
   cout <<"1.-Agrega tu Articulo \n 2.-Modificar Articulo \n 3.- Eliminar Articulo \n 4.- Lista de Articulos \n 5.-Limpiar Pantalla 6.-Agradecimientos \n";
   cin >> opc;
   
   switch (opc)
   {
    case 1: 
       cout << "Ingrese el numero de articulo\n"; 
    cin >> numvid; 
    cout << "Ingrese el nombre del videojuego\n"; 
    cin.ignore(); 
    getline(cin, vid);
    cout << "Ingrese año de lanzamiento\n"; 
    cin >> ALan; 
    cout << "Ingrese la clasificacion del videojuego\n"; 
    cin.ignore(); 
    getline(cin, cla); 
    cout << "Ingrese el descripcion del vieojuego\n"; 
    cin.ignore(); getline(cin, desc); 
    cout << "Ingrese genero del videojuego\n"; 
    cin.ignore(); getline(cin, gen); 
    cout << "Precio del videojuego: "<<valor<<"\n"; 
    total-valor+impu; 
    cout<< "Precio total es: "<<total<<"\n";
    
    return main();
    break;
    
    case 2:
    break;
    
    case 3:
    break;
    
    case 4:
    break;
    
    case 5:
    system("clear");
    return main();
    break;
    
    case 6:
    system("cls");
    cout << "Gracias por visitar GameFun \n";
    system("pause");
    break;
    
    default:
    system("cls");
    cout << "opcion no valida\n";
    system("pause");
    return main();
    
    break;
    
   }
    
}
