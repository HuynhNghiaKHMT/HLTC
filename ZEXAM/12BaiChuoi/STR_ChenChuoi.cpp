#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);
void ChenChuoiTaiVitriK(char s[], char s1[], int k);

int main()
{
	char s[MAX], s1[MAX];
	cin.getline(s, 299);
	cin.getline(s1, 299);
	int k;
	cin >> k;
	if (k < 0 || k>myStrlen(s, 0))
		cout << "Vi tri " << k << " khong thoa dieu kien." << endl;
	else
	{
	    int n = myStrlen(s,k)+ myStrlen(s1,k);
        for(int i = n-1; i >= k; i--){
            s[i+myStrlen(s1,k)]=s[i];

        }
        for(int i = 0; i < myStrlen(s1,k); i++){
            s[k++]=s1[i];

        dgn
        cout<<s;
	}
}

int myStrlen(char s[], int k){
    int i = 0;
    while(s[i]!='\0'){
        i++;
    }
    return i;
}
