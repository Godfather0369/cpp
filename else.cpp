#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your Age: ";
    cin>>age;
    if(age>80){
        cout<<"you cannot vote: Age limit reached...";
    }
    else if (age<18){
        cout<<"you cannot vote: Age below 18... ";
    }
    else if(age>=18){
        cout<<"...you can vote...";
    }
   
}