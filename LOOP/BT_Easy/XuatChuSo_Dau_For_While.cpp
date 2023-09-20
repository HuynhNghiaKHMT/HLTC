#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int N = n;
   int i = 0;

   while (N!=0){
    N = N/10;
    i++;
   }

    if (n==0)
      cout<<"So "<<n<<" co 1 chu so";
    else if (n<0)
    cout<<"So "<<n<<" co "<<i<<" chu so va 1 dau";
    else
    cout<<"So "<<n<<" co "<<i<<" chu so";

    return 0;
}
