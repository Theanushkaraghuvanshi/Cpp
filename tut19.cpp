/* Function Overloading--->is a feature of object-oriented programming where two or more functions can have 
the same name but different parameters. 
example- add(int a, int b)
add(double a, double b) */
// Overloading- kisi bhi ek cheez ko multiple kam ke liye use karna
#include<iostream>
using namespace std;

int sum(int a, int b){
    cout<<"Using function with 2 arguments"<<endl;
    return a+b;
}

int sum(int a, int b, int c){
    cout<<"Using function with 3 arguments"<<endl;
    return a+b+c;
}

/* int main(){
    cout<<"the sum of 3 and 6 is "<<sum(3,6)<<endl;
    cout<<"the sum of 3,2 and 4 is "<<sum(3,2,4)<<endl; */
    
    // Volume of cylinder
    int volume(double r, int h){
        return (3.14*r*r*h);
    }

    // Volume of cube
    int volume(int a){
        return (a*a*a);
    }

    // Volume of rectangle
    int volume(int l, int b, int h){
        return (l*b*h);
    }
    
    int main(){
    cout<<"the volume of cylinder of radius is 3 and height is 2 is "<<volume(3,2)<<endl;
    cout<<"the volume of cube of side is 3 is "<<volume(3)<<endl;
    cout<<"the volume of rectangle of length is 2, breadth is 3 and height is 2 is "<<volume(2,3,2)<<endl;
    return 0;
}