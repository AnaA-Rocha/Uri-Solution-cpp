#include <iostream>
using namespace std;
int main ()
{
	int a,n,i,soma,soma1;
	soma=0;
	cin>>a>>n;
	while(n<=0)
	{
		cin>>n;
	}
	for(i=0;i<=n-1;i++)
	{
		soma+=i;
	}
	soma1=a*n+soma;
	cout<<soma1<<endl;
}
