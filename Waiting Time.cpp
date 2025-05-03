#include<iostream>
using namespace std;
int main(){
int t,k,x;
cin>>t;
for(int i =1;i<=t;i++){
    cin>>k>>x;
    if((k*7)>x){
        cout<<((k*7)-x)<<endl;
    }
    else{
        cout<<0<<endl;
    }
}

}





