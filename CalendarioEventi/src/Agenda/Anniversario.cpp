#include "Anniversario.h"

Anniversario::Anniversario()
{
	nome="";
	data="";
	priority=0;
}

Anniversario::Anniversario(string a, string b,int i)
{
	nome=a;
	data=b;
	priority=i;
}

Anniversario::~Anniversario()
{
	delete &priority;
}

Anniversario* Anniversario::creaEvento()
{
	string nome="";
		string	data="";

		cout<<"inserisci nome evento	->";	cin>>nome;
		while(true){	cout<<"inserisci data evento formato: ggmmaaaa	->";	cin>>data;
			if(Giorno::valid(data) && Mese::valid(data) && Anno::valid(data)){break;}
		}
	int i=0;
	do{
	cout<<"inserisci una priorità da 1 a 10	->";	cin>>i; cout<<endl;
	if(i<0 && i>11){
		cout<<"out of range"<<endl;
	}
	}while(i<0 && i>11);

	return new Anniversario(nome,data,i);
	}

