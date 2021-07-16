#ifndef AGENDA_COMPLEANNO_H_
#define AGENDA_COMPLEANNO_H_

#include "EventoStd.h"
#include "Anniversario.h"


class Compleanno: public EventoStd, public Anniversario
{
public:
	static Compleanno* creaEvento();
	virtual ~Compleanno();
protected:
	Compleanno();
	Compleanno(string a, string b, string c, int d, bool e, string f, string g);


};



#endif /* AGENDA_COMPLEANNO_H_ */
