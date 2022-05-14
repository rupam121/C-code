#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5
int queue[size],f=-1,r=-1; 
void rear();
void front();
void show();
 
int main() { 
	int ch;
	//clrscr();
	printf("1.INSERT\n");
	printf("2.DELETE\n");
	printf("3.SHOW\n");
	printf("4.EXIT\n");
	while(1) {
		printf("\nEnter Choice: ");
		scanf("%d",&ch);
		switch(ch) {
			case 1:
				rear();
				break;
			case 2:
				front();
				break;
			case 3:
				show();
				break;
			case 4:
				exit(0);
				break;

			default:
				printf("Invalid Option");

		}
	}
	return 0;
}
 
void rear() {
	int item;
	if(r==size-1) {
		printf("Queue is Full");
	} else {
		if(f==-1) {
			f=0;
		}
		printf("Insert element in queue: ");
		scanf("%d",&item);
		r=r+1;
		queue[r]=item;
	}
}
 
void front() { 
	if(f==-1) { 
		printf("Queue is empty"); 
	} else { 
		printf("DELETE %d",queue[f]);
		f=f+1;
	} 
}
 
void show() { 
	int i;
	if(f==-1) { 
		printf("Queue is empty");
	} 
 
	else { 
		printf("Queue Element: ");
		for(int i=f; i<=r; i++) {
			printf("%d ",queue[i]);
		} 
		//f=f+1;
	} 
} 





