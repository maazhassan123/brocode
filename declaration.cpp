//namespace=provides a solution for preventing name conflicts
//in large projects.Each entity needs a unique name.A namespace
//allows for identically named entities as long as the namespaces
//are different.


#include<iostream>
using namespace std;

namespace first{    //we insert namespace outside of the function.
        int x=1;
    }


    namespace second{
int y=2;


    }
    namespace third{
        int x=54;
    }
    namespace fourth{
        float y=13.5;
    }
int main(){
int x=0;
float y=5.5;

cout<<x<<endl;
cout<<y<<endl;
cout<<first::x<<endl;
cout<<second::y<<endl;
cout<<third::x<<endl;
cout<<fourth::y;




}
