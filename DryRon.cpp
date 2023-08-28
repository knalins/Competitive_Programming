#include<iostream>
using namespace std;

int main(){
    int n;
    int n2=0;
    int n3=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>n3;
        n2=n2+n3;
    }
    if(n2%4==0){
        cout<<n2/4;
    }
    else
        cout<<((n2/4)+1);
    
}
