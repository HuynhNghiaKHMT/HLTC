
#include <iostream>
#include <math.h>


using namespace std;
int main()
{
    double a,b,c,DTB;
    cin>>a>>b>>c;
    DTB = round(((a+b+c)/3)*100)/100;

    if(DTB>=9 && DTB<=10)
                cout<<"DTB = "<<DTB<<endl<<"Loai: XUAT SAC ";
        else if(DTB>=8 && DTB<9)
                cout<<"DTB = "<<DTB<<endl<<"Loai: GIOI ";
        else if(DTB>=7 && DTB<8)
                cout<<"DTB = "<<DTB<<endl<<"Loai: KHA ";
        else if(DTB>=6 && DTB<7)
                cout<<"DTB = "<<DTB<<endl<<"Loai: TB KHA ";
        else if(DTB>=5 && DTB<6)
                cout<<"DTB = "<<DTB<<endl<<"Loai: TB ";
        else if(DTB>=4 && DTB<5)
                cout<<"DTB = "<<DTB<<endl<<"Loai: YEU ";
        else
                cout<<"DTB = "<<DTB<<endl<<"Loai: KEM ";

    return 0;
}
