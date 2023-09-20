#include <iostream>

using namespace std;

int main()
{
    int candle,phan,thua,dem;
    cin>> candle>>phan;

    dem = candle;
    thua = candle;
    if((candle<1 || candle>15) || (phan<2 || phan>5)) dem = 0;
    else{
        while(thua >= phan){
            candle = thua / phan;
            thua = thua%phan + candle;
            dem = dem + candle;
        }
    }
        cout<<dem;

    return 0;
}
