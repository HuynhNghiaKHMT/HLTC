#include <iostream>

using namespace std;

int main()
{
    int min1,min2_10,min11,S;
    cin>>min1>>min2_10>>min11>>S;

   if (S<=min1)
      cout<<"1";
    else if (S-min1<=9*min2_10){
        S = S - min1;
        cout<<1+ S/min2_10;
   }
    else if (S-min1-9*min2_10>=min11){
            S = S - min1;
            S = S - 9*min2_10;
            cout<<1+9+S/min11;
            }

    return 0;
}


//    int min1,min2_10,min11,S,S1,S2;
//    cin>>min1>>min2_10>>min11>>S;
//
//    if (S-min1>=0){
//       S1 = S - min1;
//        if (S1-9*min2_10>0){
//           S2 = S1 - 9*min2_10;
//           cout<<1+9+S2/min11;
//        }
//        else cout<<1+S1/min2_10;
//    }
//    else cout<<1;
//
