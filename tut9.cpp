#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"tell me your age"<<endl;
    cin>>age;

    //Selection control structure: If-else-if-else ladder
    /* if(age<18){
        cout<<"you cannot come to party"<<endl;
    }
    else if(age==18){
        cout<<"you are a kid and you come to the party"<<endl;
    }
    else{
        cout<<"you can come to the party"<<endl;
    } */

    //Selection control structure: Switch case statement
    switch (age)
    {
    
    case 18:
        cout<<"you are 18";
        break; //If we are not write break and its print all the cases
    case 22:
        cout<<"you are 22";
        break;
    case 2:
        cout<<"you are 2";
        break;
    
    default:
    cout<<"no special case"<<endl;
        break;
    }

    cout<<"Done with switch case";
    return 0;
} 