#include "room.h"

class Room:public Department{
	public:
		int idRoom;
		string nameRoom;
	    void input(){
	    	Department::input();
	    	cout<<"idRoom:";
			cin>>idRoom;
			cin.ignore();
			cout<<"nameRoom:";
			getline(cin,nameRoom);
		}	
		void output(){
			Department::output();
			cout<<"idRoom:"<<idRoom<<" "<<"nameRoom:"<<nameRoom<<endl;	
		}
};
class Equipment:public Room{
	public:
		int idDevice;
		string nameDevice; 
		void input(){
	    	Room::input();
	    	cout<<"idDevice:";
			cin>>idDevice;
			cin.ignore();
			cout<<"nameDevice:";
			getline(cin,nameDevice);
		}	
		void output(){
			Room::output();
			cout<<"idDevice:"<<idDevice<<" "<<"nameDevice:"<<nameDevice<<endl;	
		}		
};
class ListEquipment:public Equipment{
	public:
		void inputlist(Equipment ListEqui[], int n){
			for(int i=0; i<n; i++){
				cout<<"Khoa thu "<<i+1<<": "<<endl;
				ListEqui[i].input();
			}
		}
		void outputlist(Equipment ListEqui[], int n){
			for(int i=0; i<n; i++){
				ListEqui[i].output();
			}
		}
};
