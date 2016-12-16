#include <iostream>
using namespace std;

int main() {
    long Sec;
    cout<<"Vvod: "<<endl;
    cin>>Sec;
    long seconds = Sec;
    long minutes = seconds / 60;
    long hours = minutes / 60;
    long days = hours / 24;
    cout<<"days: "<<days<<" hours: "<<hours<<" minutes: "<<minutes<<" seconds: "<<seconds<<endl;
    system ("pause");
    return 0;
}
