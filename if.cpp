#include <iostream>
using namespace std;

int main() {
    int age;
    cout<<"Enter your age:";
    cin>>age;
     if(age>=100){
        cout<<"YOu are too old to enter this site!";
    }
    else if(age>=18){
        cout<<"Welcome to the site ";
    }
    else if(age<0){cout<<"YOu havent been born yet.";

    }
    
    else{
        cout<<"YOu are'nt old enough to enter!";

    }


/*what is difference between else,else if,if statement?

🧩 1. if statement
It checks one condition.

If the condition is true, it runs its block of code.

If it’s false, the code inside it is skipped.

Example:

if (a > 0) {
    cout << "Positive number";
}
✅ Runs only if a is greater than 0.

🧩 2. else if statement
Used when you want to check more than one condition — but only one should run.

It comes after an if and before an else.

It runs only if the first if was false and its own condition is true.

Example:

if (a > 0) {
    cout << "Positive";
}
else if (a < 0) {
    cout << "Negative";
}
✅ Checks if a is positive first.
If not, then checks if it’s negative.

🧩 3. else statement
It runs only if all previous conditions (if and else if) are false.

It has no condition of its own.

Example:

if (a > 0) {
    cout << "Positive";
}
else if (a < 0) {
    cout << "Negative";
}
else {
    cout << "Zero";
}
✅ Runs the else part only if a is not > 0 and not < 0, meaning it’s zero.

🧠 Summary:
Keyword	Checks a condition?	When it runs	Optional or required
if	✅ Yes	If condition is true	Required to start
else if	✅ Yes	If previous if was false	Optional*/


 int month;
    cout<<"Enter the month(1-3): ";
    cin>>month;
    if(month==1){
        cout<<"It is January";

    }
    else if(month==2){
        cout<<"It is feburary";
    }
    else if(month==3){
        cout<<"It is March";
    }
    else {cout<<"YOu don't enter a number between (1-3)";}


    return 0;
}