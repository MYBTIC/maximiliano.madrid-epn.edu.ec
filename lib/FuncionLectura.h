#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include"../lib/FuncionCaracteres2.h"


using namespace std;


int NumberLocage(string pathfile)
{
    string txt;
    fstream f;
    int n=0;

    f.open(pathfile, ios_base::in);

    do
    {
       getline( f, txt);
       if (txt=="----------")
       {
        n++;
       }
       
    } while (!f.eof());
    return n;
}

void JustLectura(string pathfile)
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

string NumberGot(string pathfile, string txt, vector<int>&VectorNumeros,int n, string txt2)
{
    VectorNumeros.resize(n);

    int i=0;
    fstream f;
    f.open(pathfile, ios_base::in);

    do
    {
        getline(f, txt);
           if (VerifyIntergerIntoString(txt))
           {
            VectorNumeros[i] = StringtoInterger(txt);
            i++;
           }

        

    } while (!f.eof());
    

    return txt,VectorNumeros,txt2;

}

string SpecificWordsGot(string pathfile, string txt, vector<string>&VectorString,int n, string txt2)
{
    VectorString.resize(n);

    int i=0;
    fstream f;
    f.open(pathfile, ios_base::in);

    do
    {
        getline(f, txt);
           if (VerifySpecificWords(txt,txt2))
           {
            VectorString[i] = txt;
            i++;
           }

        

    } while (!f.eof());
    

    return txt,VectorString,txt2;

}

string NonSpecificWords(string pathfile, string txt, vector<string>&VectorSudo,int n, string txt2)
{
    VectorSudo.resize(n);

    int i=0, j=0;
    fstream f;
    f.open(pathfile, ios_base::in);

    do
    {
        getline(f, txt);

           if ((VerifySpecificWords(txt, txt2) == false) || (VerifyIntergerIntoString(txt)==false))
           {
        
                VectorSudo[i] = txt;
                i++;
            
            
            
           }

        

    } while (!f.eof());
    

    return txt,VectorSudo,txt2;

}