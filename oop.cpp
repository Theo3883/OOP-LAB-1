#include <iostream>
using namespace std;

/*int main()
{
    char s[100];
    FILE *fptr;
    fptr = fopen("in.txt", "r");
    int l;
    int suma=0;
    while(fscanf(fptr,"%s",s)!=EOF)
    {
        l=strlen(s);
        int x=0;
        for(int i=0;i<l;i++)
            x=(s[i]-'0')+x*10;
        suma+=x;
    }
    scanf("%d",&suma);
}*/
int cmp(const string &a,const string &b)
{
    return a.size()>b.size() ;
}
int main()
{
    FILE *fptr;
    fptr = fopen("in.txt", "r");
    char s[100],prop[200];
    while(fscanf(fptr,"%s",s)!=EOF)
    {
        strcat(prop,s);
        strcat(prop," ");
    }
    prop[strlen(prop)-1]='\0';
    vector <string> v;
    char *p;
    int i=0;
    p=strtok(prop," ");
    while(p!=NULL)
    {
        string temp=p;
        v.push_back(temp);
        p=strtok(NULL," ");
    }
    sort(v.begin(),v.end(),cmp);
    for(int j=0;j<v.size();j++)
        cout<<v[j]<<'\n';
}
/*#include <iostream>

using namespace std;
bool isPrime(int n)

{

    for (int tr = 2; tr < n / tr; tr++)

        if ((n % 2 ) == 0)

            return false;

    return true;

}

int main()

{

    int n;

    std::cout << "Enter a number:";

    std::cin >> n;

    if (isPrime(n))

        std::cout << n << " is prime !";

    else 

        std::cout << n << " is NOT prime !";

    return 0;

}*/