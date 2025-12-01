#include <iostream>
using namespace std;

int main() {
    /*int i=1;
    int osum=0;
    int esum=0;
    while(i<=10){
        if(i%2!=0){
        osum=osum+i;
        }
        if(i%2==0){
            esum=esum+i;
        }


        i+=1;
    }
    
    cout<<"sum is:"<<osum<<endl;
    cout<<"sum of even is:"<<esum<<endl;
    return 0;*/
    
    int n;
    cout<<"enter number:";
    cin>>n;
    
    int osum=0;
    
    while(n%2!=0){
        osum=osum+n;
        n-=2;

    }cout<<"sum of odd num is:"<<osum;
}