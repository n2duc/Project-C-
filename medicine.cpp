#include "medicine.h"

class chilren: public medicine {
public:
	string idMedicinechildren;
    int numberChilren;
    string pointChilren;
    string exipryChilren;
    float priceChilren;
    void input() {
        medicine::input();
        cout<<"idMedicinechildren:";
        getline(cin,idMedicinechildren);
        cout << "numberChilren:";
        cin >> numberChilren;
        cin.ignore();
        cout << "pointChilren:";
        cin >> pointChilren;
        cin.ignore();
        cout << "exipryChilren:";
        getline(cin,exipryChilren);
        cout << "priceChilren:";
        cin >> priceChilren;
    }

    void output() {
        medicine::output();
        cout <<"idMedicinechildren:"<<idMedicinechildren<<" "<< "numberChilren:" << numberChilren << " " << "pointChilren:" << pointChilren << " " << "exipryChilren:" << exipryChilren << " " << "priceChilren:" << priceChilren << endl;

    }
};
class Adult :public medicine {
	public:
    string idAdult;
    int numberAdult;
    string pointAdult;
    string exipryAdult;
    float priceAdult;
    void input() {
        medicine::input();
        cout<<"idAdult:";
        getline(cin,idAdult);
        cout << "numberAdult:";
        cin >> numberAdult;
        cin.ignore();
        cout << "pointAdult:";
        cin >> pointAdult;
        cin.ignore();
        cout << "exipryAdult:";
        getline(cin,exipryAdult);
        cout << "priceAdult:";
        cin >> priceAdult;
    }
    void output() {
    	medicine::output();
        cout << "idAdult:"<<idAdult<<" "<<"numberAdult:" << numberAdult<<" "<< "pointAdult:" << pointAdult << " " << "exipryAdult:" << exipryAdult << " " << "priceAdult:" << priceAdult << endl;
    }
};
class listmedicine
{
public:
    medicine* p[100];
    int n;
    void input()
    {
        n = 0;
        char chon, loai;
        do
        {
            cout << "chilren or adult (c/a):";
            cin >> loai;

            if (loai =='c')
            {
                p[n] = new chilren;
            }
            else
            {
                p[n] = new Adult;
            }
            cin.ignore();
            p[n++]->input();
            cout << "Tiep tuc (c/k):";
            cin >> chon;

            if ((n == 100) || (chon == 'k'))
            {
                break;
            }

        } while (1);
    }
    void output()
    {
        for (int i = 0; i < n; i++)
        {
            p[i]->output();
        }
    }
};
