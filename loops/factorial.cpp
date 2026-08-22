#include<iostream>
using namespace std;
int main(){
    int n,i,fact=1;
    cout<<"Enter n: ";
    cin>>n;

    for(i=1;i<=n;i++){
        cout<<i<<"."<<fact<<"x"<<i<<"="<<fact * i<<endl;
        fact=fact * i;

    }

    
    return 0;
}