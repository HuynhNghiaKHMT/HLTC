#include <iostream>
using namespace std;

int kq(int n,int m){
    int dem = 0;
    for(int i = n; i > 0; i/=10){
        dem ++;
    }
    if(m>=dem){
        while(m-dem>=dem){
            m = m - dem;
            n++;
            if(n==10 || n==100 || n==1000)
                dem++;
        }
    }
    else n--;

    return n;
}

int main() {
   int n,m;
   cin>>n>>m;
   cout<<kq( n, m);

   return 0;
}

//Dung 2 ham:
int dem(int n){
    int dem = 0;
    for(int i = n; i > 0; i/=10){
        dem ++;
    }
    return dem;
}

int kq(int n,int m){

    if(m>=dem(n)){
        while(m-dem(n)>=dem(n)){
            m = m - dem(n);
            n++;
            }
    }
    else n--;

    return n;
}
