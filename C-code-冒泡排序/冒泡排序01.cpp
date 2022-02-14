#include <stdio.h>
int main(){
	int temp;
	int data[] = {8,7,6,5,4,3,2,1};
	for(int i = 0; i < 7; i++ ){
		for(int j = 0; j < 7-i; j++){
			if(data[j] > data[j+1]){
				temp = data[j];
				data[j] = data[j+1];
				data[j+1] = temp;
			}
		}
	}
	for(int i = 0; i < 8; i++){
		printf("%d",data[i]);
	}
} 
