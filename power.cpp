#include <iostream>
using namespace std;
void print(int n){

    for(int i=0;i<n;i++){
        
        for(int v=0;v<=i;v++){
            if(v==0|| v==i||i==n-1){
                cout<<" * ";
            }else{
                cout<<"  ";
            }
            

        }
        cout<<endl;
    }
}

int main() {
    
    int n;
    cout<<"enter the number to whom you want to map: ";
    cin>>n;
    print(n);
    return 0;
}