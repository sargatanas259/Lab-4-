#include <iostream>
using namespace std;
int main() {
    double Celsius1,Fahrenheit1;
    double Fahrenheit=(9/5)*Celsius1+32, Celsius=(5/9)*(Fahrenheit1-32);
    int Number;


    do {
        cout << "\nMenu" << endl
             << "1: Celsius to Fahrenheit" << endl

             << "2: Fahrenheit to Celsius" << endl

             << "3:Exit Program";
        cin >> Number;

        switch (Number) {
            case 1:
                cout << "What is the temperature?";
                cin >> Celsius1;
                Fahrenheit = (9 / 5) * Celsius1 + 32;
                cout << "The temperature in Fahrenheit is " << Fahrenheit;
                break;
            case 2:
                cout << "What is the temperature?";
                cin >> Fahrenheit1;
                Celsius = (5 / 9) * (Fahrenheit1 - 32);
                cout << "The temperature in Celsius is " << Celsius;
                break;
        }
    }while(Number<3);


    return 0;
}
