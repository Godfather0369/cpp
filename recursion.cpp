#include<iostream>
using namespace std;
int main(){
}
int fact(int n){
    if(n==0){
        return 1;
    }else if(n==1){
        return 1;
    }else{
        return n*fact(n-1);
    }