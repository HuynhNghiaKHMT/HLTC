#include <iostream>
#include <math.h>

using namespace std;
int isPower (int n)
{
    int power;

    for (int i = 2; i<=n; i++){//loại 1 vì 1 mũ mấy cũng là 1
            power = i;
        for (int j = 1; power<=n; j++){//power<=n chi giới hạn thui. còn ko mún cứ để j<=n
                power *= i;
                if (power==n)
                return 1;
        }
    }
    return 0;

}

int main()
{
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int n;cin>>n;
    cout << isPower(n)<< endl;
    return 0;
}


//for (int i = 2; power<=n; i++ )  loại 1 vì 1 mũ mấy cũng là 1
//        for (int j = 2; power<=n; j++){ loại 1 vì số nào mũ 1 cũng chính là số ấy nên lúc nèo cũng in ra true
//                power = pow(i,j);
//                if (power==n)
