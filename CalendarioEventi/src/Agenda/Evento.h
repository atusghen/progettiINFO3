#include<iostream>
using namespace std;

template <typename T>
class Evento
{
public:
	virtual ~Evento()
	{
		delete &nome;
		delete &data;
	}

	virtual void stampaEvento()		//virtuale perchè così dal vector riesco a chiamare il print giusto
	{
		//cout<<endl;
		cout<<"stampo un Evento Rapido..."<<endl;
		cout<<"nome:	"<<this->nome<<endl;
		cout<<"il "<<this->data<<endl;
		cout<<endl;
	}

	virtual string getData() {return data;}

	static T* creaEvento()
	{
		return T::creaEvento();
	}
//protected:
Evento() {	nome=""; data="";}
Evento(string a, string b){nome=a; data=b;}
string nome;
string data;
};
