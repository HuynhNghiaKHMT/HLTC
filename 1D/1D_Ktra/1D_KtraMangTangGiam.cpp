#include <iostream>

using namespace std;

int main()
{
    int n,x,dem=0;
    cin>>n;
    int a[n];

    for(int i = 0; i < n; i++)
        cin>>a[i];

    cin>>x;



    for(int i = 0; i < n; ){
        if(a[i]==x){
            for(int j = i; j < n-1; j++)
                a[j] = a[j+1];
        n = n - 1;
        }
        else i++;
    }
    for(int i = 0; i < n ; i++)
        cout<<a[i]<<" ";


    return 0;
}
