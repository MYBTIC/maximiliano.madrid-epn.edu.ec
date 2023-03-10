//-->> Arboles Binaros de busqueda - Recorridos por amplitud por Orden, Pre-Orden y Post-Orden
#include <iostream>
#include<vector>
#include "../lib/mmFuncionLectura.h"
#include"../lib/mmColors.h"
#include<windows.h>
#include <cstdlib>
#include <stdlib.h>
using namespace std;

const string MMSeparacion = "---";
const string MMNombre = "Maximiliano Madrid";
const string MMCedula = "1750352450";

struct nodo{

     int mmCapacidadBelica;
     string mmGeolocolizacion;
     string mmArmisticio;

     struct nodo *izq, *der;
};

typedef struct nodo *ABB;
/* es un puntero de tipo nodo que hemos llamado ABB, que ulitizaremos
   para mayor facilidad de creacion de variables */

int mmCapacidadBelica(vector<int>& numeros) {
    int suma = 0;
    for (int numero : numeros) {
        suma += numero;
    }
    return suma;
}

ABB crearNodo(int x)
{
     ABB nuevoNodo = new(struct nodo);
     nuevoNodo->mmCapacidadBelica = x;
     nuevoNodo->izq = NULL;
     nuevoNodo->der = NULL;

     return nuevoNodo;
}

// void insertar(ABB &arbol, string city, int x, string arm)
// {
//      if(arbol==NULL)
//      {
//            arbol = crearNodo(x);
//      }
//      else if(x < arbol->mmCapacidadBelica)
//           insertar(arbol->izq, x);
//      else if(x > arbol->mmCapacidadBelica)
//           insertar(arbol->der, x);
// }

void preOrden(ABB arbol)
{
     if(arbol!=NULL)
     {
          cout << arbol->mmCapacidadBelica <<" ";
          preOrden(arbol->izq);
          preOrden(arbol->der);
     }
}

void enOrden(ABB arbol)
{
     if(arbol!=NULL)
     {
          enOrden(arbol->izq);
          cout << arbol->mmCapacidadBelica << " ";
          enOrden(arbol->der);
     }
}

void postOrden(ABB arbol)
{
     if(arbol!=NULL)
     {
          postOrden(arbol->izq);
          postOrden(arbol->der);
          cout << arbol->mmCapacidadBelica << " ";
     }
}

void verArbol(ABB arbol, int n)
{
     if(arbol==NULL)
          return;
     verArbol(arbol->der, n+1);

     for(int i=0; i<n; i++)
         cout<<"   ";

     cout<< arbol->mmCapacidadBelica <<endl;

     verArbol(arbol->izq, n+1);
}

int main()
{
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    ABB arbol = NULL;   // creado Arbol

    int n = (mmNumberLocage("files/mmCoordenadas.txt", MMSeparacion))+1;  // Numero de la coordenada.
    int h;
    vector<int> VectorNumeros;
    vector<string>VectorString;
    vector<string>VectorHola;
    string s1; //Nombre de la ciudad 
    string s2 = "TFA";

    
     mmNumberGot("files/mmCoordenadas.txt", s1, VectorNumeros, n, s2);
     //mmCorregirVectorNumeros(VectorNumeros, n);
     mmCorregirVectorNumeros(VectorNumeros, n);
     mmEliminarRepetidos(VectorNumeros);
    h = mmCapacidadBelica(VectorNumeros);
     //mmAsignarString1();
     //NonSpecificWords("files/mmCoordenadas.txt", s1, VectorHola, n, s2);

     //cout<<l;
     system("cls");
     SetConsoleTextAttribute(hConsole, 13);
     cout<<"\t\t\t\t\t\t\t[+]Leyendo Coordenadas:"<<"\n\n";
     SetConsoleTextAttribute(hConsole, 4);
     cout<<">> Error: Cap,Geo,    tipoArsenal -> stoi";

     SetConsoleTextAttribute(hConsole, 1);
     mmJustLectura("files/mmCoordenadas.txt");



     cout<<"\n\n";
    for(int i=0; i<n; i++)
    {          
        //insertar( arbol, s1, x, s2);
    }
     mmBarraProgresoUser(100);
     system("pause");
    system("cls");
     SetConsoleTextAttribute(hConsole, 2);
    cout <<"\t\t\t [+]Informacion Arbol Binario de Capacidad belica Ucraniana \n\n";
    SetConsoleTextAttribute(hConsole, 3);
    cout <<"Developer-Nombre: "<<MMNombre<<"\n\n";
    SetConsoleTextAttribute(hConsole, 8);
    cout <<"Developer-cedula: "<<MMCedula<<"\n\n";
    cout <<"Capacidad Belica: "<<h<<"\n\n";
    SetConsoleTextAttribute(hConsole, 14);
    cout <<"Coordenadas Total: "<<n<<"\n\n";
    SetConsoleTextAttribute(hConsole, 15);
    cout <<"Coordenadas-SecCarga: ";
    for (int i = 0; i < n; i++)
    {
     cout<<VectorNumeros[i]<<" ";
    }
    cout<<"\n\n";


//     cout << "\n Recorridos del ABB";
//     cout << "\n\n En orden   :  ";   enOrden(arbol);
//     cout << "\n\n Pre Orden  :  ";   preOrden(arbol);
//     cout << "\n\n Post Orden :  ";   postOrden(arbol);
//     cout << endl << endl;
    return 0;
}
