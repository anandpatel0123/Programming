
#include<bits/stdc++.h>
using namespace std;
  
int countFreq(string pat, string txt)
{
    int M = pat.length();
    int N = txt.length();
    int res = 0;
   
 
    for (int i = 0; i <= N; i++)
    { 
       
        int j;
        for (j = 0; j < M; j++)
            if (txt[i+j] != pat[j])
                break;
  
       
        if (j == M)  
        {
           res++;
           j = 0;
        }
    }
    return res;
}

int main()
{
   string str;
   getline(cin,str);
   string word;
   cin>>word;
   cout << countFreq(word, str);
   return 0;

   
}
