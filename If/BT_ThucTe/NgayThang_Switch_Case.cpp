/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
switch
:
###End banned keyword*/


/*Program: Compare numbers
This program compares two integers and outputs the larges*/

#include <iostream>

using namespace std;

int main()
{
    int N,T,C,Dv;
    cin>>N;
    T = N/100;
    C = (N/10)%10;
    Dv = N%10;

    if (N<100 || N>999)
    cout<<"NULL";

    switch (T)
    {
        case 1: cout<<"mot tram ";break;
        case 2: cout<<"hai tram ";break;
        case 3: cout<<"ba tram ";break;
        case 4: cout<<"bon tram ";break;
        case 5: cout<<"nam tram ";break;
        case 6: cout<<"sau tram ";break;
        case 7: cout<<"bay tram ";break;
        case 8: cout<<"tam tram ";break;
        case 9: cout<<"chin tram ";break;
    }
    switch (C)
    {
        case 0: if (Dv!=0)
                cout<<"le ";break;
        case 1: cout<<"muoi ";break;
        case 2: cout<<"hai muoi ";break;
        case 3: cout<<"ba muoi ";break;
        case 4: cout<<"bon muoi ";break;
        case 5: cout<<"nam muoi ";break;
        case 6: cout<<"sau muoi ";break;
        case 7: cout<<"bay muoi ";break;
        case 8: cout<<"tam muoi ";break;
        case 9: cout<<"chin muoi ";break;
    }
    switch (Dv)
    {

        case 1: cout<<"mot";break;
        case 2: cout<<"hai";break;
        case 3: cout<<"ba";break;
        case 4: cout<<"bon";break;
        case 5: if (C!=0)
                {cout<<"lam";break;}
                else
                cout<<"nam";break;
        case 6: cout<<"sau";break;
        case 7: cout<<"bay";break;
        case 8: cout<<"tam";break;
        case 9: cout<<"chin";break;
    }
    return 0;
}







