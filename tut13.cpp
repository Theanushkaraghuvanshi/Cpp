#include<iostream>
using namespace std;
int main(){
    //Array example-
    /* int marks[4]={23,35,33,50};
    int mathmarks[4];
    mathmarks[0]=10;
    mathmarks[1]=20;
    mathmarks[2]=30;
    mathmarks[3]=40;

   cout<<"These are marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl; */

    //You can change the value of an array
   /*  marks[2]=100;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    cout<<"These are math marks"<<endl; */
    /* cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl; */

   /*  for(int i=0;i<4;i++){
        cout<<"the value of marks "<< i <<" is "<<marks[i]<<endl;
    }
 */
    //Quick Quiz: do the same using while and do-while loops
    int marks[4]={10,20,30,40};
    int i=0;
    /* while(i<4){
          cout<<"the value of marks "<< i <<" is "<<marks[i]<<endl;
          i++;
    } */
    do{
        cout<<"the value of marks "<< i <<" is "<<marks[i]<<endl;
          i++;
    }while(i<4);

     
    return 0;
}