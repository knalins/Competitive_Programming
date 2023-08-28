#include <iostream>
#include <string>
using namespace std;
void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }
  
        // If no two elements were swapped by inner loop,
        // then break
        if (swapped == false)
            break;
    }
}

int main()
{
    int n, n2 = 0,count1=0,count2=0;
    cin >> n;
    int arr[n][20];
    int num[n];
    for (int i = 0; i < n; i++)
    {
        cin >> n2;
        num[i]=n2;
        for (int j = 0; j < n2; j++)
        {
            cin>>arr[i][j];
        }
        

    }
    if (count1==0 || count2==0){
        cout<<'-1';
    }
    else{

    }
}
