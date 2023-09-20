#include <iostream>

using namespace std;

int main()
{
   int n,a,b;
   cin>>n>>a>>b;
   int i=1,S=0;

   while(i<=n)
     {
         S += a*b;
         a++,b++;
         i++;
    }
    cout<< S << endl;

    return 0;
}
