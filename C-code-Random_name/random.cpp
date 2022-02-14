#include<stdio.h>
#include<stdlib.h>
#include<time.h> 

int random()
{

	int randomnumber = rand();	
	printf("%d",randomnumber);
}
main()
{
	int i;
	srand((unsigned)time(NULL));
	while(1){
		printf("\n\n请输入数字");
		scanf("%d",&i);	
		random();
	}
	
}

