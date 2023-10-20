#include<iostream>
using namespace std;
int main(){
    /* Loops in Cpp:
    There are three types of loops in cpp:
    1. For loop
    2. While loop
    3. Do-while loop
     */

    /* For Loop in cpp */
    //int i=1;
    //cout<<i;
    //i++;

    /* Syntax for loop
    for(initializatio; condition; updation)
    {
        loop body(C++ code);
    } */


    /* for (int i = 0; i < 4; i++)
    {
      cout<<i<<endl;
    } */

    
    //example of inifinite for loop
    /* for(int i=1; 34<=40; i++)
    {
        cout<<i<<endl;
    } */

    // While loop in c++
    //Syntax:
    /* while(condition)
    {
        c++ statements;
    } */

    //printing 1 to 40 using while loop
   /*  int i=10;
    while(i<=40){
        cout<<i<<endl;
        i++;
    } */

    //Example of infinite while loop
    /* int i=1;
    while(true){
        cout<<i<<endl;
        i++;
    } */

    //Do-while loop in cpp
    //Syntax
    /* do
    {
        c++ statements;
    }while(condition); */

    //printing 1 to 40 using do-while loop
   /* int i=10;
   do{
        cout<<i<<endl;
        i++;
    } while(i<=40); */

    //write table of 6 using any loop
    int n;
    cout<<"enter the positive integer: ";
    cin>>n;
    for(int i=1; i<=10; ++i){
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
    return 0;
}
    


