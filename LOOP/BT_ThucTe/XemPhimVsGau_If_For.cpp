#include <iostream>

using namespace std;

int main()
{
    long int x,y,z,a,b,c,tg,xem,ucln;
    cin>>x>>y>>z>>a>>b>>c;

    tg = x*3600+y*60+z;
    xem = a*3600+b*60+c;


    if (xem==0){
        ucln = tg;
        cout<<xem/ucln<<" "<<tg/ucln;
    }
    else if (xem<=tg){

        for (long int i = 1; i<= xem;i++){
            if (xem%i==0 && tg%i==0)

            ucln = i;
        }
        cout<<xem/ucln<<" "<<tg/ucln;
    }

    return 0;

}

//SU DUNG HAM

int UCLN (int a, int b)
{
    int UCLN;
        if (a==0) return b ;
        else if (a>0)
            while (a!=b){
            if (a>b)
                a = a - b;
            else
                b = b - a;
            }
            return a;
}

int main()
{
    long int x,y,z,a,b,c,tg,xem,ucln;
    cin>>x>>y>>z>>a>>b>>c;

    tg = x*3600+y*60+z;
    xem = a*3600+b*60+c;

    cout<<xem/UCLN(xem,tg)<<" "<<tg/UCLN(xem,tg);
    return 0;
}

