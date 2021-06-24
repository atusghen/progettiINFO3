#ifndef AGENDA_EVENTORAPIDO_H_
#define AGENDA_EVENTORAPIDO_H_

#include<iostream>
//#include "../Calendario/Giorno.h"
//#include "../Calendario/Mese.h"
#include "../Calendario/Anno.h"
using namespace std;

class EventoRapido {
public:
	virtual ~EventoRapido();
	virtual void stampaEvento();		//virtuale perchè così dal vector riesco a chiamare il print giusto
	virtual string getData();
	static EventoRapido* creaEvento();
protected:
	EventoRapido();
	EventoRapido(string a, string b);
	string nome;
	string data;
};

#endif /* AGENDA_EVENTORAPIDO_H_ */
