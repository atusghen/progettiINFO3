#ifndef CALENDARIO_ANNO_H_
#define CALENDARIO_ANNO_H_

#include<iostream>
#include "Mese.h"
using namespace std;

class Anno {
private:
	static int actual;
	int aaaa;
	Mese *mesi[13];

public:
	Anno();				//costruisce l'anno 2021
	Anno(string a);		//costruisce l'anno indicato nella stringa
	virtual ~Anno();
	static Anno* getAnno();
	static bool valid(string data);		//verifica se la stringa continene un numero plausibile come anno
	Mese* getMonth(int i);				//restituisce il mese selezionato dall'argomento
	int numAnno();						//restituisce il numero dell'anno nel campo aaaa Es.2021

};


#endif /* CALENDARIO_ANNO_H_ */
