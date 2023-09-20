// Phuong Phap tru.
#include <iostream>
using namespace std;

int ucln (int a, int b){
    a = abs(a);
    b = abs(b);
    if(a==0 && b==0)
        return -1;
    else {
        while (a*b!=0){
            if(a>b)
                a=a-b;
            else
                b=b-a;
        }
        return a+b;
    }
}
int main (){
	int n,m ;
	cin >> n >> m;
    if (ucln(n,m)==-1) cout <<n<<" va "<<n<<" khong co UCLN";
	else cout<<"UCLN cua "<<n<<" va "<<m<<" la "<<ucln(n,m);

	return 0;
}

// Phuong Phap chia du
int ucln_du(int a,int b){
    a = abs(a);
    b = abs(b);
    while(a*b!=0){
        if(a>b) a = a % b;
        else    b = b % a;
    }
    return a+b;
}

// Phuong phap vong lap.
    a = abs(a);
    b = abs(b);
    if(a==0) ucln = b;
    else if(b==0) ucln = a;
    else{
        for(int i = 1; i < min(a,b); i++){
            if(a%i==0 && b%i==0)
                ucln = i;
        }
        cout<<i;
    }

