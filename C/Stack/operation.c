#include <stdio.h>
#define max 20
int main() {
	
	int front=-1, rear=-1, ch, i, num;
	int q[max];
	
	while(1){
		printf("\n\nQueue Menu : \n");
		printf("1 - Insert\n2 - Delete\n3 - Display\n4 - Exit\n");
		printf("Enter choice : ");
		scanf("%d", &ch);
		
		switch(ch){
		case 1:
			if(rear==max-1){
				printf("\nQueue overflow!");
			} else {
				printf("\nEnter number to insert : ");
				scanf("%d", &num);
				rear=rear+1;
				q[rear] = num;
				
				if (front == -1) {
			    	front=0;
			  	}
			}
			break;
			
		case 2:
			if(front==-1 || front > rear){
				printf("\nQueue Underflow!");
			} else {
				num = q[front];
				front=front+1;
				printf("\nElement popped out : %d", num);
			}
			break;
			
		case 3:
			printf("\nElements in queue :\n");
			for(i=front; i<=rear; i++){
				printf("%d\t", q[i]);
			}
			break;
			
		case 4:
			exit(0);
			break;
			
		default:
			printf("\nInvalid choice.");
			break;
		}
	}
	
	return 0;
}
/*#include <stdio.h>
int main() {
	
	int max=20;
	int ch, i, val, top=-1, c;
	int stack[max];
	
	//do {
	while(1){

		printf("\nStack menu:\n");
		printf("1 - Push\n2 - Pop\n3 - Display Stack Elements\n4 - Exit");
		printf("\nEnter your choice: ");
		scanf("%d", &ch);
		
		switch(ch) {
		case 1: 
			if(top==max-1) {
				printf("\nStack full");
			} else {
				printf("\nEnter elements to be pushed: ");
				scanf("%d", &val);
				top=top+1;
				stack[top] = val;
			}
			break;
					
		case 2: 
			if(top == -1) {
				printf("Stack empty");					
			} else {
				val=stack[top];
				top--;
				printf("Element popped out.");
			}
			break;
			
		case 3:
			for(i=0; i<=top; i++){
				printf("%d\t", stack[i]);
			}
			break;
			
		case 4:
			exit(0);
			break;
			
		default: 
			printf("Invalid data");
			break;
		}
		
//		printf("\n\nContinue?\nYes - 1 | No - 0 : ");
//		scanf("%d", &c);
		
	} //while (c==1);
	
	return 0;
}*/