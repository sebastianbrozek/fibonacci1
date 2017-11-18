#include <stdio.h>
#include <math.h>
	
void main(){
	int i,n,a,b,c;

	printf("Podaj liczbę n= ");
	scanf("%d", &n);
	
	if(n<=2)
	{
		c=1;
	}
    	
	else
	{
		i=3;
		a=b=1;
		while(i<=n)
		{
			c=a+b;
			a=b;
			b=c;
			i=i+1;
		}
	}
	printf("c=%d",c);
	
	
	
}			
