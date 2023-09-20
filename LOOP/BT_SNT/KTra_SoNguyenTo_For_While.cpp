#include <iostream>

using namespace std;

int main()
{
    int n,N,i,d;
    cin>>n;

    if (n==2) cout<<"1";
    else if (n>2){

        int i = 2;
        int kt = 1;

        while (i<=n-1){
            if(n%i==0)
            kt = 0;
            i++;
         }
          if (kt==1)  cout<<"1";
          else        cout<<"0";
    }

         else cout<<"-1";
    return 0;
}




 for (int i=1; i<=n; i++){
        if (n%i==0)
            dem++;
     }
        if (dem==2) cout<<n<<" la SNT ";
