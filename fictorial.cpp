#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"enter a number:";
    cin>>num;
    int fictorial=1;
    while(num>1){
        fictorial=fictorial*num;
        num--;

    }cout<<"fictorial is:"<<fictorial;
    return 0;
}