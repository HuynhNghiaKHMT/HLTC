#include <iostream>
using namespace std;

bool increaseRoundness(int n){

        while(n%10==0){
            n = n/10;
        }

        while(n%10!=0){
            n = n/10;

        }
        if(n!=0) return 1;
        else        return 0;

}

int main()
{
    int n;
    cin>>n;

    cout <<increaseRoundness(n)<< endl;
    return 0;
}
