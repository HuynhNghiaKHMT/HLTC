#include <iostream>
#include <math.h>

using namespace std;

void inputMatrix(int a[][100],int &n,int &m){
    cin>>n>>m;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
            cin>>a[i][j];
    }
}
int findRow(int a[][100],int n,int m){
    int mot ;
    for (int i = 0; i < n; i++){
        mot = 0;
        for (int j = 0; j < m; j++){
            if(a[i][j]==1) mot++;
        }
        if(mot == m ) return i;
    }
    return -1;
}
int main()
{
	int a[100][100],n,m;
	inputMatrix(a, n,m);

	cout<<findRow(a,n,m);

	return 0;
}
