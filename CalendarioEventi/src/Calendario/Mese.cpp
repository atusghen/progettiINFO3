#include "Mese.h"

int Mese::numgg[12]={31,28,31,30,31,30,31,31,30,31,30,31};

Mese::Mese()
{nome="Gennaio"; num=0;	iniziale = new Giorno;}


Mese::Mese(int i, int bias) {
		num=i;
		switch (i){
		case 0: nome="Gennaio"; iniziale = new Giorno(Mese::setfirstofMonth(i, bias), 1); break;
		case 1: nome="Febbraio"; iniziale = new Giorno(Mese::setfirstofMonth(i, bias), 1); break;
		case 2: nome="Marzo"; iniziale = new Giorno(Mese::setfirstofMonth(i, bias), 1); break;
		case 3: nome="Aprile"; iniziale = new Giorno(Mese::setfirstofMonth(i, bias), 1); break;
		case 4: nome="Maggio"; iniziale = new Giorno(Mese::setfirstofMonth(i, bias), 1); break;
		case 5: nome="Giugno"; iniziale = new Giorno(Mese::setfirstofMonth(i, bias), 1); break;
		case 6: nome="Luglio"; iniziale = new Giorno(Mese::setfirstofMonth(i, bias), 1); break;
		case 7: nome="Agosto"; iniziale = new Giorno(Mese::setfirstofMonth(i, bias), 1); break;
		case 8: nome="Settembre"; iniziale = new Giorno(Mese::setfirstofMonth(i, bias), 1); break;
		case 9: nome="Ottobre"; iniziale = new Giorno(Mese::setfirstofMonth(i, bias), 1); break;
		case 10: nome="Novembre"; iniziale = new Giorno(Mese::setfirstofMonth(i, bias), 1); break;
		case 11: nome="Dicembre"; iniziale = new Giorno(Mese::setfirstofMonth(i, bias), 1); break;
		}

	}
Mese::~Mese() {
		delete &nome;
		delete &num;
		delete iniziale;
	}

string Mese::getName()
{ return nome;}

Giorno* Mese::getFirstDay()
{return iniziale;}

string Mese::setfirstofMonth(int n, int bias)
{
	int numerogiorni=0;
	for(int i=0;i<n;i++){numerogiorni=numerogiorni + numgg[i]; }
	numerogiorni=(numerogiorni +4+ bias) % 7;
	return Giorno::giorni[numerogiorni];
}

bool Mese::valid(string data)
{
	string mm=data.substr(2,2);
	try{
		if(stoi(mm)<0 || stoi(mm)>12){cout<<"formato data errato"<<endl; return false;}else{return true;}
			}catch(exception &e){cout<<"not a number"<<endl; return false;}
}

bool Mese::valid(int anno)
{
	try{
		if(anno<0 || anno>12){cout<<"formato data errato"<<endl; return false;}else{return true;}
			}catch(exception &e){cout<<"not a number"<<endl; return false;}
}
/*
void Mese::setInitial(Mese* gen, int n)
{
	int posizione=0;

		do{
			if(Giorno::giorni[posizione]==gen->iniziale->getName())
				{break;}else{posizione++;}
		}while(posizione<7);

	int newpos=(n+posizione)% 7;
	string posiz=Giorno::giorni[newpos];
	gen->iniziale=new Giorno(posiz,newpos);
}

*/

