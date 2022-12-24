#include <iostream>
using namespace std;

//singlton
class Cashier {
    static Cashier* _instance;
    float _balance;
    string _cashierName;

public:

    void setBalance(float balance) {
        _balance = balance;
    }

    void setCashierName(string cashierName) {
        _cashierName = cashierName;
    }

    float getBalance() {
        return _balance;
    }

    string getCashierName() {
        return _cashierName;
    }

    string displayCashierDetails() {
        cout << "cashier name: " << _cashierName << "\nbalance: " << _balance << "\n";
    }

    static Cashier* getInstance() {
        if (_instance == NULL)
            _instance = new Cashier();
        return _instance;
    }


};