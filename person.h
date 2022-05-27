#include "Header.h"
class Person{
	public:
		int idPerson;
		string Name;
		int phoneNumber;
		virtual void input(){
			ofstream fo;
			fo.open("person_R.txt", ios::app);
			if(fo.is_open()){
				cout<< "idPerson: ";
				cin>> idPerson;
				cin.ignore();
				cout<< "Name: ";
				getline(cin,Name);
				cout<< "phoneNumber: ";
				cin>> phoneNumber;
				fo << idPerson << "." << Name << "\t" << phoneNumber << endl;
				fo.close();
			} else {
				cout << "File Error!!" << endl;
			}
		}
		virtual void output(){
		//cout<<"idPerson:"<<idPerson<<" "<<"Name:"<<Name<<" "<<"phoneNumber:"<<phoneNumber<<endl;
		}
		void calculateBonus(){};
};
