#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	printf("enter array elemt ");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	int l=0,r=n-1,as=0;
		int e;
	printf("enter elemnt");
	scanf("%d",&e);
int m;


while(l<=r)
{
	m=(l+r)/2;
	if(a[m]==e)
	{
	as=m;
		break;
	}
		
	else if(a[m]>e)
		r=m-1;
	else
		l=m+1;
}
printf("%d",as);
	
	return 0;
}
