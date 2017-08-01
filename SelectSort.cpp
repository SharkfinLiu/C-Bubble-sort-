/*Sort from small to large*/
#include<stdio.h>
#define N 10
main()
{
	int i,j,k,a[N],t;
	for(i=0;i<N;i++)
		scanf("%d", &a[i]);
	for(j=0;j<N-1;j++)
	{
		k=j;
		for(i=j+1;i<=N-1;i++)
			if(a[k]>a[i])
				k=i;
		t=a[j];
		a[j]=a[k];
		a[k]=t;
	} 
	for(i=0;i<N;i++)
		printf("%5d",a[i]);
} 
