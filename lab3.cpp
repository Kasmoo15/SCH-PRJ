#include <iostream>
#include <cmath>

using namespace std;

int main () {

    //TODO: ask the user to enter bank details + name


    int userAccountNb;
    cout << "Enter your account number: ";
    cin >> userAccountNb;

    string userName;
    cout << "Enter your name: ";
    cin >> userName;

    cout << "" << endl;
    cout << "### Welcome " << userName <<" to the currency changer ###" <<endl;


    //TODO: display to user balence + convertion rate from CHF to EUR + ask him how much does he want to convert

    double balence = 1000; //in CHF
    double convRate = 1.06;
    int taxe = 5;

    cout << "You have " << balence << " CHF and the current conversion rate is " << convRate << endl;

    //TODO: ask the user how much he wants to withdraw and convert to 2 decimals

    cout << "How much would you like to convert ?: ";
    double convAmount;
    cin >> convAmount;
    cout  << convAmount << " CHF in EUR is " <<round((convAmount * convRate) * 100) / 100 << " EUR" << endl;

    //TODO: deduct the amount from the balence + charge for the transaction (5CHF)

    balence = balence - convAmount - taxe;

    //TODO: Display to the user the name + account number + the amount withdrawn in EUR + changing rate + the amount in CHF + taxe (5CHF) + new balence

    cout << "" << endl;
    cout << "+-------------------------------+" << endl;
    cout << "| " << userName << endl;
    cout << "| " << userAccountNb << endl;
    cout << "" << endl;
    cout << "| withdrawn amount in EUR: " << convAmount * convRate << endl;
    cout << "| Conversion rate: " << convRate << endl;
    cout << "" << endl;
    cout << "| Withdrawn amount in CHF: " << convAmount << endl;
    cout << "| Transaction fee: " << taxe << " CHF" <<  endl;
    cout << "" << endl;
    cout << "| Current balence: " << balence << endl;
    cout << "+-------------------------------+";



    return 0;
}
