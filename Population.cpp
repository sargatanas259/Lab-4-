#include <iostream>
using namespace std;
int main() {
    int Town_A ,Town_B, Years_Passed;
    int Percent=100;
    float Rate_A ,Rate_B ;
    float New_Town_A_Pop, New_Town_B_Pop;
    cout<<"What is the population of Town A?\n";
    cin>> Town_A;
    cout<<"What is the population of Town B?\n";
    cin>> Town_B;
    cout<< "What is the growth rate of Town A?\n";
    cin>> Rate_A;
    cout<< "What is the growth rate of Town B?\n";
    cin>> Rate_B;
    if (Town_A<Town_B && Rate_A > Rate_B ){
        do {
            Town_A = ((Town_A *Rate_A/Percent)+Town_A);
            Town_B = ((Town_B*Rate_B/Percent)+Town_B);
            Years_Passed++;
        } while (Town_A<Town_B);
        cout<<"It will take "<< Years_Passed<<" years for Town A to get a \n"
            <<"larger population than Town B.";
        cout<<"The population at that time for Town A is "<< Town_A<<endl
            <<"as well as the population for Town B is "<< Town_B;

    }
    return 0;
}
