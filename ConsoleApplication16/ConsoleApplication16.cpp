#include <iostream>
#include <string>
#include<windows.h>
using namespace std;
class Roditel
{
public:
	string get_Famil(string familia) { return familia; }
	string get_Imya(string imya) { return imya; }
	string get_Otch(string otch) { return otch; }
	void Setter (string Familia, string Imya, string Otch){ 
	familia = Familia; 
	imya = Imya; 
	otch = Otch; 
}
void COUTROD() { 	cout << " Фамилия  = " << familia << "  Имя = " << imya << " Отчество = " << otch << endl; }
protected: 
	string familia;
private:
	string imya; string otch;
};


class Deti:public Roditel
{
public:
	void COUTDETI() { cout << " Фамилия  = " << familia << "  Имя = " << name << " Отчество = " << f_name << endl; }

	Deti(string familia, string name, string f_name): Roditel()
	{
		this->familia = familia;
		this->name = name;
		this->f_name = f_name;
	}

	private:
		string name;
		string f_name;

};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	Roditel r1;
	r1.Setter("Иванов", "Иван", "Васильевич");
	r1.COUTROD();
	Deti d1("Иванов", "Николай", "Александрович");
	d1.COUTDETI();
}
