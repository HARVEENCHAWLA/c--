#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter first number: "<<endl;
    cin>>m;
    cout<<"enter second number: "<<endl;
    cin>>n;

    while(m!=n){
        if(m>n){                      
            m=m-n;
        }
        else{
            n=n-m;
        }
    }
    cout<<"the highest common factor is: "<<m<<endl;
    return 0;

}