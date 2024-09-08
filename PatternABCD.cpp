#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER THE NUMBER : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=n;j++){
            int b=64+a;
            char sub=(char)b;
            cout<<" "<<sub;
            a++;
        }
    
        cout<<"\n";
    }
}