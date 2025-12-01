#include<iostream>
using namespace std;
int main(){
string day;
float dis;
float amount;
while(true){
cout<<endl<<"enter the day: ";
cin>>day;
cout<<"enter the amount: ";
cin>>amount;
if(day=="sunday"){
    dis=amount*0.9;
cout<<amount-dis;}


if(day=="monday"){
dis=amount*0.8;
cout<<amount-dis;}

if(day=="tuesday"){
dis=amount*0.7;
cout<<amount-dis;}

if(day=="wednesday"){
dis=amount*0.6;
cout<<amount-dis;}

if(day=="thursday"){
dis=amount*0.5;
cout<<dis;}

if(day=="friday"){
dis=amount*0.4;
cout<<dis;}

if(day=="saturday"){
dis=amount*0.3;
cout<<amount-dis;}
}}

