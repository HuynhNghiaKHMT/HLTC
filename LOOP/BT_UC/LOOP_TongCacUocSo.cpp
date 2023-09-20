//BT1: Tong Cac Uoc
#include <iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int Tong = 0,i = 1;

  while(i<n)
  {
     if (n%i==0)
        Tong += i;
        i++;
  }
  cout<<Tong;

  return 0;
}

//BT2: Tong cac uoc chan
#include <iostream>
using namespace std;

int Input()
{
    int n;
    cin>>n;
    return n;
}
int sum_even_divisor(int n)
{
    int s = 0;
    if(n%2==0){
        for (int i=2;i<=n;i+=2){
            if(n%i==0)
            s += i;
        }
        return s;
    }
    else return -1;
}
int main() {
	int n;
	n = Input();
	cout << sum_even_divisor(n);
}

