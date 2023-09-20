#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,Num,dem = 0;
    cin>>n;

    if(n<10)
        Num = n;
    else{
        for(int i = n; i >= 10 ; i/=10){
            if(i%10==0) {
                n = i;
                dem++;
                continue;
            }
            else if(i%10<5){
                n = i - i%10;
                dem ++;
                i = n;
            }
            else {
                n = i + (10-i%10);
                dem++;
                i = n;
            }
        }
        Num = n*pow(10,(dem-1));
    }

    cout<<Num;

    return 0;
}
