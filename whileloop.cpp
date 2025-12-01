/*#include <iostream>
using namespace std;

int main() {
/*    string name;
    while (name.empty()){         //while loop is like an if condition
        cout<<"enter your name: ";//except it cant run infinitely
        getline(cin,name); //when i wil not enter anything and keeps pressing enter then loop will continue running it 
        //will continue running unless you enter something.
    }
    cout<<"Hello"<<name;*/
    //eg of an infinite loop
    /*while(1==1){
        cout<<"im stuck in an infinite loop. "<<endl;
    }
    cout<<"hello name";//as condition will always be true so it doesnt get printed.
    return 0;
}*/
//example using whiel loop:
#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout<<"enter a number: ";
    cin>>num;
    while(num<5){   //condition is checked first
        cout<<"Value of num= "<<num<<endl;
        num++;
    }
    cout<<"loop ended.Final value of i= "<<num<<endl;
    return 0;
}