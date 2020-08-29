#include <iostream>
#include <string.h>
using namespace std;
int main()
{
   char s[50];
   cin>>s;
   int l = strlen(s);
   int c = 0;
   for(int i=0;i<l/2;i++)
   {
       if(s[i]==s[l-i-1])
       {
           c++;
       }

   }
   if(c == l/2)
   {
       cout<<"String is palindrome";
   }else{
       cout<<"String is not a palindrome";
   }
    return 0;
}
