#ifndef CALENDARIO_MESE_H_
#define CALENDARIO_MESE_H_


#include "Giorno.h"
using namespace std;

class Mese {
	friend class Anno;
//cosi posso nascondere i costruttori non necessari
private:
	Mese();
	Mese(int i, int bias);
	virtual ~Mese();
	string nome;
	int num;
	Giorno* iniziale;
public:
	//controlla se la stringa passata contiene un numero utilizzabile come mese
	static bool valid(string data);
	static bool valid(int anno);

	//imposta il primo giorno del mese. viene assegnato solo il primo giorno ad ogni
	//mese poichè tutti i successivi si possono ottenere in maniera sequenziale
	static string setfirstofMonth(int n, int bias);

	static int numgg[];					//array che tiene il numero di giorni dei diversi mesi

	Giorno* getFirstDay();				//restituisce l'oggetto giorno del mese
	string getName();
	//void setInitial(Mese* gen, int n)	//imposta il primo giorno del mese di gennaio in base al bias passato

};

#endif /* CALENDARIO_MESE_H_ */
