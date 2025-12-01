#include<iostream>
using namespace std;
int main(){
//typedef=reserved keyword used to create an additional name
//(allias) for another data type.
//New identifier for an existing type helps with readability
//and reduces typos use when there is a clear benefit
//replaced with 'using' (work better w/templates)


//The term typedef is a keyword in the C and C++ programming languages used to create an alias (a new name) for an existing data type.

//Key Concepts and Usage
//Creating Type Aliases: The primary function of typedef is to give a more meaningful or shorter name to a data type that is already defined. 
//This doesn't create a new data type; it simply provides an alternative label for an existing one.
//Syntax:

//C

//typedef existing_type new_name;
//existing_type is the type you want to rename (e.g., int, unsigned long, struct Person).

//new_name is the new, custom identifier you are creating for that type.

//Common Uses
//Simplifying Complex Declarations (Especially for Pointers and Structures): typedef is often used to make code more readable by providing a simpler name for complex types, especially for structures (struct), unions (union), and function pointers.
//
//Without typedef (for a struct):

//C

//struct Student {
  //  int id;
    //char name[50];
//};
//struct Student s1; // Must include 'struct' keyword every time
//With typedef (for a struct):

//C

//typedef struct {
  //  int id;
    //char name[50];
//} Student; // 'Student' is now the new name for the struct type

//Student s1; // Cleaner declaration, 'struct' keyword is optional (C++) or omitted (C)
//Making Code More Portable: It can be used to define custom names for data types whose size might vary between different computer architectures. For instance, you could define typedef unsigned long ULONG; to use ULONG throughout your code, and only change the typedef if you move to a system where unsigned int is the desired size.

//Improving Readability and Documentation: A well-chosen typedef can help document the purpose of a variable. For example:

//C

//typedef int ErrorCode;
//typedef int Boolean;

//ErrorCode check_file();
//Boolean is_valid = 1;
//This makes it immediately clear that the functions or variables are dealing with error codes or boolean values, even though the underlying type is an int.

//Note on C++: In C++, the struct keyword is optional when declaring variables of a structure type, even without using typedef. However, typedef remains useful for all other purposes, particularly for function pointers and template aliasing (which uses using in modern C++).**

//example:


//typedef int feet;
//feet distance;
//distance=4;
//cout<<distance;

typedef float maaz;
maaz a,b;
cout<<"enter the value: ";
cin>>a;
cout<<"enter the 2nd value: ";
cin>>b;
cout<<a*b;




}