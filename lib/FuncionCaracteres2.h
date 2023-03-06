#include <iostream>
#include <string>

using namespace std;

string DeleteChar(string cadena){
    string numeros = "";
    for (char c : cadena) {  //Recorre la cadena uno a uno, for [inteligente]
        if (isdigit(c)) {
            numeros += c;    //Concatena el caracter c a el vector de caracteres numeros
        }
    }
    return numeros;
}

int StringtoInterger(string cadena){

    int n1;


    string numeros = DeleteChar(cadena);

    n1 = stoi(numeros);

    return n1;
}

string StringsExceptInterger(string cadena){
    string Sinnumeros = "";
    for (char c : cadena) {  //Recorre la cadena uno a uno, for [inteligente]
        if (!isdigit(c)) {
            Sinnumeros += c;    //Concatena el caracter c a el vector de caracteres Sinnumeros
        }
    }
    return Sinnumeros;
}

bool VerifySpecificWords(string cadena, string letras) {
    
    for (int i = 0; i < letras.length(); i++) {
        if (cadena.find(letras[i]) == string::npos) {
            return false;
        }
    }
    return true;
}

bool VerifyIntergerIntoString(string cadena){

    for (char c : cadena) {  //Recorre la cadena uno a uno, for [inteligente]
        if (isdigit(c)) {
            return true;    
        }
}
        return false;
}

bool CoordenadaMayus(string texto){

   for (char c : texto) {
        if (isupper(c)) {
            return true;
        }
    }
    return false;

}