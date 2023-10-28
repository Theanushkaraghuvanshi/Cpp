#include<iostream>
using namespace std;

/* inline int product(int a, int b){
    return a*b;
} */

/* int product(int a, int b){
    // Not recommended to use below lines with inline functions
    // static int c=0; // this excutes only once
    // c=c+1; // Next time this function is run, the value of c will be retained
    return a*b+c;
} */

// Default Argument
float moneyReceived(int current, float factor = 1.04){
      return current * factor;
}
int main(){
    /* int a, b;
    cout<<"enter the value of a and b "<<endl;
    cin>>a>>b;
    cout<<"the product of a and b is "<<product(a,b); */
    int money = 100000;
    cout<<"If you have "<<money<<" rs in your bank account, you will receive "<<moneyReceived(money)<<
    " Rs after 1 year ";
    cout<<"For VIP: If you have "<<money<<" rs in your bank account, you will receive "<<moneyReceived(money, 1.1)<<
    " Rs after 1 year ";
    return 0;
}