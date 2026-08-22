#include<iostream>
using namespace std;
int main(){

    int n,r,target,count=0;
    cout<<"enter your number: "<<endl;
    cin>>n;
    cout<<"enter the digit: "<<endl;
    cin>>target;

    while(n>0){
        r=n%10;
        n=n/10;
        if(r==target){
            count++;
        }
    }
    cout<<"the count is: "<<count<<endl;

    return 0;
}