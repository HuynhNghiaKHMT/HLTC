#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int x;
    cin >> x;

    int N=x;
    int M=x;
    int ptt=x;
    if (x<0)
     x = -x;

    while (x!=0){
     N = x%10;
     cout<<N<<endl;
     x = x/10;
    }
    if (M==0) cout<<x;

    if (ptt<0)
    cout<<"-";

    return 0;
}
