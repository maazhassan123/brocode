#include <iostream>
using namespace std;

int main() {
    int p;
    cout<<"enter no of person: ";
    cin>>p;
    int cal;
    cal=p*(p-1)/2;
    cout<<"no of handshakes is:"<<cal;
    return 0;
}