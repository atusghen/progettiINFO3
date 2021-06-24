#ifndef AGENDA_EVENTOSTD_H_
#define AGENDA_EVENTOSTD_H_

#include "EventoRapido.h"
using namespace std;

class EventoStd: virtual public EventoRapido
{
public:
	virtual ~EventoStd();
	virtual void stampaEvento();		//virtuale perchè così dal vector riesco a chiamare il print giusto
	virtual string getData();
	static EventoStd* creaEvento();
protected:
	EventoStd();
	EventoStd(string a, string b, string c,
			int d, bool e, string f, string g);
	string time;
	int fusorario;
	bool nripetizione;
	string luogo;
	string descrizione;
};

#endif /* AGENDA_EVENTOSTD_H_ */
