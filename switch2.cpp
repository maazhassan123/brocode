#include <iostream>
using namespace std;

int main() {
    char gar;
    cout<<"What letter gtade?: ";
    cin>>gar;
    switch(gar){
        case 'a':
        cout<<"You did great";
        break;
        case 'b':
        cout<<"YOU did okay";
        break;
        case 'c':
        cout<<"You did not do good";
        break;
        case 'd':
        cout<<"you failed";
        break;
        default:
        cout<<"please enter only enter in a letter grade (a-f)";



    }
    return 0;
}