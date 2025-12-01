#include <iostream>
#include<windows.h>
using namespace std;
int px=5,py=9;
void gotoxy(int x,int y){
COORD coo;
coo.X=x;
coo.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coo);

}
void maize(){
    cout<<"######################################################\n";
    cout<<"#                                                    #\n";
    cout<<"#                                                    #\n";
    cout<<"#                                                    #\n";
    cout<<"#                                                    #\n";
    cout<<"#                                                    #\n";
    cout<<"#                                                    #\n";
    cout<<"#                                                    #\n";
    cout<<"#                                                    #\n";                                                   
    cout<<"#                                                    #\n";
    cout<<"#                                                    #\n";                                                   
    cout<<"######################################################\n";         


}
void printplayer(){
    gotoxy(px,py);
    cout<<"/\\";
    gotoxy(0,13);
}
void moveplayer(){
   px++;
   if(px>48){
    px=1;
   }
   printplayer();
}
void eraseplayer(){
    gotoxy(px,py);
    cout<<"     ";
}

int main() {
    system ("cls");
maize();
printplayer();
while(true){
    eraseplayer();
    moveplayer();
    Sleep(150);
}
    return 0;
}




















































































































































































