#include<iostream>
using namespace std;
int main(){
int a,b,x,y;

    cin>>a>>b>>x>>y;
    int m=(a*2+b);
    int r =(x*2+y);
    if(m>r){
        cout<<"MESSI"<<endl;
    }
    else if(m==r){
        cout<<"EQUAL"<<endl;
    }
    else{
        cout<<"RONALDO"<<endl;
    }
}








