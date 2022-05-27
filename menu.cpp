#include "person.cpp"
#include "medicine.cpp"
#include "room.cpp"
#include "service.cpp"

void pressAnyKey() {
    cout << "Bam phim bat ky de tiep tuc...";
    getch();
    system("cls");
}

int main() {
	listEmp lE;
	listRC lR;
	listmedicine lM;
	ListEquipment lEq;
	ListService lS;
	int choose,a,b,c;

	while(true){
	cout << "\t\t**************** MENU ****************\n";
	cout << "\t\t**   Private hospital management    **\n";
	cout << "\t\t**----------------------------------**\n";
	cout << "\t\t**     1. Person                    **\n";
	cout << "\t\t**     2. Medicine                  **\n";
	cout << "\t\t**     3. Department                **\n";
	cout << "\t\t**     4. Service                   **\n";
	cout << "\t\t**     0. Exit!!!                   **\n";
	cout << "\t\t**************************************\n";
	cout << "\n************* CHOOSE MENU **************\n";
	
	cout << "Nhap lua chon: ";
	cin >> choose;
	switch (choose){
	case 1:	
		cout << "\n************* CHOOSE MENU **************\n";	
		cout << "**     1. Employee                 **\n";
		cout << "**     2. Parient                  **\n";
		cin >> a;
		switch(a){
			case 1:
				cout << "\n************* CHOOSE MENU *************\n";
				cout << "**     1. Input Employee.          **\n";
				cout << "**     2. Output Employee.         **\n";

				cin >> b;
					switch(b){
						case 1:
							cout << "\n----------Input Employee----------\n";
							lE.input();
							break;
						case 2:
							cout << "\n----------Output Employee----------\n";
							lE.output();
							break;
						default:
							cout << "Khong co lua chon nay" << endl;
							cout << "Vui long chon lai!!" << endl;
                			break;
					}
				pressAnyKey();
				break;
			case 2:
				cout << "\n************* CHOOSE MENU **************\n";	
				cout << "**     1. Input Medicine.           **\n";
				cout << "**     2. Output Medicine.          **\n";
				cin >> b;
					switch(b){
						case 1:
							cout << "\n\n----------Input Medicine----------\n";
							lR.input();
							break;
						case 2:
							cout << "\n\n----------Output Medicine----------\n";
							lR.output();
							break;
						default:
							cout << "Khong co lua chon nay" << endl;
							cout << "Vui long chon lai!!" << endl;
                			break;
					}
					pressAnyKey();
					break;
			default:
				cout << "Khong co lua chon nay" << endl;
				cout << "Vui long chon lai!!" << endl;
				pressAnyKey();
       			break;
		}
		break;
	case 2:
		cout << "\n\n*************CHOOSE MENU**************\n";	
		cout << "**     1. Input Medicine.           **\n";
		cout << "**     2. Output Medicine.          **\n";
		cin >> a;
		switch(a){
			case 1:
				cout << "\n\n------------Input Medicine------------\n";
				lM.input();
				break;
			case 2:
				cout << "\n\n------------Output Medicine-----------\n";
				lM.output();
				break;
			default:
				cout << "Khong co lua chon nay" << endl;
				cout << "Vui long chon lai!!" << endl;
                break;
		}
		pressAnyKey();
       	break;
	case 3:
		cout << "\n\n*************CHOOSE MENU**************\n";		
		cout << "**     1. Input Department.         **\n";
		cout << "**     2. Output Department.        **\n";
		cin >> a;
		switch(a){
			case 1:
				cout << "\n\n----------Input Department------------\n";
				lEq.input();
				break;
			case 2:
				cout << "\n\n----------Output Department-----------\n";
				lEq.output();
				break;
			default:
				cout << "Khong co lua chon nay" << endl;
				cout << "Vui long chon lai!!" << endl;
                break;
		}
		pressAnyKey();
		break;
	case 4:
		cout << "\n\n*************CHOOSE MENU**************\n";	
		cout << "**     1. Input Service.            **\n";
		cout << "**     2. Output Service.           **\n";
		cin >> a;
		switch(a){
			case 1:
				cout << "\n\n-----------Input Service--------------\n";
				lS.input();
				break;
			case 2:
				cout << "\n\n-----------Output Service-------------\n";
				lS.output();
				break;
			default:
				cout << "Khong co lua chon nay" << endl;
				cout << "Vui long chon lai!!" << endl;
                break;
		}
		pressAnyKey();
		break;
	case 0:
		cout << "Exit!!!\n";
		exit(1);
		break;
	default:
		cout << "Khong co lua chon nay" << endl;
		cout << "Vui long chon lai!!" << endl;
		pressAnyKey();
		break;
	}
	}
	return 0;
}
