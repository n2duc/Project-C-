#include "service.h"

class ServiceHighclass:public Service{
	public:
		int idHighclass;
		int dateHighclass;
		float priceHighclass;
	    void input(){
	    	Service::input();
	    	cout<<"idHighclass:";
			cin>>idHighclass;
			cout<<"dateHighclass:";
			cin>>dateHighclass;
			cout<<"priceHighclass:";
			cin>>priceHighclass;
		}	
		void output(){
			Service::output();
			cout<<"idHighclass:"<<idHighclass<<" "<<"dateHighclass:"<<dateHighclass<<" "<<"priceHighclass:"<<priceHighclass<<endl;	
		}
		float SumPrice(){
			return 0;
		}
};
class ServiceNormal:public Service{
	public:
		int idNormal;
		int dateNormal;
		float priceNormal;
	    void input(){
	    	Service::input();
	    	cout<<"idNormal:";
			cin>>idNormal;
			cout<<"dateNormal:";
			cin>>dateNormal;
			cout<<"priceNormal:";
			cin>>priceNormal;
		}	
		void output(){
			Service::output();
			cout<<"idNormal:"<<idNormal<<" "<<"dateNormal:"<<dateNormal<<" "<<"priceNormal:"<<priceNormal<<endl;	
		}
		float SumPrice(){
			return 0;
		}
};
class ListService
{
	public:
	Service *p[100];
	int n; 
	void input()
	{
		n=0;
		char chon,loai;
		do
		{
			cout<<"ServiceHighclass or ServiceNormal (h/n)?";
			cin>>loai;
			
			if(loai=='h')
			{
				p[n] = new ServiceHighclass;
			}	
			else
			{
				p[n] = new ServiceNormal;
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
