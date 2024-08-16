#include<iostream>
using namespace std;
int avg(int a,int b, int c){
    int total;
    total=(a+b+c)/3;
    return total;

}

int main(){
    int a,b,c;
    cout<<"ENTER THE NUMBER A : ";
    cin>>a;
    cout<<"ENTER THE NUMBER B :";
    cin>>b;
    cout<<"ENTER THE NUMBER C : ";
    cin>>c;
    int n = avg(a,b,c);
    cout<<"THIS IS THE AVERGE OF THREE NUMBER : "<<n;
}
