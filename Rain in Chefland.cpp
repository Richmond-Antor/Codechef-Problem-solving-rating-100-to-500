#include<iostream>
using namespace std;
int main(){
int t,x;
cin>>t;
    for( int i =1; i<=t; i++){
            cin>>x;
if( x<3){
    cout<<"Light"<<endl;
}
else if(x>=3 && x<7){
    cout<<"MODERATE"<<endl;
}
else{
    cout<<"HEAVY"<<endl;
}}

}
