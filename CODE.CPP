#include<iostream.h>

int main()
{
    char a[10];
    int i,j;
    cout<<"Enter a name with odd no of characters";
    for (i=0;i<=10;i++)
    {
	cin>>a[i];
    }
    j=strlen(a[i]);
    for(i=(j+1)/2;i<=j;i++)
    {
	cout<<a[i];
	cout<<endl;
