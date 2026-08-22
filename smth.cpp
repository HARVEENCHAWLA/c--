#include<iostream>
using namespace std;
int main(){

    int n,r,target,count=0;
    cout<<"enter your number: "<<endl;
    cin>>n;


    while(n>0){
        r=n%10;
        n=n/10;
        if(r>1){
            count++;
            
        }
    }


    return 0;
}