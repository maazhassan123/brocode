#include <iostream>
using namespace std;
int  maaz(int t){

    int celsius;
    cout<<"Enter the temperature in kelvin(K): ";
    cin>>t;
    celsius=t-273;
    cout<<celsius;
    return celsius;

}
int main() {
int t;
    maaz(t);
    return 0;
}