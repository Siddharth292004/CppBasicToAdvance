#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"ENTER THE SIZE :";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("*");
        }
        cout<<"\n";
    }
}