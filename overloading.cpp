#include<iostream>
using namespace std;
void sum();
int sum(int,int);
float sum(int,int,float);
int main(){
    int a,b,r1;
    float r2,c;
    cout<<"enter numbers";
    cin>>a>>b>>c;
    sum();
    r1=sum(a,b);
    r2=sum(a,b,c);
    cout<<"the sum is" <<r1<<endl;
    cout<<"the sum is"<<r2<<endl;
    

}

void sum(){
    int x,y,s;
    cout<<"enter the numbers";
    cin>>x>>y;
    s=x+y;
    cout<<"the sum is"<<s<<endl;

}
int sum(int x,int y){
    int s=x+y;
    return s;
}
float sum(int x, int y, float z){
    float s=x+y+z;
    return s;
}