#ifndef CALENDARIO_GIORNO_H_
#define CALENDARIO_GIORNO_H_
#include <iostream>
using namespace std;

class Giorno {
	friend class Mese;		//cosi posso nascondere i costruttori non necessari
private:
	string nome;
	int num;
	Giorno();
	Giorno(string g, int n);
	virtual ~Giorno();
public:
	static string giorni[];		//i nomi dei giorni
	string getName();
	static bool valid(string data);	//controlla se la stringa passata contiene un numero utilizzabile come giorno
};

#endif /* CALENDARIO_GIORNO_H_ */
