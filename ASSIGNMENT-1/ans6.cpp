#include <iostream>
using namespace std;
int main()
{
  int n, i, h=0, t=0;
  cout << "Enter the Number ";
  cin >> n;
  h=n/2;
  for(i = 2; i <= h; i++)
  {
      if(n % i == 0)
      {
          cout<<n<<" is not a Prime number";
          t=1;
          break;
      }
  }
  if (t==0)
      cout <<n<<" is a Prime number";
  return 0;
}
