#include <iostream>
using namespace std;
int main() {
    int Days=7;
    double RainFall,Rain;
    cout<<"How much rain is going to fall in the 7 days?";
    for (int i = 0; i <7 ; ++i) {
        cin>>RainFall;
        Rain=(RainFall+Rain);
    }
    cout<<"Here is the total rainfall  "<< Rain;
    return 0;
}
