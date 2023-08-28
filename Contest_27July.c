//Q-1
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if (n>1000){
        printf("More than required testcases.");
    }
    else {
        int data[n][3];
        for(int i=0;i<n;i++){
            scanf("%d %d %d",&data[i][0],&data[i][1],&data[i][2]);
        }
        for(int i=0;i<n;i++){
            if (data[i][0]<=(data[i][1]+data[i][2]))
                printf("%d\n",data[i][0]*2-1);
            else
                printf("%d\n",(data[i][1]+data[i][2])*2+1);
        }
    }
}


//Question E
// #include <stdio.h>
// int check(int a,int b,int arr[]){
//     int max,min,maxpos,minpos;
//     max=min=arr[a];
//     maxpos=minpos=a;

//     for(a;a<b;a++){
//         if(arr[a+1]>max){
//             max=arr[a+1];
//             maxpos=a+1;
//         }
//         if(arr[a+1]<min){
//             min=arr[a+1];
//             minpos=a+1;
//         }
//     }
//     if (maxpos>minpos){
//         return 1;
//     }
//     else{
//         return 0;
//     }


// }

// int main()
// {
//     int n,a;
//     scanf("%d", &n);
//     int arr[n], count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             a=check(i,j,arr);
//             if (a==1){
//                 count++;
//             }
//         }
//     }
//     printf("%d", count);

//     return 0;
// }
