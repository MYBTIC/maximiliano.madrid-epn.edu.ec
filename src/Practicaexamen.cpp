//-->> Arboles Binaros de busqueda - Recorridos por amplitud por Orden, Pre-Orden y Post-Orden
#include <iostream>
#include<vector>
#include "../lib/FuncionLectura.h"
#include <cstdlib>
using namespace std;

struct nodo{

    string ciudad;
     int nro;
     string Armisticio;

     struct nodo *izq, *der;
};

typedef struct nodo *ABB;
/* es un puntero de tipo nodo que hemos llamado ABB, que ulitizaremos
   para mayor facilidad de creacion de variables */

ABB crearNodo(int x)
{
     ABB nuevoNodo = new(struct nodo);
     nuevoNodo->nro = x;
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
//      else if(x < arbol->nro)
//           insertar(arbol->izq, x);
//      else if(x > arbol->nro)
//           insertar(arbol->der, x);
// }

void preOrden(ABB arbol)
{
     if(arbol!=NULL)
     {
          cout << arbol->nro <<" ";
          preOrden(arbol->izq);
          preOrden(arbol->der);
     }
}

void enOrden(ABB arbol)
{
     if(arbol!=NULL)
     {
          enOrden(arbol->izq);
          cout << arbol->nro << " ";
          enOrden(arbol->der);
     }
}

void postOrden(ABB arbol)
{
     if(arbol!=NULL)
     {
          postOrden(arbol->izq);
          postOrden(arbol->der);
          cout << arbol->nro << " ";
     }
}

void verArbol(ABB arbol, int n)
{
     if(arbol==NULL)
          return;
     verArbol(arbol->der, n+1);

     for(int i=0; i<n; i++)
         cout<<"   ";

     cout<< arbol->nro <<endl;

     verArbol(arbol->izq, n+1);
}

int main()
{
    ABB arbol = NULL;   // creado Arbol

    int n = (NumberLocage("files/CoordenadasPrueba.txt"))+1;  // Numero de la coordenada.
    vector<int> VectorNumeros;
    vector<string>VectorString;
    vector<string>VectorHola;
    string s1; //Nombre de la ciudad 
    string s2 = "TFA";

    cout << "\n\t\t  ..[ ARBOL BINARIO DE BUSQUEDA ]..  \n\n";
    cout <<endl<< n<<endl; 

     NumberGot("files/CoordenadasPrueba.txt", s1, VectorNumeros, n, s2);
     SpecificWordsGot("files/CoordenadasPrueba.txt", s1, VectorString, n, s2);
     NonSpecificWords("files/CoordenadasPrueba.txt", s1, VectorHola, n, s2);

    for(int i=0; i<n; i++)
    {
        cout << " Datos del nodo " << i+1 <<": "<<endl;
          
        //insertar( arbol, s1, x, s2);
    }

    cout<<"\n\n\t\t"<<n;

    for (int i = 0; i < n; i++)
    {
     cout<<VectorNumeros[i]<<" ";
    }
    for (int i = 0; i < n; i++)
    {
     cout<<VectorString[i]<<" ";
    }
    for (int i = 0; i < n; i++)
    {
     cout<<VectorHola[i]<<" ";
    }
    

    cout << "\n Mostrando ABB \n\n";  verArbol( arbol, 0);
    cout << "\n Recorridos del ABB";
    cout << "\n\n En orden   :  ";   enOrden(arbol);
    cout << "\n\n Pre Orden  :  ";   preOrden(arbol);
    cout << "\n\n Post Orden :  ";   postOrden(arbol);
    cout << endl << endl;
    return 0;
}