#include<iostream>

using namespace std;

void sieve(int n)
{
	int prime[n+1]={0};
	for(int i=2;i*i<=n;i++)
	{
		if(prime[i]==false)
		{
			for(int j=2;j<=n;j++)
			{
				if(i*j<=n)
					prime[i*j]=true;
				else
					break;
			}
		}
	}
	for (int p=2; p<=n; p++)
       		if (prime[p]==false)
       			printf("%d ",p);
}

int main() {
	int n;
	scanf("%d",&n);
	sieve(n);
	return 0;
}
