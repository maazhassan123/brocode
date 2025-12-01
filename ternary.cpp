#include <iostream>
using namespace std;

int main() {
    //ternary operator?:= replacement to an if/else statement
    //condition:?expression 1: expression2;
   //example

   /*int grade=75;
   if (grade>=60){
    cout<<"YOu  pass ";
   }
   else{
    cout<<"you fail";
   }*/
  /*int grade=50;
  grade>=60?cout<<"YOu passs":cout<<"you fail ";*/

   //conditional_expression?expression1:expression2;
   
  // int number=9;
  // number%2==1?cout<<"odd":cout<<"Even";
  // int number=8;
  // number%2?cout<<"odd":cout<<"even";//we can write in this 
   //form as well becz number one corresponds to true when 
   //you take 9 rem will one as one shows condition is true so it will execute 2nd operand which is odd and if you take
   //8 then rem will 0 and it shows false so third one operand will execute.

//bool hungry=true;
//hungry?cout<<"you are hungry ":cout<<"you are full";

//bool hungry=false;
//hungry?cout<<"You are hungry ": cout<<"YOu are full";

//another way of representation:
//cout<<(hungry?"You are hungry":"YOU are full");
    

    int age;
    cout<<"Enter your age: ";
    cin>>age;
   // age>=18?cout<<"welcome to the site!":cout<<"you are'nt allowed";
   cout<<(age>=18?"welcome to the site!":"You are'nt allowed");
}