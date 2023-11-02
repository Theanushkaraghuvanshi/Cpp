// Classes
#include<iostream>
using namespace std;

class Employee{
    private:
    int a, b,c;
    public:
    int d,e;
    void setData(int a1,int b1,int c1); //setData means data ko set karega // Declaration
    void getData(){ // getData means data ko print karega
    // void--> data ko return karta hai
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
    cout<<"The value of c is "<<c<<endl;
    cout<<"The value of d is "<<d<<endl;
    cout<<"The value of e is "<<e<<endl;
    }
};

void Employee :: setData(int a1, int b1, int c1){
a=a1;
b=b1;
c=c1;
}

int main(){
    Employee anushka;
   // anushka.a=122; --->this will throw error as a is private
    anushka.d=23;
    anushka.e=33;
    anushka.setData(1,2,4);
    anushka.getData();
    return 0;
}