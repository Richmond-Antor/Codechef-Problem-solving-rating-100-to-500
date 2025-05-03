#include<iostream>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
if(x>=1 && x<=1000 && y<=x && y<=1000){


    cout<<x-y;
}
else{ cout<<"invalid input";
}
}



