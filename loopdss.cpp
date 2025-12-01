#include <iostream>
using namespace std;


    /*loops in c++:
    There are three types of loops in c++:
    1. for loop
    2. while loop
    3. do-while loop
     */

     /*for loop in c++*/
     //syntax for for loop
     // for(initialization;condition;updation)
     //{
     //   loop body(c++ code)};

     //how code will travel in for loop?
     //Ans: first condition will be checked if condition is 
     //right then code will execute after the execution of code
     //it will go to updation and increment happened;

     //int i=1;
     //cout<<i;
     //i++;
    // for (int i=0;i<4;i++)      
                                        
     
        /* code */
      //  cout<<i<<endl;  
      //  i++;}
     //steps of this:
     /*
     i = 0 (initialization)

Condition: 0 < 4 ✅ true

Run loop body:

cout << i → prints 0

i++ inside loop → now i = 1

End of body → go to for loop increment part

i++ (from loop header) → now i = 2

Step 2:

Condition: 2 < 4 ✅ true

Run loop body:

cout << i → prints 2

i++ inside loop → now i = 3

End of body → go to for loop increment part

i++ (from loop header) → now i = 4

Step 3:

Condition: 4 < 4 ❌ false

Loop stops*/
int main(){
for (int i=0;i<=40;i++)
{
    cout<<i<<endl;
}

     
    return 0;
}