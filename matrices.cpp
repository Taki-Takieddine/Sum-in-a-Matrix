#include<stdio.h>
main()

{
	int T[10][10];
	int i,j,n,m,np,ni;
	
	printf("Donner l'element i: ");
	scanf("%d",&n);
	printf("Donner l'element j: ");
	scanf("%d",&m);
	
	for(i=0;i<n;i++)
	{	
		for(j=0;j<m;j++)
		{
			printf("T[%d]= ",i,j);
			scanf("%d",&T[i][j]);
		}
	}
	np=0;
	for(i=0;i<n;i++)
	{	
		for(j=0;j<m;j++)
		{
			if(T[i][j]%2==0)
			{
				np=np+T[i][j];
			}	
		}
	}	
printf("la somme est: %d",np);
}

