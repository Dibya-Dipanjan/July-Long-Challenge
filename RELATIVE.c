#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int g,c;
	    scanf("%d %d",&g,&c);
	    int h;
	    h = (c*c)/(2*g);
	    printf("%d\n",h);
	}
	return 0;
}

