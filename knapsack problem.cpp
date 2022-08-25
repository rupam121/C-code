
// KNAPSHAK PROBLEM PRATICAL

#include<stdio.h>
//#include<stdlib.h>
#include<conio.h>
# define MAX 10
int heap_size;
struct item {
	float value,weight;
};
void FKNAPSACK(struct item[],float,int);
void HEAP_SORT(struct item[],int);
void BUILD_MIN_HEAP(struct item[],int);
void MIN_HEAPIFY(struct item[],int);
int LEFT(int);
int RIGHT(int);
void swap(struct item*x,struct item*y);

int main() {
	struct item it[MAX];
	float W;
	int i,size;
//	clrscr();
	printf("Enter the no of items:");
	scanf("%d",&size);
	for(i=0; i<size; i++) {
		printf("Enter the value and weight of item no%d:",i+1);
		scanf("%f%f",&it[i].value,&it[i].weight);
	}
	printf("Enter the capacity of knapsack:");
	scanf("%f",&W);
	FKNAPSACK(it,W,size);
}
void FKNAPSACK(struct item it[],float W,int size) {
	int i;
	float x[MAX],Weight;
	HEAP_SORT(it,size);
	for(i=0; i<size; i++)
		x[i]=0;
	Weight=0;
	i=0;
	while(Weight+it[i].weight<=W) {
		x[i]=1;
		Weight=Weight+it[i].weight;
		i++;
	}
	x[i]=(W-Weight)/it[i].weight;
	printf("ItemNo\tValue\t\tWeight\t\tAmount to be taken\n");
	for(i=0; i<size; i++) {
		printf("%d\t%f\t%f\t%f\n",i+1,it[i].value,it[i].weight,x[i]);
	}
}
void HEAP_SORT(struct item it[],int size) {
	int i;
	BUILD_MIN_HEAP(it,size);
	for(i=size-1; i>0; i--) {
		swap(&it[i],&it[0]);
		heap_size--;
		MIN_HEAPIFY(it,0);
	}
}
void BUILD_MIN_HEAP(struct item it[],int size) {
	int i;
	heap_size=size-1;
	for(i=(size-1)/2; i>=0; i--)
		MIN_HEAPIFY(it,i);
}
void MIN_HEAPIFY(struct item it[],int i) {
	int l,r,largest;
	l=LEFT(i);
	r=RIGHT(i);
	if(l<=heap_size&&(it[l].value/it[l].weight)<(it[i].value/it[i].weight))
		largest=l;
	else
		largest=i;
	if(r<=heap_size&&(it[r].value/it[r].weight)<(it[largest].value/it[largest].weight))
		largest=r;
	if(largest!=i) {
		swap(&it[i],&it[largest]);
		MIN_HEAPIFY(it,largest);
	}
}
int LEFT(int i) {
	return 2*i+1;
}
int RIGHT(int i) {
	return 2*i+2;
}
void swap(struct item*x,struct item*y) {
	struct item t;
	t.value=x->value;
	t.weight=x->weight;
	x->value=y->value;
	x->weight=y->weight;
	y->value=t.value;
	y->weight=t.weight;
}


