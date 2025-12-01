#include <iostream>
using namespace std;
int maaz(int r){
    int a;
    a=3.14*r*r;
    return a;
}

int main() {
    int r;
    cout<<"enter the radius:";cin>>r;
    int result;
    result=maaz(r);
    cout<<"Area of ring is: "<<result;
    return 0;
}