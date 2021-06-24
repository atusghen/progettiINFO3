#ifndef AGENDA_ANNIVERSARIO_H_
#define AGENDA_ANNIVERSARIO_H_

#include "EventoRapido.h"

class Anniversario: virtual public EventoRapido
{
public:
	static Anniversario* creaEvento();
	Anniversario();
	Anniversario(string a, string b, int i);
	virtual ~Anniversario();
protected:
	int priority;

};



#endif /* AGENDA_ANNIVERSARIO_H_ */
