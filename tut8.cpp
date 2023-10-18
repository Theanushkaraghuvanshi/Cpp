#include<iostream>
/* using namespace std;
int main()
{
    /* int a=34;
    char c = 'c';
    cout<<"the value of c was: "<<c<<endl;
    a=45;
    c = '4';
    cout<<"the value of c is: "<<c; */

    //Constants in C++
    //const int a=3; // const --> it does not the value 
    //cout<<"the value of a was: "<<a<<endl;
    //a=45; //*** you will get an error because a is a constant
    //cout<<"the value of a is: "<<a; 


    //Manipulators In C++
    #include<iomanip>
    using namespace std;
    int main(){
        /* int a=3, b=78, c=1233;
        cout<<"the value of a without setw is: "<<a<<endl;
        cout<<"the value of b without setw is: "<<b<<endl;
        cout<<"the value of c without setw is: "<<c<<endl;

        cout<<"the value of a is: "<<setw(4)<<a<<endl;  //setw(4)--> it takes 4 space 
        cout<<"the value of b is: "<<setw(4)<<b<<endl;
        cout<<"the value of c is: "<<setw(4)<<c<<endl; */


        //*** Operator Precedence--> *,/,%,+,- And ***Associativity--> left to right
        int a=3, b=4;
        //int c=a*5+b;
        int c=a*5+b-45+87;
        cout<<c;
    return 0;
    }
