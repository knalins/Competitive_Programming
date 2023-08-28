#include <stdio.h>
// Question 1
//  int one(char s[],int n){
//      int count0=0, count1=0,i=0,j=0;
//      for(i=0;i<n;i++){
//          if(s[i]=='n')
//              count1++;
//          if(s[i]=='z')
//              count0++;
//      }
//      for(i=0;i<count1;i++){
//          printf("1 ");
//      }
//      for(i=0;i<count0;i++){
//          printf("0 ");
//      }

// }

// int main(){
//     int n;
//     scanf("%d",&n);
//     char s[n];
//     scanf("%s",s);
//     one(s,n);
//     return 0;
// }

// Question2
//  int main()
//  {
//      int n;
//      scanf("%d", &n);
//      char s[n];
//      scanf("%s", s);

//     int counts = 0, countf = 0, i = 0;
//     for (i = 0; i < n; i++)
//     {
//         if ( s[i]== 'S')
//         {
//             if(s[i+1]=='F')
//                 counts++;
//         }
//         if (s[i] == 'F')
//         {
//             if (s[i+1]=='S')
//                 countf++;
//         }
//     }
//     if (counts > countf)
//         printf("YES");
//     else
//         printf("NO");

//     return 0;
// }



//Question 3
// int main()
// {
//     int n,counte = 0, countm = 0;
//     scanf("%d", &n);
//     if (n % 2 == 1)
//         counte = 1;
//     else
//         countm = 1;

//     if (counte == 1)
//         printf("Ehab");
//     else
//         printf("Mahmoud");
//     return 0;
// }

//Question 5
// int main()
// {
//     int n1,n2,n3,count = 0;
//     scanf("%d %d %d", &n1,&n2,&n3);
//     if(n1<=n2 && n1<=n3)
//         printf("Yes");
//     else
//         printf("No");
// }


//Q-73
// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string s;
//     cin >> s;
//     int count = 0,j=0,n=s.length()-1;
//     for (int i = 0; i <= n; i++)
//     {
//         if (s[n-i] == '0')
//             count++;
//         if (count>=6 && s[n-i]=='1')
//             j=1;
//     }
//     if (count >= 6 && j==1)
//         cout<<"yes";
//     else
//         cout<<"no";
// }