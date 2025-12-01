#include <iostream>
using namespace std;

int main() {

    //switch= alternative to using many "else if"statements
    //compare one value against matching cases.

    int month;
    cout<<"Enter the month(1-12): ";
    cin>>month;
    
    switch(month){
        case 1: //what we want to do if month is 1.
          cout<<"It is January";
          break;
        case 2:
        cout<<"It is feburary";
        break;
        case 3:
        cout<<"It is march";
        break;
        case 4:
        cout<<"It is April";
        break;
        case 5:
        cout<<"It is May ";
        break;
        case 6:
        cout<<"It is June";
        break;
        case 7:
        cout<<"It is july";
        break;
        case 8:
        cout<<"It is august";
        break;
        case 9:
        cout<<"It is september";
        break;
        case 10:
        cout<<"It is october";
        break;
        case 11:
        cout<<"It is november";
        break;
        case 12:
        cout<<"it is december";
        break;
        default:   //if there is no matching value.
        cout<<"Please enter in only numbers(1-12)";



    }

    return 0;
}