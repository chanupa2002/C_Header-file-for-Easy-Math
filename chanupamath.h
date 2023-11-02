#include <string.h>
#include <math.h>
#include <stdio.h>
#include<stdlib.h>  

void add(float x,float y){
	printf("%.2f", x+y);
}

void sub(float x,float y){
	printf("%.2f", x-y);
}

void multi(float x,float y){
	printf("%.2f", x*y);
}

void divi(float x,float y){
	printf("%d", x/y);
}

void cmp(float x, float y){
	if(x>y){
		printf("%.2f > %.2f",x,y);
	}
	else if(x<y){
		printf("%.2f < %.2f",x,y);
	}
	else if(x==y){
		printf("%.2f = %.2f");
	}
	else{
		printf("");
		return;
	}
}

void max(float x,float y){
	if(x>y){
		printf("%.2f",x);
	}
	else if(x<y){
		printf("%.2f",y);
	}
	else if(x==y){
		printf("%.2f = %.2f", x,y);
	}
	else{
		printf("");
		return;
	}
	
}

void min(float x,float y){
	if(x<y){
		printf("%.2f",x);
	}
	else if(x>y){
		printf("%.2f",y);
	}
	else if(x==y){
		printf("%.2f = %.2f", x,y);
	}
	else{
		printf("");
		return;
	}
	
}

void pwr(float base , float exp){
	
   	double result;
   	
    result = pow(base, exp);
    
    printf("%.2f", result);
	
}

void sq(float x){
	
	printf("%.2f", sqrt(x));
}

void abs(int x){
	
	printf("%d", abs(x));
}
	
void bin(int n){
	
	int a[10],i;    
	system ("cls");  
	  
	for(i=0;n>0;i++)    
	{    
	a[i]=n%2;    
	n=n/2;    
	}    
	printf("");    
	for(i=i-1;i>=0;i--)    
	{    
	printf("%d",a[i]);    
	}    
		
}

void dec(int n){
	
	
	int dec = 0, i = 0, rem;
	
    while (n!=0)
    {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    
    printf("%d", dec);
}


