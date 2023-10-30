// Recursion --->  is the process of solving a problem by breaking it down into smaller, simpler sub-problems.
#include<iostream>
using namespace std;

/* int factorial(int n){
    if (n<=1){
        return 1;
    }
    return n * factorial(n-1);
} */

// Step by step calculation of 4!
/* factorial(4)=4*factorial(3);
factorial(4)=4*3*factorial(2);
factorial(4)=4*3*2factorial(1);
factorial(4)=4*3*2*1;
factorial(4)=24; */

  /* int main(){
    // factorial of a number: 6!=6*5*4*3*2*1 = 720
    // n! = n*(n-1)!
    
    int a;
    cout<<"enter a number "<<endl;
    cin>>a;
    cout<<"the factorial of a is "<<factorial(a)<<endl; */

    // Fibonacci Sequence---> 1,1,2,3,5,8,13,21,34,55,89,144_ _ _ n
    int fib(int n)
    {
        if(n<2){
            return 1;
        }
        return fib(n-2)+fib(n-1);
    }

// fib(5)
// fib(4)+fib(3)
// fib(2)+fib(3)+fib(2)+fib(3)


    int main(){
    int a;
    cout<<"enter a number "<<endl;
    cin>>a;
    cout<<"the term in fibonacci sequence at position "<<a<<" is "<<fib(a)<<endl;
    return 0;
}