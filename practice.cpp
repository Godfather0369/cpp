//  if-else code
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter the Age: ";
    cin>>age;
    if(age>=80){
        cout<<"you cannot vote";
    }
    else if(age<18){
        cout<<"you cannot vote";
    }
    else if(age>=18){
        
    cout<<"you can vote";
    }
    return 0;
}

//pointer code
#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int *p = &a;
    int **dp = &p;
    cout<<""
}

//function code
#include<iostream>
using namespace std;
void add(){
    int a = 10;
    int b = 30;
    cout<<a+b;
}
int main(){
    add();
}

//