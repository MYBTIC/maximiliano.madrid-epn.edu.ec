#include <iostream>
using namespace std;

void mmBarraProgresoUser(int porcentaje){
string barra;
    for(int i = 0; i < 50; i++){
        if( i < (porcentaje/2)){
            barra.replace(i,1,"=");
        }else if( i == (porcentaje/2)){
            barra.replace(i,1,"-");
        }else{
            barra.replace(i,1," ");
        }
    }

    cout<< "\r" "[" << barra << "] ";
    cout.width( 3 );
    cout<< porcentaje << "%     " <<flush;
}