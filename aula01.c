#include <stdio.h>

int main(){
	
	int q=0,primo;
	
	for(int j = 0; ; j++)
	{
		primo = 1;
		for(int i = 2; i < j; i++)
		{
			if (j%i==0){
				primo=0;
			}
		}
		if(primo){
			printf("%d \n",j);
			q++;
		}
	}
	
}
