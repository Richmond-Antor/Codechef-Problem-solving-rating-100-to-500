#include<iostream>
using namespace std;
int main(){
int t,a,b,c;
cin>>t;
    for( int i =1; i<=t; i++){
            cin>>a>>b>>c;
if((a>b && a<c)||(a<b && a>c)){
    cout<<a<<endl;
}
else if((b>c && b<a)||(b<c && b>a)){
    cout<<b<<endl;
}
else{
    cout<<c<<endl;
}






}
}



