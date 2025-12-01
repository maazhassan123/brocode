#include <iostream>
using namespace std;

int main() {
    int age;
    cout<<"enter age: ";
    cin>>age;
    
    switch(age>=18){
        case 1:
        cout<<"you are elligible for voting.";
        break;
        case 0:
        cout<<"you cant cast vote.";
        break;
    }
    return 0;
}
