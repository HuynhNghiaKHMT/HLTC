#include <iostream>
#include <math.h>
using namespace std;
#define MAX 50

void input(double a[][MAX],int &m,int &n){
    cin>>m>>n;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++)
            cin>>a[i][j];
    }
}
double NumScientific(double a[][MAX],int m,int n){
    double sum = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++)
            sum = sum + pow(a[i][j],2);
    }
    return sqrt(sum);
}
int main()
{
    int m,n;
    double a[MAX][MAX];
    input(a,m,n);
    cout<<scientific<<NumScientific(a,m,n);

    return 0;
}
