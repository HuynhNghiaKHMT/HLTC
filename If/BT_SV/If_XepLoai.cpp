#include <iostream>

using namespace std;

void getScore(int &Score)
{
    cout<<"Enter course score (0<=score<=100): ";
    cin>>Score;
    cout<<endl;
    cout<<"Course score is "<<Score<<endl;
}
void printGrade(int x)
{
    cout<<"Your grade for the course is ";

    x = x/10;

    if(x==9 || x==10) cout<<"A";
    else if (x==8)    cout<<"B";
    else if (x==7)    cout<<"C";
    else if (x==6)    cout<<"D";
    else              cout<<"F";

}


int main()
{
    int courseScore;
    getScore(courseScore);
    printGrade(courseScore);
    return 0;
}
