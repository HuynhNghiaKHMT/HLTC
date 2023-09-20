#include <iostream>

using namespace std;

int main()
{
    int n,l,r,s;
    cin>>n>>l>>r;
    int t = 0;

  for(int i=l;i<=n/2;i++){
        s = n - i;
    if (s>=l && s<=r){
        t++;}
    }
    cout<<t;
    return 0;
}
