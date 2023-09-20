#include <iostream>

using namespace std;

int main()
{
    int v1,w1,v2,w2,M;
    cin>>v1>>w1>>v2>>w2>>M;
    if (w1<=M && M<w2)
        cout<<v1;
    if (w2<=M && M<w1)
        cout<<v2;
    if (M >= w1 + w2)
        cout<<v1 + v2;
    else if (M >= w1 && M >= w2  )
            {if (v1>v2) cout<<v1;
            else cout<<v2;}
    else if (M < w1 && M < w2  ) cout<<"0";
    return 0;
}



//    if (M >= w1 + w2)
//     cout<<v1 + v2;
//    else
//        if (M >= w1 || M >= w2  )
//          if (w1>w2)
//            if (v1>v2) cout<<v1;
//            else cout<<v2;
//
//          else if (w1<w2)
//               if (v1>v2) cout<<v1;
//               else cout<<v2;
//
//               else
//                    if (v1>v2) cout<<v1;
//                    else cout<<v2;
//    else cout<<"0";
//
//
