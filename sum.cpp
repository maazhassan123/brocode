#include <iostream>
using namespace std;

int main() {
  /*  int num ;
    
cout<<"Enter a positive number: ";
        cin>>num;
    
    int sum=0;
    while(num<10){
        
        sum=sum+num;
        num++;
        
    
    }cout<<"sum is:"<<sum<<endl;*/
    int sum=0;
    int n;
    cout<<"enter a positive number:";
    cin>>n;
    for(int num=0;num<=n;num++){
        sum=sum+num;

    }cout<<"sum is:"<<sum;
   
    return 0;
}