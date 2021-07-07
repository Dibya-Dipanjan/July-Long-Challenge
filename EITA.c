#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int d,x,y,z;
	    scanf("%d %d %d %d",&d,&x,&y,&z);
	    int u;
	    int v;
	    u = 7*x;
	    v = (d*y) + (7-d)*z;
	    if(u >= v)
	    printf("%d\n",u);
	    else
	    printf("%d\n",v);
	}
	return 0;
}

