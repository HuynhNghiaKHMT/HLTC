#include <iostream>

using namespace std;

int main()
{
    int arr[20000],n,ptt;
    cin>>n;

    for(int i = 0; i < n ; i++){
        cin>>arr[i];
    }
     ptt=arr[0];
     arr[0]=arr[n-1];
     arr[n-1]=ptt;
     for(int i = 0; i < n ; i++){
        cout<<arr[i]<<endl;
     }


    return 0;
}
