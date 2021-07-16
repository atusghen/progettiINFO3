#include "Agenda.h"

Agenda::Agenda() {}
Agenda::~Agenda() {}
static bool inizializzato = false;
static Agenda* uno;

Agenda* Agenda::getAgendaIstance() {
	if (!inizializzato) {
		uno = new Agenda();
		inizializzato = true;
		cout<<"prima inizializzazione completata"<<endl;
		uno->vectAgenda = vector<shared_ptr<EventoRapido>>();
	}
	return uno;
}

void Agenda::visualizzaEventi()
{
	Agenda* istanza=Agenda::getAgendaIstance();
	for(int i=0;i<(int) istanza->vectAgenda.size();i++)
	{
		//qui serve richiamare il print adatto
		istanza->vectAgenda[i].get()->stampaEvento();
	}
	cout<<endl;
	cout<<"all done"<<endl;
	cout<<endl;
}

void Agenda::cancellaEvento()
{
	Agenda* istanza=Agenda::getAgendaIstance();
	if((int) istanza->vectAgenda.size()==0){cout<<"nessun evento da cancellare"<<endl; return;}
	for(int i=0;i<(int) istanza->vectAgenda.size();i++)
	{
		cout<<"Evento n."<<i<<endl;
		istanza->vectAgenda[i].get()->stampaEvento();
	}
	cout<<"quale evento vuoi cancellare? inserisci un numero: "; int i=0; cin>>i; cout<<endl;
	istanza->vectAgenda.erase(istanza->vectAgenda.begin()+i);
	cout<<"Evento eliminato correttamente"<<endl;
}


void Agenda::inserisciEvento()
{
	Agenda* istanza=Agenda::getAgendaIstance();
	int i=0;
	cout<<"che tipo di evento vuoi inserire?\n1-Evento Rapido 2-Anniversario 3-Evento Standard 4-Compleanno\n->";
	cin>>i;
	switch (i)
	{
	case 1:
		//istanza->vectAgenda.emplace_back(EventoRapido::creaEvento()); break;
		istanza->vectAgenda.emplace_back(Evento<EventoRapido>::creaEvento()); break;
	case 2:
		istanza->vectAgenda.emplace_back(Evento<Anniversario>::creaEvento()); break;
	case 3:
		istanza->vectAgenda.emplace_back(Evento<EventoStd>::creaEvento()); break;
	case 4:
		istanza->vectAgenda.emplace_back(Evento<Compleanno>::creaEvento()); break;
	default:
		cout<<"scelta non valida"<<endl; break;
	}
	cout<<endl;
	cout<<"all done"<<endl;
}

bool Agenda::hasEvents(string mese,string giorno,string anno)
	{
		Agenda* istanza=Agenda::getAgendaIstance();
	string temp=giorno+mese+anno;
	for(int i=0;i<(int)istanza->vectAgenda.size();i++)
	{
		if(istanza->vectAgenda[i].get()->getData()==temp)
		{return true;}
	}
	return false;
}
