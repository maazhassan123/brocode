#include <iostream>
using namespace std;

int main() {
    // && = check if two conditions are true.   &=ampersand
    //!!=check if at least one of two conditions is true.
    // !=reverses the logical state of its operand.
/*int temp;
    cout<<"enter the temperature: ";
    cin>>temp;
    if (temp>0 && temp<30){
        cout<<"temperature is good. ";


    }
    else{cout<<"temperaftueesni is bad";}*/
    bool temp;
    cout<<"enter temp:";
    cin>>temp;
    if(temp){
        cout<<"its very hot today.";
    }else{cout<<"it is not hot today.";}
    

    return 0;
}