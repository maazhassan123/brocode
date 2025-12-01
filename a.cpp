#include <iostream>
using namespace std;

int main() {
    int alpha;
    cout<<"enter alpha:";
    cin>>alpha;
    switch (alpha) {
case 1:
alpha = alpha + 3;
case 3:
alpha++;
break;
case 6:
alpha = alpha + 6;
case 8:
alpha = alpha * 8;
default:
alpha--;

}
cout<<alpha;
    return 0;
}
