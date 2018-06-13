/*调用函数求两整数绝对值的和*/
#include <stdio.h>
int abs_sum(int m,int n);
main()
{	int x,y,z;
	scanf("%d%d",&x,&y);
	z=abs_sum(x,y);
	printf("sum is %d\n",z);
}
int abs_sum(int m,int n)
{	if(m<0)
		m=-m;
	if(n<0)
		n=-n;
	return m+n;
}
