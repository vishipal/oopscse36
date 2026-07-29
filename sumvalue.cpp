#include<iostream>
using namespace std;
int sum(int,int);
int main(){
    int a,b,r;
    cin>>a>>b;
    r=sum(a,b);
    cout<<r;
}
int sum(int a, int b){
    int s;
    s=a+b;
    return s;
}