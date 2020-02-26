// CIS108_lab5_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main()
{
    int Num = 0;
    int Den = 0;
    int mixed = 0;
    int remain = 0;

    cout << "Input numerator of fraction: ";
    cin >> Num;
    cout << "Input denominator of fraction: ";
    cin >> Den;
    cout << endl;

    mixed = Num / Den;
    remain = (abs(Num)) % (abs(Den));

    if (Den == 0) {
        cout << "CANNOT DIVIDE BY ZERO!!\n";
    }
    else if (abs(Num) == abs(Den)) {
        cout << "Fraction is: " << Num / Den << endl;
    }
    else if ((abs(Num) < abs(Den)) && (Num > 0) && (Den > 0)) {
        cout << "Fraction is: " << Num << "/" << Den << endl;
    }
    else if ((abs(Num) < abs(Den)) && ((Num > 0) || (Den > 0))) {
        cout << "Fraction is: -" << abs(Num) << "/" << abs(Den) << endl;
    }
    else if ((abs(Num) > abs(Den)) && remain == 0) {
        cout << "Fraction is: " << mixed << endl;
    }
    else if ((abs(Num) > abs(Den)) && remain !=0) {
        cout << "Fraction is: " << mixed << " " << remain <<"/"<< Den << endl;

    }

}


