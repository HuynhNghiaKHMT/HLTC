#include <iostream>
using namespace std;

int main()
{
    int n[10],a,b;
     a = 0;
     b = 0;
     int i = 0;

    for(int i = 0; i < 10; i++){
        cin>>n[i];

        for(; n[i] > 0; n[i]/=10){

            if(n[i]<10 && n[i]==1)
                a ++;

            if(n[i]<10 && n[i]==4)
                b ++;
        }
    }

    if(a==3 && b==1) cout<<"TRUE";
    else cout<<"FALSE";


    return 0;
}

