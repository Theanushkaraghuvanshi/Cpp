#include<iostream>
using namespace std;
// typedef ---> isko hum struct employee bolna chahte the usko hum ep bol skte hai
// it is a shortcut 
 /* typedef struct employee //  a structure can contain many different data types (int, string, bool, etc.)
    {
        int eId; // 4 bytes
        char favChar; //1
        float salary; //4
    } ep;
 
int main(){
        ep anushka;
        anushka.eId=1;
        anushka.favChar='a';
        anushka.salary=190000;
        cout<<"the value is "<<anushka.eId<<endl;
        cout<<"the value is "<<anushka.favChar<<endl;
        cout<<"the value is "<<anushka.salary<<endl; */

/* union money // it is for better memory storage. and it only take maximum byte
// niche ke 3 value me se hum bas 1 value ko ek time pe run kara skte hai
// otherwise its garbage value
    {
       int rice; // 4 bytes
       char car; //1
       float pounds; //4
    };
    
    int main(){
        union money m1;
        m1.rice = 34;
        m1.car = 'c';
        cout<<m1.rice; */

        int main(){
            //*** enum give us the nos. start from 0
            enum Meal{breakfast, lunch, dinner};
            cout<<breakfast<<endl;
            cout<<lunch<<endl;
            cout<<dinner<<endl;
            return 0;
        }
        
        

