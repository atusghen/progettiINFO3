#ifndef STRUMENTI_VISUALIZZAZIONE_H_
#define STRUMENTI_VISUALIZZAZIONE_H_

#include<iostream>
#include<vector>
#include<memory>

//#include "../Agenda/EventoStd.h"
#include"../Calendario/Anno.h"
using namespace std;

class Visualizzazione {
public:
	static void getAgenda();
	static void inserisciEvento();
	static void menu();					//output del menu
	static void scelta();				//scelta dell'operazione da eseguire
	static void visualizzaEventi();
	static void printThisYear();		//seleziona l'anno 2021
	static void printAnotherYear();		//chiede l'anno da stampare
	static void printYear(string a);	//stampa l'anno passato come argomento
	static string sceltaAnno();			//chiede un numero come anno e lo restituisce come stringa
};

#endif /* STRUMENTI_VISUALIZZAZIONE_H_ */
