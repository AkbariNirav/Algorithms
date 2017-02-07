#include <stdio.h>

int main(void) {
	int a[49],b[49];
	int i = 0;
	for (i=0;i<50;i++)
	{
		a[i]=i+2;
		b[i]=0;
	}
	int j = 0;
	i = 0;
	for(i=0;i<50;i++)
	{
		if(b[i]==0)
		{
			for(j=i+1;j<50;j++)
			{
				if(b[j]!=1)
				{
					if(a[j]%a[i]==0)
						b[j]=1;
				}
			}
		}
	}
	for(i=0;i<50;i++)
	{
		if(b[i]!=1)
			printf("%d ",a[i]);
	}
	return 0;
}
