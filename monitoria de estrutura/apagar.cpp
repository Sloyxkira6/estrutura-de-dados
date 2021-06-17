#include <stdio.h>

int main()
{
	int v[] ={1,2,3,4,5};
	
	for (int i=0; i<5; i++)
	{
		if(v[i]%2==1)
		{
			printf("%d-", v[i]);
		}
	}
	return 0;
}
