#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
    int Temperature, NumberOfTemp, Average,NumberOfDays,SumOfTemp;
    srand(time(0));
    cout<<"Lets calculate the average temperature."<<endl;

        do {
            cout << "What is the temperature you would like to put in?\n";
            cin >> Temperature;
            SumOfTemp=(Temperature+SumOfTemp);

            NumberOfDays++;
        } while (Temperature!=0&&Temperature<1000);
        cout<<Temperature<<" "<<NumberOfDays<<" "<<SumOfTemp<<endl;
        cout<<"The average temperature is "<< SumOfTemp/(NumberOfDays-1);
        return 0;
}


