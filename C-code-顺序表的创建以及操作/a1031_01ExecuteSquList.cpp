#include <stdio.h>
#define MaxSize 10
typedef struct{
	int data[MaxSize];
	int length;
}SqList;

bool initList(SqList &L){
	for(int i = 0; i<MaxSize; i++){
		L.data[i] = 0;
	}
	return true;
	L.length = 0;
}

bool ListInsert(SqList &L,int i,int e){
	if(i < 1 || i > L.length+1){
		return false;
	}
	if(L.length >= MaxSize){
		return false;	
	}
	for(int j = L.length-1; j >= i-1; j--){
		L.data[j+1] = L.data[j]; 
	}
	L.length ++;
	L.data[i-1] = e;
	printf("����%dλ�ò���%d���˳�������Ϊ��\n",i,e);
	return true;
	
}

int LocateElem(SqList &L,int e){
	if(L.length <0){
		return false;
	}
	for(int i= 0; i<L.length;i++){
		if(L.data[i] == e){
			printf("Ԫ��%d��Ӧ�Ĳ�ѯ���������±�Ϊ��%d",e,i);
		}
	}
}

bool ListDelete(SqList &L,int i,int &e){
	if(i < 1 || i > L.length){
		return false;
	}
	e = L.data[i-1];
	for(int j = i-1; j < L.length-1; j++){
		L.data[j] = L.data[j+1];
	}
	L.length--;
	return true;
}

int main(){
	SqList L;
	initList(L);
	
	ListInsert(L,2,3);
	for(int i = 0; i<L.length; i++){
		printf("%d %d\n",i,L.data[i]);
	}
	printf("\n");
	
	LocateElem(L,3);
	printf("\n\n");
	
	int e = 0;
	if(ListDelete(L,2,e)){
		printf("�Ѿ�ɾ����2��Ԫ��:%d\n",e);
	}else{
		printf("ɾ��ʧ��\n") ;
	}
	 
}
