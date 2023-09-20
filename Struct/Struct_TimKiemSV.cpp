#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

struct DATE
{
    int day, month, year;
};
typedef struct STUDENT
{
    char id[11];
    char name[35];
    DATE dob;
    float math, phy, chem, aver;

} SV;
void inputArrayStudents(STUDENT a[],int &n){
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>a[i].id;
        cin.ignore();
        cin.getline(a[i].name,100);
        cin>>a[i].dob.day>>a[i].dob.month>>a[i].dob.year;
        cin>>a[i].math>>a[i].phy>>a[i].chem;
    }
}
void outputStudent(STUDENT x){

        cout<<x.id<<" |";
        cout<<x.name<<" |";
        cout<<x.dob.day<<"/"<<x.dob.month<<"/"<<x.dob.year<<" |";
        cout<<x.math<<" |"<<x.phy<<" |"<<x.chem<<" |";
        cout<<(x.math + x.phy + x.chem)/3<<endl;

}
int findStudent(STUDENT a[],int n,char name[]){
    for(int i = 0; i < n; i++){
        int j = 0;
        for( ; j < strlen(name);j++){
            if(a[i].name[j]!=name[j]) break;
        }
        if(j==strlen(name)){
             return i;
             break;
        }
    }
    return -1;
}
int main()
{
    STUDENT a[100];
    int n,i;
    char name[35];

    inputArrayStudents(a,n);

    cout<<"\nFind a student with name: ";
    cin.ignore();
    cin.getline(name,35);
    i = findStudent(a,n,name);
   if(i==-1) cout<<"\nNo Found.";
   else
   {
        cout<<"\nID\t|Fullname\t|Date of birth\t|Maths\t|Phys\t|Chemis\t|Average score\n";
        outputStudent(a[i]);
    }

    return 0;
}

