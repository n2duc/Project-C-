#include "Header.h"

class Department{
	public:
		int idDepartment;
		string nameDepartment;
		virtual void input()
		{
			cout<<"idDepartment:";
			cin>>idDepartment;
			cin.ignore();
			cout<<"nameDepartment:";
			getline(cin,nameDepartment);	
		}	
		virtual void output()
		{
			cout<<"idDepartment:"<<idDepartment<<" "<<"nameDepartment:"<<nameDepartment<<endl;
		}	
};
