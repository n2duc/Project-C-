#include "Header.h"

class Service{
	public:
		int idService;
		string nameService;
		virtual void input()
		{
			cout<<"idService:";
			cin>>idService;
			cin.ignore();
			cout<<"nameService:";
			getline(cin,nameService);	
		}	
		virtual void output()
		{
			cout<<"idService:"<<idService<<" "<<"nameService:"<<nameService<<endl;
		}	
		virtual float SumPrice() = 0;
};
