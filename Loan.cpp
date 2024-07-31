#include <iostream>
using namespace std;
int main() {
    double Loan, Year_Interest, Monthly_Rate, Monthly_Payment,Monthly_Bill;
    int Year=12, Months ;
    cout<<"How much is the loan for?";
    cin>>Loan;
    cout<<"How much is the yearly interest rate?\n";
    cin>>Year_Interest;
    double Year_Interest_rate=Year_Interest/100;
    cout<<"How much do you want to make a month on the loan?\n";
    cin>>Monthly_Payment;




    Monthly_Rate= Year_Interest_rate / Year; //This is for the Monthly rate
    Monthly_Bill= Loan * Monthly_Rate; // For monthly bill

 //cout<<Monthly_Rate<<endl<<Monthly_Payment<<endl<<Monthly_Bill<<endl<<Loan;

    if (Monthly_Bill<Monthly_Payment) {
        do {
            Loan =( Loan - (Monthly_Payment - Monthly_Bill));
            Months++;
        } while (Loan > 0);
        cout << " It will take " << Months << " months to pay off your loan.";
    } else{
        cout<<"You will not be able to make the payments and your loan grow";
    }

    return 0;
}
