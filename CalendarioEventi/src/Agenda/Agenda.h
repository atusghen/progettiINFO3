#ifndef AGENDA_AGENDA_H_
#define AGENDA_AGENDA_H_

#include "EventoRapido.h"
#include "EventoStd.h"
#include "Evento.h"
#include "Compleanno.h"
#include<iostream>
#include<vector>
#include<memory>

using namespace std;

class Agenda {
private:
	Agenda();
	virtual ~Agenda();
	vector<shared_ptr<EventoRapido>> vectAgenda; ///
public:
	//firme
	static Agenda* getAgendaIstance(); //agenda è implementato come singleton: se non è inizializzato lo crea, infine restituisce l'istanza
	static void visualizzaEventi();
	static void cancellaEvento();
	static void inserisciEvento();
	static bool hasEvents(string mese,string gg, string anno); //controlla se esistono eventi per la seguente data
};

#endif /* AGENDA_AGENDA_H_ */
