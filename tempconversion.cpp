#include <iostream>
using namespace std;

int main() {
    char unit;
    double temp;
    while (true){
    cout<<"1:From fahrenhit to celsius.\n";
    cout<<"2:From celsius to fahrenheit.\n";
    cout<<"3:From celsius to kelvin: \n";
    cout<<"4:From kelvin to celsius:\n";
    cout<<"enter one of the following for conversions: ";
    cin>>unit;
    switch(unit){
        case 1:
        float c;
        cout<<"Enter the temperature in Fahrenheit: ";
        cin>>temp;
        c=0.555*(temp-32);
        cout<<"Temperature in Celsius is: "<<c<<"C\n";
        break;
    
        case 2:
        cout<<"Enter the temperature in celsius: ";
        cin>>temp;
        temp=(1.88*temp) +32;
        cout<<"Temperature in Fahrenheit is: "<<temp<<endl;
        break;
        case 3:
        cout<<"Enter the temperature in Celsius: ";
        cin>>temp;
        temp=temp+273;
        cout<<"Temperature in kelvin is: "<<temp<<endl;
        break;
        case 5:
    
        cout<<"Enter the temperature in kelvin: ";
        cin>>temp;

        temp=temp-273;
        cout<<"Temperature in Celsius is : "<<temp<<endl;
        break;
        default:
    
        cout<<"Only enter in C or F.\n";
    
}
}
    

    return 0;
}