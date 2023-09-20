#include <iostream>
using namespace std;
#define MAX 1000
void input(unsigned int arr[][MAX], unsigned int &m, unsigned int &n);
unsigned int countPrimeInAB(unsigned int arr[][MAX], unsigned int m, unsigned int n, unsigned int a, unsigned int b);

void input(unsigned int arr[][MAX], unsigned int &m, unsigned int &n){
    cin>>m>>n;
    for(int i = 0; i < m; i++){
        for(int  j = 0; j < n; j++){
            cin>>arr[i][j];
        }
    }
}
int check(unsigned int x ){
    if(x<2) return 0;
    else{
        for(int i = 2; i*i <= x; i++){
            if( x % i == 0) return 0;
        }
        return 1;
    }
}
unsigned int countPrimeInAB(unsigned int arr[][MAX], unsigned int m, unsigned int n, unsigned int a, unsigned int b){
    unsigned int dem  = 0;
    for(int i = 0; i < m;i++){
        for(int  j = 0; j < n; j++){
            if(a<=arr[i][j] && arr[i][j]<=b && check(arr[i][j])==1)
                dem++;
        }
    }
    return dem;
}

int main()
{
    unsigned int a;
    unsigned int b;
    unsigned int arr[MAX][MAX];
    unsigned int m;
    unsigned int n;

    cin >> a >> b;
    input(arr, m, n);
    unsigned int res = countPrimeInAB(arr, m, n, a, b);
    cout << res;

    return 0;
}
