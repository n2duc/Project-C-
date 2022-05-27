#include "Header.h"

class medicine {
public:
    string idMedicine;
    string nameMedicine;
    virtual void input() {
        cout << "idMedicine:";
        cin >> idMedicine;
        cin.ignore();
        cout << "nameMedicine:";
        getline(cin, nameMedicine);
    }
    virtual void output() {
        cout << "idMedicine:" << idMedicine << "nameMedicine:" << nameMedicine << endl;
    }
};
