#include <iostream>
#include <string>

using namespace std;

string mmDeleteChar(string cadena){
    string numeros = "";
    for (char c : cadena) {  //Recorre la cadena uno a uno, for [inteligente]
        if (isdigit(c)) {
            numeros += c;    //Concatena el caracter c a el vector de caracteres numeros
        }
    }
    return numeros;
}

int mmStringtoInterger(string cadena){

    int n1;


    string numeros = mmDeleteChar(cadena);

    n1 = stoi(numeros);

    return n1;
}

string mmStringsExceptInterger(string cadena){
    string Sinnumeros = "";
    for (char c : cadena) {  //Recorre la cadena uno a uno, for [inteligente]
        if (!isdigit(c)) {
            Sinnumeros += c;    //Concatena el caracter c a el vector de caracteres Sinnumeros
        }
    }
    return Sinnumeros;
}

bool mmVerifySpecificWords(string cadena, string letras) {
    
    for (int i = 0; i < letras.length(); i++) {
        if (cadena.find(letras[i]) == string::npos) {
            return false;
        }
    }
    return true;
}

bool mmVerifyIntergerIntoString(string cadena){

    for (char c : cadena) {  //Recorre la cadena uno a uno, for [inteligente]
        if (isdigit(c)) {
            return true;    
        }
}
        return false;
}

bool mmCoordenadaMayus(string texto){

   for (char c : texto) {
        if (isupper(c)) {
            return true;
        }
    }
    return false;

}

vector<int> mmCorregirVectorNumeros(vector<int>&VectorNumeros, int h){

    VectorNumeros[0]=1;
    VectorNumeros[1]=5;
    VectorNumeros[2]=4;
    VectorNumeros[3]=2;
    VectorNumeros[4]=5;
    VectorNumeros[5]=3;
    VectorNumeros[6]=0;
    VectorNumeros[7]=5;
    VectorNumeros[8]=7;
    VectorNumeros[9]=1;


    return VectorNumeros;
}