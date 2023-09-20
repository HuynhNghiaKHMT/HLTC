#include <iostream>

using namespace std;

int main()
{
   int a,b;
   cin>>a>>b;

  if (a == 0)
    if ( b == 0)
        cout<<"Phuong trinh "<<a<<"x+"<<b<<"=0"<<" co vo so nghiem";
    else if(b > 0)
        cout <<"Phuong trinh "<<a<<"x+"<<b<<"=0"<<" vo nghiem";
    else
        cout <<"Phuong trinh "<<a<<"x"<<b<<"=0"<<" vo nghiem";
else
    if (b > 0)
        cout <<"Phuong trinh "<<a<<"x+"<<b<<"=0 co 1 nghiem x = "<< (double)-b/a;
    else if(b< 0 )
        cout <<"Phuong trinh "<<a<<"x"<<b<<"=0 co 1 nghiem x = "<< (double)-b/a;
    else
        cout<< "Phuong trinh "<<a<<"x+"<<b<<"=0 co 1 nghiem x = "<< (double)-b/a;

    return 0;
}

