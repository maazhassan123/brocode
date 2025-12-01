#include <iostream>
using namespace std;

int main() {
    int alpha;
    cout<<"enter alpha:";
    cin>>alpha;
    switch(alpha){
        case 1:
        case 2:
        alpha+=2;
        break;
        case 4:
        alpha++;
        case 5:
        alpha*=2;
        case 6:
        alpha+=5;

        break;
        default:
        alpha--;
    
    }
    cout<<alpha;
    return 0;
}