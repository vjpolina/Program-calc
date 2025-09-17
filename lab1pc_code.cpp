#include <iostream>
#include <string>
using namespace std;

struct car {
	char data;
};

struct nod {
	car info;
	nod *urm;
};

int main()
{
	nod *prim, *ultim, *nou, *p;
	int count;

	cout<< "Indicati lungimea listei: ";
	cin>> count;

	cout<<endl;

	if (count<=0) {
		cout<<"Lista nu a putut fi creata.";
		return 0;
	}

	prim = new nod;
	cout<<"Introduceti un caracter mic: ";
	cin>>prim->info.data;

	prim->urm = NULL;
	ultim = prim;
	ultim->urm = NULL;

	if(count>1) {

		for(int i=1; i<count; i++) {
			nou= new nod;
			cout<<"Introduceti un caracter mic: ";
			cin>> nou->info.data;

			nou->urm = NULL;
			ultim->urm = nou;
			ultim = nou;
		}
	}



	cout<<endl;
	cout<<"Lista finala de litere (neschimbata): ";
	p=prim;

	while(p) {
		cout<< p->info.data <<" ";
		p=p->urm;
	}

	cout<< endl<< endl;

	cout<<"Lista finala de litere (schimbata): ";
	p=prim;

	while(p) {
		if(p->info.data=='a') cout<<"b ";
		else cout<< p->info.data <<" ";
		p=p->urm;
	}

	delete prim, ultim, nou, p;
	return 0;
}