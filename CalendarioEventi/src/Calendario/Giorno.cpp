#include<iostream>
#include "Giorno.h"
#include<string.h>
using namespace std;

//costruttore
	Giorno::Giorno(){nome="ven"; num=1;}
	Giorno::Giorno(string g, int n){nome=g; num=n;}
//distruttore
	Giorno::~Giorno() {
		delete &nome;
		delete &num;
		}

string Giorno::giorni[]={"lun","mar","mer","gio","ven","sab","dom"};

string Giorno::getName()
{
	return nome;}

bool Giorno::valid(string data)
{
	string gg=data.substr(0,2);
	try{
		if(stoi(gg)<0 || stoi(gg)>31){cout<<"formato data errato"<<endl; return false;}else{return true;}
			}catch(exception &e){cout<<"not a number"<<endl; return false;}
}



