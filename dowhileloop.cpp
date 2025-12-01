//do while loop =do some block of code first,Then repeat 
//again if condition is true.

//i can make run while loop as a do while loop as taking user values
//outside while loop as well

/*#include <iostream>
using namespace std;

int main() {
 /*   int num;
       cout<<"ënter a positive number: ";
        cin>>num;
    while(num<0){
        cout<<"ënter a positive number: ";
        cin>>num;
    }
    cout<<"The # is: "<<num;
    return 0;*/
   /* int num;
    int sum;
    do{
        cout<<"enter a positive: ";
        cin>>num;
        

    }while(num<0);
sum=sum+num;
cout<<sum;
}*/
//example of dowhile loop:
#include<iostream>
using namespace std;
int main()
{
    int i;
    cout<<"enter the number: ";
    cin>>i;
    do{
        //body runs first.
        cout<<"value of i= "<<i <<endl;
    }
    while(i<5); //condition checked later.
    

    cout<<"loop ended .Final value of i= "<<i<<endl;
}



/*chat gpt


🔹 1. What is a while loop?
In C++, a while loop checks the condition first.
If the condition is true, the loop body executes.
If it’s false, the loop ends immediately (and body doesn’t run at all).

✅ Example: while loop
#include <iostream>
using namespace std;

int main() {
    int i = 5;

    while (i < 5) {   // condition is checked first
        cout << "Value of i = " << i << endl;
        i++;
    }

    cout << "Loop ended. Final value of i = " << i << endl;
    return 0;
}
🧠 Explanation:
i = 5

Condition i < 5 → false

So, the loop never runs even once.

🖥 Output:
Loop ended. Final value of i = 5
🔹 2. What is a do-while loop?
A do-while loop in C++ executes the loop body first,
and then checks the condition afterwards.

So it always executes at least once, even if the condition is false.

✅ Example: do-while loop
#include <iostream>
using namespace std;

int main() {
    int i = 5;

    do {   // body runs first
        cout << "Value of i = " << i << endl;
        i++;
    } while (i < 5);   // condition checked later

    cout << "Loop ended. Final value of i = " << i << endl;
    return 0;
}
🧠 Explanation:
Loop body runs once → prints Value of i = 5

Then condition i < 5 → false

Loop ends after first execution.

🖥 Output:
Value of i = 5
Loop ended. Final value of i = 6
🔹 3. Key Difference Table
Feature	while Loop	do-while Loop
Condition check	Before executing loop body	After executing loop body
Executes if condition is false initially?	❌ No	✅ Yes, once
Syntax	while(condition) { ... }	do { ... } while(condition);
Use when...	You don’t want the loop to run unless condition is true	You want the loop to run at least once
🔹 4. Example: Input until user enters 0
Here’s a practical difference:

Using while loop:
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number (0 to stop): ";
    cin >> num;

    while (num != 0) {   // checks first
        cout << "You entered: " << num << endl;
        cout << "Enter again (0 to stop): ";
        cin >> num;
    }

    cout << "Program ended.";
    return 0;
}
Using do-while loop:
#include <iostream>
using namespace std;

int main() {
    int num;

    do {   // runs first, checks later
        cout << "Enter a number (0 to stop): ";
        cin >> num;

        if (num != 0)
            cout << "You entered: " << num << endl;
    } while (num != 0);

    cout << "Program ended.";
    return 0;
}*/
