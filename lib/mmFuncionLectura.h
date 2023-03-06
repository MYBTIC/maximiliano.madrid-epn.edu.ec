#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include"../lib/mmFuncionCaracteres2.h"

using namespace std;


int mmNumberLocage(string pathfile, string txt2)
{
    string txt;
    fstream f;
    int n=0;

    f.open(pathfile, ios_base::in);

    do
    {
       getline( f, txt);
       if (txt==txt2)
       {
        n++;
       }
       
    } while (!f.eof());
    return n;
}

void mmJustLectura(string pathfile)
{
    string txt;
    fstream f;

    f.open(pathfile, ios_base::in);

    do
    {
       getline( f, txt);
       cout<<txt<<endl;

    } while (!f.eof());
        
}

string mmNumberGot(string pathfile, string txt, vector<int>&VectorNumeros,int n, string txt2)
{
    VectorNumeros.resize(n);

    int i=0;
    fstream f;
    f.open(pathfile, ios_base::in);

    do
    {
        getline(f, txt);
           if (mmVerifyIntergerIntoString(txt))
           {
            VectorNumeros[i] = mmStringtoInterger(txt);
            i++;
           }
           
        

    } while (!f.eof());
    

    return txt,VectorNumeros,txt2;

}

string mmSpecificWordsGot(string pathfile, string txt, vector<string>&VectorString,int n, string txt2)
{
    VectorString.resize(n);

    int i=0;
    fstream f;
    f.open(pathfile, ios_base::in);

    do
    {
        getline(f, txt);
           if (mmVerifySpecificWords(txt,txt2))
           {
            VectorString[i] = txt;
            i++;
           }

        

    } while (!f.eof());
    

    return txt,VectorString,txt2;

}

string mmNonSpecificWords(string pathfile, string txt, vector<string>&VectorSudo,int n, string txt2)
{
    VectorSudo.resize(n);

    int i=0, j=0;
    fstream f;
    f.open(pathfile, ios_base::in);

    do
    {
        getline(f, txt);

           if ((mmVerifySpecificWords(txt, txt2) == false) || (mmVerifyIntergerIntoString(txt)==false))
           {
        
                VectorSudo[i] = txt;
                i++;
            
            
            
           }

        

    } while (!f.eof());
    

    return txt,VectorSudo,txt2;

}