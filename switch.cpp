#include <iostream>
using namespace std;

int main() {
    float a,b;
    char op;
    cout<<"Enter the operator(+,-,*,/): ";
    cin>>op;
    if(op=='+'||op=='-'||op=='*'||op=='/'){
 
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    }
    
   
    switch(op){
        case '+':
        cout<<"Sum is :"<<a+b;
        break;
        case '-':
        cout<<"Subtraction is: "<<a-b;
        break;
        case '*':
        cout<<"Multiplication is: "<<a*b;
        break;
        case '/': 
        if(b==0){
            cout<<"Division by zero is not allowed.";
        }
        else{
             cout<<"Division is: "<<a/b;
        }

       
       
        break;
        default:
        cout<<"YOu have entered wrong opetator.";
    }
    
    return 0;
}