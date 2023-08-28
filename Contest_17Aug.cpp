#include <iostream>
#include <array>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int n, n1;
    cin >> n;
    int result[n];
    string s[n];
    string s1;
    int count1=0,count2=0;
    for (int i = 0; i < n; i++)
    {
        cin >> s1;
        s[i] = s1;
        n1 = s1.size();
        for (int i1 = 0; i1 < n1; i1++)
        {
            if (s1[0] == ')')
            {
                result[i] = 0;
            }
            else if(s1[i1=='(']){
                count1++;
            }
            else if(s1[i1==')']){
                count2++;
                
            }
            if(s1[0]!=')'&& count1==count2){
                result[i]=1;
            }
            else if(s1[0]!=')'&& count1!=count2){
                result[i]=0;
            }

        }
    }
}
