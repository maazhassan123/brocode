#include <iostream>
using namespace std;

int main() {
    int i;
    int fictorial=1;
    cout<<"enter number:";
    cin>>i;
    
    for(int n=1;n<=i;i--){
        fictorial=fictorial*i;
    }cout<<fictorial;
    return 0;
}