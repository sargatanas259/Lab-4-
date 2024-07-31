#include <iostream>
using namespace std;
int main(){

    int Room = 50;

    double Rent,RentIncrease , Maintenance, Profit = 0, ProfitMargin;
    int NoRooms, EmptyRoom = 0;
    cout <<"What is the amount for rent if all the rooms are full? \n ";
    cin >> Rent;
    cout << "What will the rent increase when you have empty rooms?\n ";
    cin >> RentIncrease;
    cout<<"How much does it cost for maintenance on the apartments?\n  ";
    cin >> Maintenance;
    while ( ( Room - EmptyRoom ) > 0 ){
        ProfitMargin = (Room - EmptyRoom) * (Rent - Maintenance);
            if ( ProfitMargin > Profit ) {
                Profit = ProfitMargin;
                NoRooms = ( Room - EmptyRoom );
                }

            Rent += RentIncrease;
            EmptyRoom++;
    }

    cout << "Number of rooms needed to be rented to \n "<< "maximize the profit = " << NoRooms <<"\n";

    return 0;

}

