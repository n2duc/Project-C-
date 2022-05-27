#include "person.h"

class RegularEmp: public Person{
	public:
		string idRegular;
		string nameDepartment;
		float salaryDay;
		int workdayRegular;
		void input(){
			ofstream fo;
			fo.open("person_R.txt", ios::app);
			if(fo.is_open()){
				Person::input();
				cout<< "idRegular: ";
				cin>> this->idRegular;
				cin.ignore();
				cout<< "nameDepartment: ";
				getline(cin,this->nameDepartment);
				cout<< "salaryDay: ";
				cin>> this->salaryDay;
				cout<< "workdayRegular: ";
				cin>> this->workdayRegular;
				fo << idRegular << "\t" << nameDepartment << "\t" << salaryDay << " " << workdayRegular << endl;
				fo.close();
			} else {
				cout << "File Error!!" << endl;
			}
		}
		void output(){
//			ifstream fi;
//			string str;
//			fi.open("person_R.txt", ios::out);
//			if(fi.is_open()){
//				while(!fi.eof()){
//					getline(fi, str);
//					cout << str << "  " << endl;
//				}
//			} else {
//				cout << "Error !! Can not read file." << endl;
//			}
//			cout<<"idRegular:"<<idRegular<<" "<<"nameDepartment:"<<nameDepartment<<" "<<"salaryDay:"<<salaryDay<<" "<<"workdayRegular:"<<workdayRegular<<endl;
		}
		float calculateBonus(){
			if(workdayRegular > 20) {
				return salaryDay*0.3;
			} else {
				return salaryDay;
			}
		};
};
class ContractEmp: public Person{
	public:
		int idContract;
		string nameDepartment;
		float salaryDay;
		int workdayContract;
		void input(){
			ofstream fo;
			fo.open("person_C.txt", ios::app);
			if(fo.is_open()){
				Person::input();
				cout<< "idContract: ";
				cin>> this->idContract;
				cin.ignore();
				cout<< "nameDepartment: ";
				getline(cin,this->nameDepartment);
				cout<< "salaryDay: ";
				cin>> this->salaryDay;
				cout<< "workdayContract: ";
				cin>> this->workdayContract;
				fo << idContract << "\t" << nameDepartment << "\t" << calculateBonus() << " " << workdayContract << endl;
				fo.close();                                           
			} else {
				cout << "File Error!!" << endl;
			}
		}
		void output(){
			Person::output();
			cout<<"idContract:"<<idContract<<" "<<"nameDepartment:"<<nameDepartment<<" "<<"salaryDay:"<<calculateBonus()<<" "<<"workdayContract:"<<workdayContract<<endl;
		}
		float calculateBonus(){
			if(workdayContract > 22) {
				return salaryDay*0.25;
			} else {
				return salaryDay;
			}
		};
};
class listEmp
{
	public:
	Person *p[100];
	int n;
	void input()
	{
		n=0; 
		char chon,loai;
		do
		{
			cout<<"ragular or contract (r/c)?";
			cin>>loai;
			
			if(loai=='r')
			{
				p[n]=new RegularEmp;
			}	
			else
			{
				p[n]=new ContractEmp;
			}
			cin.ignore();
			p[n++]->input();
			cout<<"Tiep tuc (c/k):";
			cin>>chon;
			if((n==100) || (chon=='k'))
			{
				break;
			}
			
		}while(1);	
	}	
	void output() {
		ifstream fi;
		string str;
		fi.open("person_R.txt", ios::out);
		if(fi.is_open()){
			while(!fi.eof()){
				getline(fi, str);
				cout << str << "  " << endl;
			}
		} else {
			cout << "Error !! Can not read file." << endl;
		}
	}
};

class ExaminationPat: public Person{
	public:
		int idPatient;
		string Disease;
		string Medicine;
		void input(){
			ofstream fo;
			fo.open("person_E.txt", ios::app);
			if(fo.is_open()){
				Person::input();
				cout<< "idPatient: ";
				cin>> this->idPatient;
				cin.ignore();
				cout<< "Disease: ";
				getline(cin,this->Disease);
				cout<<"Medicine: ";
				getline(cin,this->Medicine);
				fo << idPatient << "\t" << Disease << "\t" << Medicine << endl;
				fo.close();
			}			
		}
		void output(){
			Person::output();
			cout<< "idPatient" <<idPatient<<" "<<"Disease"<< Disease <<" "<< "Medicine"<<Medicine<<endl;
		}
};
class CurePat: public Person{
	public:
		int idPatient;
		string chooseService;
		void input(){
			Person::input();
			cout<< "ID Cure Patient: ";
			cin>> this->idPatient;
			cin.ignore();
			cout<< "Choose Service: ";
			getline(cin,this->chooseService);
		}
		void output(){
			Person::output();
			cout<< "idPatient" <<idPatient<<" "<< "chooseService" << chooseService<<endl;
		}
};
class listRC{
public:
	Person *p[100];
	int n; 
	void input()
	{
		n=0;
		char chon,loai;
		do
		{
			cout<<"ExaminationPat or CurePat (e/c)?";
			cin>>loai;
			
			if(loai=='e')
			{
				p[n] = new ExaminationPat;
			}	
			else
			{
				p[n] = new CurePat;
			}
			cin.ignore();
			p[n++]->input();
			cout<<"Tiep tuc (c/k):";
			cin>>chon;
			if((n==100) || (chon=='k'))
			{
				break;
			}
			
		}while(1);	
	}	
	void output()
	{
		for(int i=0;i<n;i++)
		{
			p[i]->output();
		}
	}
};
