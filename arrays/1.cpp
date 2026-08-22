#include<iostream>
using namespace std;
int main(){
    int a[5]={1,3,4,5,6};
    for(int i=0;i<5;i++){
        cout<<a[i]<<endl;     //a[0]=1 , a[1]=2, a[3]=2, .....etc
    }                         // for(int x:a){cout<<x<<endl;}              
    return 0;
}