#include<iostream>
using namespace std;
string Tostring(int n)
{
    if(n==0)
    return "0";
    string s;
    char ch;
    while(n)
    {
        ch=n%10+'0';
        n/=10;
        s=ch+s;
    }
    return s;
}
int main()
{
	int a;
	cin>>a;
	string st=Tostring(a);
	cout<<st<<endl;
}
