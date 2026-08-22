#include<iostream>
using namespace std;
int main(){
    int n,r,second=-1,largest=-1;
    cout<<"enter your number: ";
    cin>>n;
    while(n>0){
        r=n%10;
        n=n/10;
        if(n>largest){
            second=largest;
            largest=r;
        }
        else if(r>second && r!=largest){
            second=r;

        }
    }
    if (second == -1){
        cout<<"no second largest digit";

    }
    else{
        cout<<"the second largest digit is "<<largest<<endl;
    }

    return 0;
}