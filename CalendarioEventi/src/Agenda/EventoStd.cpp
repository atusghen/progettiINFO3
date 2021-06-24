/*
 * EventoStd.cpp
 *
 *  Created on: 28 gen 2021
 *      Author: greco
 */

#include "EventoStd.h"

EventoStd::EventoStd() {
	nome="";
	data="";
	time="";
	fusorario=0;
	nripetizione=false;
	luogo="";
	descrizione="";
}

EventoStd::EventoStd(string a, string b,
		string c, int d, bool e, string f, string g) {
	nome=a;
	data=b;
	time=c;
	fusorario=d;
	nripetizione=e;
	luogo=f;
	descrizione=g;
}

EventoStd::~EventoStd() {
delete &nome;
delete &data;
delete &time;
delete &fusorario;
delete &nripetizione;
delete &luogo;
delete &descrizione;
}

void EventoStd::stampaEvento()
{
	cout<<endl;
	cout<<"stampo un Evento Standard..."<<endl;
	cout<<"nome:	"<<this->nome<<endl;
	cout<<"il "<<this->data<<" alle ore "<<this->time<<endl;
	cout<<"fuso orario GMT	"<<this->fusorario<<endl;
	if(this->nripetizione){cout<<"l'evento si ripete"<<endl;}else{cout<<"l'evento non si ripete"<<endl;}
	cout<<"l'evento si terra in:	"<<this->luogo<<endl;
	cout<<"descrizione:	";
	cout<<this->descrizione<<endl;
}

string EventoStd::getData()
{
	return data;}



EventoStd* EventoStd::creaEvento()
{
	string nome="";
	string	data="";
	string	time="";
	int	fusorario=0;
	bool	nripetizione=false;
	string	luogo="";
	string	descrizione="";

	cout<<"inserisci nome evento	->";	cin>>nome;
	while(true){	cout<<"inserisci data evento formato: ggmmaaaa	->";	cin>>data;
		if(Giorno::valid(data) && Mese::valid(data) && Anno::valid(data)){break;}
	}
	cout<<"inserisci ora formato mm:ss	->";	cin>>time;
	cout<<"inserisci fuso formato +-h	->";	cin>>fusorario;
	cout<<"l'evento è ricorrente ogni anno? 1-si 0-no";	cin>>nripetizione;
	cout<<"inserisci luogo	->";	cin>>luogo;
	cout<<"inserisci descrizione	->";	cin>>descrizione;
	return new EventoStd(nome,data,time,fusorario,nripetizione,luogo,descrizione);
	}


