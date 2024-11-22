#include <iostream>

using namespace std;

int main() {
    string type, level;
    double balance;
	double interestRate;
	
    cout << "Enter account type (P for Personal/B for Business): ";
    cin >> type;
    cout << "Enter account level (S for Standard/G for Gold/P for Platinum): ";
    cin >> level;
    cout << "Enter account balance: ";
    cin >> balance;

    if (type == "P") {
        if (level == "S") {
            if (balance >= 1000) {
                interestRate = 1.9;
            } else {
                interestRate = 1.2;
            }
        } else if (level == "G") {
            if (balance >= 5000) {
                interestRate = 2.3;
            } else {
                interestRate = 1.9;
            }
        } else if (level == "P") {
            interestRate = 2.3; 
        } else {
            cout << "Invalid account level.\n";
            return 1;
        }
    } else if (type == "B") {
        if (level == "S") {
            if (balance >= 1500) {
                interestRate = 1.7;
            } else {
                interestRate = 1.2;
            }
        } else if (level == "P") {
            if (balance >= 10000) {
                interestRate = 2.5;
            } else {
                interestRate = 1.7;
            }
        } else {
            cout << "Invalid account level.\n";
            return 1;
        }
    } else {
        cout << "Invalid account type.\n";
        return 1;
    }

    cout << "Interest rate: " << interestRate << "%\n";

    return 0;
}