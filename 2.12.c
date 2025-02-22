#include<stdio.h>
int main()
{
	char a[20];
	int k;
	scanf("%4s %d",a,&k);
	int i;
	for(i=0;i<4;i++)
	{
		char new='a'+((a[i]-'a'+k)%26);
		a[i]=new;
	}
	printf("%s\n",a);
	return 0;
}



