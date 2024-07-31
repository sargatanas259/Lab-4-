#include <iostream>
using namespace std;
int main() {
    int NumberofLetters;
    char letters, MorePhoneNumbers;
    cout<<"Would you like to enter a phone number y for yes / n for no. \n";
    cin>>MorePhoneNumbers;
    while (MorePhoneNumbers == 'y'){
        cout<< "What is the number you would like? \n";
        cin>>letters;

        NumberofLetters= 0;
        cout<< " Your number is :";
        while (NumberofLetters<7){
            NumberofLetters++;
            switch (letters) {
                case 'a':
                case 'b':
                case 'c':
                case 'A':
                case 'B':
                case 'C':
                    cout<< '2';
                    break;
                case 'd':
                case 'e':
                case 'f':
                case 'D':
                case 'E':
                case 'F':
                    cout<< '3';
                    break;
                case 'g':
                case 'h':
                case 'i':
                case 'G':
                case 'H':
                case 'I':
                    cout<< '4';
                    break;
                case 'j':
                case 'k':
                case 'l':
                case 'J':
                case 'K':
                case 'L':
                    cout<< '5';
                    break;
                case 'm':
                case 'n':
                case 'o':
                case 'M':
                case 'N':
                case 'O':
                    cout<< '6';
                    break;
                case 'p':
                case 'q':
                case 'r':
                case 's':
                case 'P':
                case 'Q':
                    case 'R':
                case 'S':
                    cout<< '7';
                    break;
                case 't':
                case 'u':
                case 'v':
                    case 'T':
                case 'U':
                case 'V':
                    cout<< '8';
                    break;
                case 'w':
                case 'x':
                case 'y':
                case 'z':
                case 'W':
                case 'X':
                case 'Y':
                case 'Z':
                    cout<< '9';
                    break;
            }
            if (NumberofLetters == 3)
                cout<< '-';
            cin>>letters;
        }
cin.ignore(100,'\n');
        cout<< "\nWould you like to enter another phone number for yes / n for no. \n";
        cin>>MorePhoneNumbers;

    }

    return 0;
}
