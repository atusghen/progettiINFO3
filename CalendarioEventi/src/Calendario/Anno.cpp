#include "Anno.h"
using namespace std;

int Anno::actual=2021;

Anno::Anno() {
	aaaa=Anno::actual;
	for(int i=0;i<12;i++)
	{mesi[i]=new Mese(i,0);}
}

Anno::Anno(string a) {
	aaaa=stoi(a);
	int bias=aaaa - Anno::actual;
	for(int i=0;i<12;i++)
	{mesi[i]=new Mese(i,bias);}
}

int Anno::numAnno()
{return this->aaaa;}


Anno::~Anno() {delete[] &mesi;}

Mese* Anno::getMonth(int i)
{ return mesi[i];}


Anno* Anno::getAnno()
{ return new Anno();}

bool Anno::valid(string data)
{
	string aaaa=data.substr(4,4);
	try{
		if(stoi(aaaa)<0 || stoi(aaaa)>9999){cout<<"formato data errato"<<endl; return false;}else{return true;}
			}catch(exception &e){cout<<"not a number"<<endl; return false;}
}

