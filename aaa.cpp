/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <array>
#include <algorithm>
#include <string>


using namespace std;
int main(){
    int t;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++){
        cin>>a[i];
    }
    int m=0,k=0,n=0,g=0;
    for(int i=0;i<t;i++){
        if(a[i]==1){
            m++;
        }
        if(a[i]==2){
            k++;
        }
        if(a[i]==3){
            n++;
        }
        if(a[i]==4){
            g++;
        }
    }
    
   // cout<<m<<" "<<k<<" "<<n<<" "<<g<<endl;
    
    int x=min(n,m);

     //cout<<x<<endl;

    int o1;
    
     o1= x + k/2 + g;

     //cout<<o1<<endl;
    int  h=n-x;
  //  o1=o1 + (h*3)/4 + ((h*3)%4 == 0 ? 0 : 1);
   o1=o1 + h;
   int y=k-2*(k/2);
    /*if(y==1){
        o1=o1+1;
    }
    else{
        o1=o1;
    }
  */
 int z=m-x;
 /*if(z%4==0){
    o1+=z/4;
 }
 else{
    o1=o1+((z/4)+1);
 }
 */
 int i=(2*y) + z;

 if(i%4==0){
    o1+=i/4;
 }
 else{
   o1+=(i/4) + 1;
 }
cout<<o1<<endl;
    return 0;
}