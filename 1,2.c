#include<stdio.h>
main()
{
	int i=1,flag=0;
	float a,b,result;
	char sym;
	printf("1,2\n");
	while(sym!='#')
	{
		flag=0;
		printf("%d",i);
		scanf("%f%c%f",&a,&sym,&b);
		switch(sym)
		{
			case'+':result=a+b;break;
			case'-':result=a-b;break;
			case'*':result=a*b;break;
			case'/':
				if (b=0)
					flag=1;
				else
					result=a/b;
				break;
			case'#':flag=3;break;
			default:flag=2;
		}
		if (flag==0)
		{
		printf("%0.1f%c%0.1f=%0.2f\n\n",a,sym,b,result);
		i++;
	
		}
		if(flag)printf("0");
		if(flag)printf("cuo");
		if(flag)printf("jiesu");
	}
}





