#include <iostream>

using namespace std;

int main()
{
    double  km,ch,t;
    int T;
    cin>>km>>ch>>t;

    if((km<=0 || t<0) || (ch!=1 && ch!=0))
        cout<<"Gia tri khong hop le";

    else{
        if (km>0 && km<=1){
            if (ch == 0)
                T = 10000;
            else if (ch == 1)
                T = 10000+10000*0.6;
                if (t>2)
                T = T + (t-2)*20000;
        }
        else if (km>1 && km<=30){
            if (ch == 0)
                T = 10000+(km-1)*13600;
            else if(ch == 1)
                T = (10000+(km-1)*13600)+(10000+(km-1)*13600)*0.6;
                if (t>2)
                T = T + (t-2)*20000;
        }
        else if (km>30){
            if (ch == 0)
                T = 10000+29*13600+(km-30)*11000;
            else if(ch == 1)
                T = (10000+29*13600+(km-30)*11000)+(10000+29*13600+(km-30)*11000)*0.6;
                if (t>2)
                T = T + (t-2)*20000;
        }
    cout<<T;
    }
    return 0;
}
