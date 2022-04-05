#include<iostream>
using namespace std;
int main(void)
{
	int a[5],i;
	int *p;
	p=a;
	cout<<"Enter elements:";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
		cout<<"You entered:";
		for(i=0;i<5;i++)
		{
			cout<<*(p+i)<<"\n";
		}
}
