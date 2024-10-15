#include <stdio.h>

#define MAX_SIZE 10

int q[MAX_SIZE];
int front = -1;
int rear = -1;

void enqueue(int item) {
  	if (rear == MAX_SIZE - 1) {
		printf("| Queue overflow |\n");
    	return;
  	}
  	
  	rear++;
  	q[rear] = item;
  	
  	if (front == -1) {
    	front++;
  	}
}

int dequeue() {
  	if (front == -1 || front > rear) {
    	printf("| Queue underflow |\n");
    	return -1;
  	}
  	
  	front++;
  	return q[front - 1];
}
 
int main() {
  	int item;
  
  	while (1) {
		printf("\nEnter 1 - to enqueue | Enter 2 - to dequeue | Enter 3 - to exit\n");
	    printf("Enter Choice : ");
	    int choice;
	    scanf("%d", &choice);
	    
	    switch (choice) {
	    case 1:
	        printf("Enter the item to enqueue: ");
	        scanf("%d", &item);
	        enqueue(item);
	        break;
	        
	    case 2:
	        item = dequeue();
	        if (item != -1) {
	          printf("The item dequeued is %d\n", item);
	        }
	        break;
	        
        case 3:
	        exit(0);
	        break;

	    default:
	        printf("Invalid choice\n");
	        
		}
	}
  
  	return 0;
}