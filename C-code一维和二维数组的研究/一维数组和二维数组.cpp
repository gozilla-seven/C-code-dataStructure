#include<stdio.h>
#include<string.h>
void array1();
void array2();
int main(){
	array1();
	array2();
}

void array1(){
	char initArray1[]={1,2,3,4,5,6};
	char initArray2[]="123456";
	printf("initArray1[] of sizeof=%d\n", sizeof(initArray1));
	printf("initArray1[1] of sizeof=%d\n\n", sizeof(initArray1[1]));
	
	printf("initArray2[] of sizeof=%d\n", sizeof(initArray2));
	printf("initArray2[1] of sizeof=%d\n\n", sizeof(initArray2[1]));
	
	printf("initArray1[] of length=%d\n", strlen(initArray1));
	printf("initArray2[] of length=%d\n\n", strlen(initArray2));
	
	printf("initArray1[] of adress=%p\n", initArray1);
	for(int i =0; i< sizeof(initArray1)/sizeof(initArray1[1]); i++){
		printf("initArray1[%d]=%p\n",i,initArray1[i]);		
	}
	printf("\n\n"); 
	for(int i =0; i< (int)strlen(initArray1); i++){
		printf("initArray1[%d]=%p\n",i,initArray1[i]);		
	}
	printf("\n\n");
}

void array2(){
	char array2[][3]={1,2,3,4,5,6};
	for(int i=0; i<sizeof(array2)/sizeof(array2[1][3]);i++){
		for(int j=0; j<3;j++){
			printf("%d%d %d\n",i,j,array2[i][j]);
		}
	}
	printf("\n\n");
		for(int i=0; i<sizeof(array2)/sizeof(array2[1][3]);i++){
		for(int j=0; j<3;j++){
			printf("%d%d %p\n",i,j,array2[i][j]);
		}
	}
	printf("\n\n");
	int ascll = 'a';
	printf("%d",ascll);
}
