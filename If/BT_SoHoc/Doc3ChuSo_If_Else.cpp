
#include <iostream>
#include <math.h>


using namespace std;
int main()
{
    int N,T,C,Dv;
    cin>>N;
    T = N/100;
    C = (N/10)%10;
    Dv = N%10;

    if      (T==9) cout<<"chin tram";
    else if (T==8) cout<<"tam tram";
    else if (T==7) cout<<"bay tram";
    else if (T==6) cout<<"sau tram";
    else if (T==5) cout<<"nam tram";
    else if (T==4) cout<<"bon tram";
    else if (T==3) cout<<"ba tram";
    else if (T==2) cout<<"hai tram";
    else           cout<<"mot tram";

    if      (C==9) cout<<" chin muoi";
    else if (C==8) cout<<" tam muoi";
    else if (C==7) cout<<" bay muoi";
    else if (C==6) cout<<" sau muoi";
    else if (C==5) cout<<" nam muoi";
    else if (C==4) cout<<" bon muoi";
    else if (C==3) cout<<" ba muoi";
    else if (C==2) cout<<" hai muoi";
    else if (C==1) cout<<" muoi";
    else if (Dv==5)cout<<" le";
    else           cout<<" ";

    if      (Dv==9) cout<<" chin";
    else if (Dv==8) cout<<" tam";
    else if (Dv==7) cout<<" bay";
    else if (Dv==6) cout<<" sau";
    else if (Dv==4) cout<<" bon";
    else if (Dv==3) cout<<" ba";
    else if (Dv==2) cout<<" hai";
    else if (Dv==1) cout<<" mot";
    else if (Dv==0) cout<<" ";
    else if (C!=0)  cout<<" lam";
    else            cout<<" nam";

    return 0;
}
