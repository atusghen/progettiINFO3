#include "Compleanno.h"

Compleanno::Compleanno() {
	nome="";
	data="";
	time="";
	fusorario=0;
	nripetizione=true;
	luogo="";
	descrizione="";
}

Compleanno::Compleanno(string a, string b, string c, int d, bool e, string f, string g) {
	nome=a;
	data=b;
	time=c;
	fusorario=d;
	nripetizione=e;
	luogo=f;
	descrizione=g;
}

Compleanno::~Compleanno() {
delete &nome;
delete &data;
delete &time;
delete &fusorario;
delete &nripetizione;
delete &luogo;
delete &descrizione;
}

Compleanno* Compleanno::creaEvento()
{
	string nome="";
	string	data="";
	string	time="";
	int	fusorario=0;
	bool	nripetizione=false;
	string	luogo="";
	string	descrizione="";

	cout<<"inserisci nome compleanno	->";	cin>>nome;
	nome="Compleanno di"+nome;
	while(true){	cout<<"inserisci data evento formato: ggmmaaaa	->";	cin>>data;
		if(Giorno::valid(data) && Mese::valid(data) && Anno::valid(data)){break;}
	}
	cout<<"inserisci ora formato mm:ss	->";	cin>>time;
	cout<<"inserisci fuso formato +-h	->";	cin>>fusorario;
	nripetizione=true;
	cout<<"inserisci luogo	->";	cin>>luogo;
	cout<<"inserisci descrizione	->";	cin>>descrizione;
	return new Compleanno(nome,data,time,fusorario,nripetizione,luogo,descrizione);
	}



