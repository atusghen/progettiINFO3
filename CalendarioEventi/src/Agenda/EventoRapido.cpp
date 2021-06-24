/*
 * EventoStd.cpp
 *
 *  Created on: 28 gen 2021
 *      Author: greco
 */

#include "EventoRapido.h"

EventoRapido::EventoRapido() {
	nome="";
	data="";
}
EventoRapido::EventoRapido(string a, string b) {
	nome=a;
	data=b;
}
EventoRapido::~EventoRapido() {
	delete &nome;
	delete &data;
}

void EventoRapido::stampaEvento()
{
	//cout<<endl;
	cout<<"stampo un Evento Rapido..."<<endl;
	cout<<"nome:	"<<this->nome<<endl;
	cout<<"il "<<this->data<<endl;
	cout<<endl;
}

string EventoRapido::getData()
{
	return data;}

EventoRapido* EventoRapido::creaEvento()
{
	string nome="";
	string	data="";

	cout<<"inserisci nome evento	->";	cin>>nome;
	while(true){	cout<<"inserisci data evento formato: ggmmaaaa	->";	cin>>data;
		if(Giorno::valid(data) && Mese::valid(data) && Anno::valid(data)){break;}
	}
	return new EventoRapido(nome,data);
}



