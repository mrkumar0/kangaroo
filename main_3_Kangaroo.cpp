#include<iostream>
using namespace std;
int main()
{
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    if((x1-x2)*(v1-v2)>0)
        cout << "NO";
    else if((x1-x2)*(v1-v2)==0)
    {
        if(x1==x2 && v1==v2)
            cout << "YES";
        else
            cout << "NO";
    }
    else
    {
        if(((x1-x2)/(v1-v2) - float(x1-x2)/(v1-v2))==0)
            cout << "YES";
        else
            cout << "NO";
    }
    return 0;
}
