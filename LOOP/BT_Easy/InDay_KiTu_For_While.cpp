#include <iostream>

using namespace std;

int main()
{
    int n;
    char c;
    cin>>n;

    while (1)
    {
        // cout<<endl;
        cin>>c;
        cout<<endl;
        if (c=='X')
            break;
        int i = 0;
            while (i<n)
            {
            cout<<c<<" ";
            i++;
            }
        // cout<<endl;
    }

  return 0;
}
