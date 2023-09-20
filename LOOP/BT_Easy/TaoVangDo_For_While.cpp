#include <iostream>

using namespace std;

int main()
{
    int k;
   cin>>k;
   int i=1,ye=0,red=0;
   while(i<=k)
     {
      if (i%2==0)
         red=red+i*i;

      else
         ye=ye+i*i;
         i++;
    }
    cout<< red-ye << endl;

    return 0;
}
