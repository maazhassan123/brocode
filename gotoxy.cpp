#include <iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y){
COORD coo;
coo.X=x;
coo.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coo);

}

int main() {
    gotoxy( 19,20);
cout<<"maaz";
gotoxy(67,5);
cout<<"Hassan";
    return 0;
}