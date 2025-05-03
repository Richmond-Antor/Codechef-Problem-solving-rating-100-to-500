#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int t,a,b,c;
cin>>t;
    for( int i =1; i<=t; i++){
            cin>>a>>b>>c;

            int m= max(a,b);
            int m1=max(m,c);


if(m1==a){
    cout<<"Alice"<<endl;
}
else if(m1==b){
    cout<<"Bob"<<endl;
}
else{
    cout<<"Charlie"<<endl;
}
}

}

