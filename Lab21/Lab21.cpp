
#include <iostream>
#include <conio.h>


using namespace std;

class  Employer //служащий
{ 
public:	
	string name;
	string infa;

	virtual void Print() = 0;

	~Employer() {

	}

};
class President : virtual  public Employer
{
public:

	President (){
		name = "Leonid";
		infa = " I am a prizident the Ukraine";
	}
	President(string name, string infa) : President(){
		this->name = name;
	    this->infa = infa;
	}
	virtual ~President() {
		this->name.clear();
		this->infa.clear();
	}

	void Print() override {
		cout << "My name:" << name << "\tInfo:" << infa << endl;
	}


};
class Manager : virtual public Employer
{
public:

	Manager() {
		name = "Vasul";
		infa = " I am a Manager of VTC";
	}
	Manager(string name, string infa) : Manager() {
		this->name = name;
		this->infa = infa;
	}
	virtual ~Manager() {
		this->name.clear();
		this->infa.clear();
	}

	void Print() override {
		cout << "My name:" << name << "\tInfo:" << infa << endl;
	}


};
class Worker : virtual public Employer
{
public:

	Worker() {
		name = "Gricha";
		infa = " I am a Worker of VTC";
	}
	Worker(string name, string infa) : Worker() {
		this->name = name;
		this->infa = infa;
	}
	virtual ~Worker() {
		this->name.clear();
		this->infa.clear();
	}

	void Print() override {
		cout << "My name:" << name << "\tInfo:" << infa << endl;
	}



};

int main(){

Employer* inst[3];
inst[0] = new President;
inst[1] = new Manager;
inst[2] = new Worker;

for (size_t i = 0; i < 3; i++)
{
	inst[i]->Print();
}

	_getch();
	return 0;
}
