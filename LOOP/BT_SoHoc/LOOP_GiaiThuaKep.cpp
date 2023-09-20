#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int ptt = 1;

    if (n%2==0)
    {
       for(int i=2;i<=n;i+=2){
        ptt*=i;
       }
        cout<<ptt;
    }
    else
    {
     for(int i=1;i<=n;i+=2){
        ptt*=i;
       }
        cout<<ptt;
    }


    return 0;
}

//cach2
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int i = 1;
    long int ptt1 = 1;
    long int ptt2 = 1;


    while (i<=n){

        if (i%2==0)
            ptt1=ptt1*i;
        else
            ptt2=ptt2*i;

            i++;
    }

    if (n%2==0) cout<<ptt1;
    else      cout<<ptt2;

    return 0;
}
