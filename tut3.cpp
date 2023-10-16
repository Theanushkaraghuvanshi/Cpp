//There are two types of header files
//1. System header files: It comes with the compiler 
#include<iostream>
//2. User defined header file: It is written by the programmer.
/*#include "this.h" --> This will produce an error if this.h is not 
present in the current directory*/

/*using namespace std;
int main(){
    cout<<"this is hello world program:";
    return 0;
}*/

using namespace std;
int main() {
    int a=4, b=5;
    cout<<"Operator in c++:"<<endl;
    cout<<"Following are the types of operators in c++"<<endl;
    //Arithmetic operatos
    cout<<"the value of a+b is "<<a+b<<endl;
    cout<<"the value of a-b is "<<a-b<<endl;
    cout<<"the value of a*b is "<<a*b<<endl;
    cout<<"the value of a/b is "<<a/b<<endl;
    cout<<"the value of a%b is "<<a%b<<endl;
    cout<<"the value of a++ is "<<a++<<endl;
    cout<<"the value of a-- is "<<a--<<endl;
    cout<<"the value of ++a is "<<++a<<endl;
    cout<<"the value of --a is "<<--a<<endl;
    cout<<endl;

    //Assignment Operators --> used to assign values to variables
    // int a=3, b=9;
    // char d='d';

    // Comparison Operators
    cout<<"Following are the of comparison operators in c++"<<endl;
    cout<<"the value of a==b is "<<(a==b)<<endl;
    cout<<"the value of a!=b is "<<(a!=b)<<endl;
    cout<<"the value of a>=b is "<<(a>=b)<<endl;
    cout<<"the value of a<=b is "<<(a<=b)<<endl;
    cout<<"the value of a>b is "<<(a>b)<<endl;
    cout<<"the value of a<b is "<<(a<b)<<endl;
    cout<<endl;

    //Logical Operators
    cout<<"Following are the of logical operators in c++"<<endl;
    cout<<"the value of this logical and operator ((a==b) && (a<b)) is: "<<((a==b) && (a<b))<<endl;
    cout<<"the value of this logical or operator ((a==b) || (a<b)) is: "<<((a==b) || (a<b))<<endl;
    cout<<"the value of this logical not operator (!(a==b)) is: "<<(!(a==b))<<endl;


    return 0;
}