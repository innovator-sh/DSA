#include <stdio.h>
#define max 5
int main() {
	
	int i, num, front=-1, rear=-1, choice;
	int q[max];
	
	while(1){
		printf("\n\nQueue Menu : \n");
		printf("1 - Insert\n2 - Delete\n3 - Display\n4 - Exit");
		printf("\nEnter choice : ");
		scanf("%d", &choice);
		
		switch(choice){
		case 1:
			if(rear==max-1){
				printf("\nQueue Overflow!");
			} else {
				printf("\nEnter element : ");
				scanf("%d", &num);
				rear++;
				q[rear] = num;
				
				if(front==-1){
					front++;
				}
			}
			break;
			
		case 2:
			if(front == -1 || front > rear){
				printf("\nQueue Underflow!");
			} else {
				num = q[front];
				front++;
				printf("\nElement removed : %d", num);
			}
			break;
			
		case 3:
			printf("\nElement in Queue :\n");
			for(i=front; i<=rear; i++){
				printf("%d\t", q[i]);
			}
			break;
			
		case 4:
			exit(0);
			break;
			
		default:
			printf("Invalid choice!");
			break;
		}
	}
	
	return 0;
}
