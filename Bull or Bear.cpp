#include<iostream>
using namespace std;
int main(){
int t,x,y;
cin>>t;
for(int i=1;i<=t;i++){
      cin>>x>>y;
 if (x<y){
            cout << "Profit"<< endl;

        }
         else if (x==y){
    cout<<"Neutral"<<endl;
}
     else {
        cout << "Loss"<< endl;
    }
}

return 0;
}



