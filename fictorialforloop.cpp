#include <iostream>
using namespace std;

int main() {
    int fictorial=1;
    int n;
    cout<<"enter number: ";
    cin>>n;
    for( int i=1;i<=n;i++){
        
        fictorial=fictorial*i;
    }cout<<"fictorial is: "<<fictorial;
    return 0;
}