// Function
#include<iostream>
using namespace std;
/* int sum(int a, int b){
    //*** Formal Parameters--> a and b will be taking values from actual parameters num1 and num2
    int c=a+b;
    return c;
}
int main(){
    // Function--->apne program to tukdo me tod do phir usse alag alag kam krao
    int num1, num2;
    cout<<"enter the first number"<<endl;
    cin>>num1;
    cout<<"enter the second number"<<endl;
    cin>>num2;
    cout<<"the sum is "<<sum(num1, num2); */

    // Function Prototype
    // Syntax: type function-name(arguments);
    // int sum(int a, int b); //---> Acceptable
    // int sum(int a, b); //---> Not Acceptable
    int sum(int , int); //---> Acceptable
    int main(){
    int num1, num2;
    cout<<"enter the first number"<<endl;
    cin>>num1;
    cout<<"enter the second number"<<endl;
    cin>>num2;
    //*** num1 and num2 are actual parameters
    cout<<"the sum is "<<sum(num1, num2);


    return 0;
}