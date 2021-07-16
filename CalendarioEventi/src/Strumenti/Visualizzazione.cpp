#include "Visualizzazione.h"
#include "../Agenda/EventoStd.h"
#include "../Agenda/Agenda.h"


void Visualizzazione::menu()
{
	cout<<"cosa vuoi fare?"<<endl;
	cout<<"1. stampa tutto il calendario dell'anno corrente"<<endl;
	cout<<"2. stampa tutto il calendario di un anno"<<endl;
	cout<<"3. crea evento"<<endl;
	cout<<"4. cancella evento"<<endl;
	cout<<"5. visualizza tutti gli eventi"<<endl;
	cout<<"0. esci"<<endl;
	cout<<endl;

	}

void Visualizzazione::scelta()
{
	int i=0;
	cout<<"inserisci la tua scelta   ->";
	cin>>i;
	cout<<endl;
	switch(i)
	{
	case 0:
			cout<<"esco..."<<endl;
			exit(1);
	case 1:
		Visualizzazione::printThisYear(); break;
	case 2:
		Visualizzazione::printAnotherYear(); break;
	case 3:
		Agenda::inserisciEvento(); break;
	case 4:
		Agenda::cancellaEvento(); break;
	case 5:
		Agenda::visualizzaEventi(); break;
	}
}


string Visualizzazione::sceltaAnno()
{
	string a;
	cout<<"in che anno? ->";
	cin>>a;
	return a;
	}

void Visualizzazione::printThisYear()
{
	Visualizzazione::printYear("2021");
}

void Visualizzazione::printAnotherYear()
{
	Visualizzazione::printYear(Visualizzazione::sceltaAnno());
}

void Visualizzazione::printYear(string anno)
{
	Agenda::getAgendaIstance();
	Anno* a=new Anno(anno);
	for(int i=1;i<13;i++)
	{
		cout<<"		"<<a->getMonth(i-1)->getName()<<" "<<to_string(a->numAnno())<<"		"<<endl;
		cout<<"lun	mar	mer	gio	ven	sab	dom"<<endl;
		int posizione=0;
		do{
			if(Giorno::giorni[posizione]==a->getMonth(i-1)->getFirstDay()->getName())
				{break;}
				else
				{posizione++;}
		}while(1);

		switch(posizione)
		{
		case 0: cout<<""; break;
		case 1: cout<<"	"; break;
		case 2: cout<<"		"; break;
		case 3: cout<<"			"; break;
		case 4: cout<<"				"; break;
		case 5: cout<<"					"; break;
		case 6: cout<<"						"; break;
		}

		for(int k=1;k<=Mese::numgg[i-1];k++)
		{
			string mese=""; string giorno="";
			if(i>0 && i<10){mese="0"+to_string(i);}else{mese=to_string(i);}
			if(k>0 && k<10){giorno="0"+to_string(k);}else{giorno=to_string(k);}

			if(Agenda::hasEvents(mese,giorno,to_string(a->numAnno())))
			{cout<<k<<"*	";}else{cout<<k<<"	";}
			if(posizione==6)
			{posizione=0; cout<<endl;}else{posizione++;}
		}
		cout<<endl;
		cout<<endl;
	}
}

