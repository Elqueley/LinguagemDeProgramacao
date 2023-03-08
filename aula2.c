#include <stdio.h>
#include <string.h>

int main(){
	
	char name[30];
	
	printf("qual teu nome negrao ? \n");
	scanf("%[^\n]s", name);
	
	if(strcmp(name,"jose") == 0){
		printf("ola %s",name);	
	}		
		
	
	
}
