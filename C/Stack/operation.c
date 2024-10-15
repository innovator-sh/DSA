#include <stdio.h>
int main(){
	
	int i, n, choice, max=20, top=-1;
	int stack[max];
	
	while(1){
		printf("\nStack Menu:\n");
		printf("1 - Push\n2 - Pop\n3 - Display elements\n4 - Exit\n");
		printf("Enter your choice : ");
		scanf("%d", &choice);
		
		switch(choice){
		case 1:
			if(top == max-1) {
				printf("Stack Overflow!");
			} else {
				
				printf("Enter element to be inserted : ");
				scanf("%d", &n);
				top=top+1;
				stack[top] = n;
			}
			break;
			
		case 2:
			if(top == -1){
				printf("Stack Underflow!");
			} else {
				n = stack[top];
				top=top-1;
				printf("Top most element is popped out.");
			}
			break;
			
		case 3:
			printf("\nElement in Stack :\n");
			for(i=0; i<=top; i++){
				printf("%d\t", stack[i]);
			}
			break;
			
		case 4:
			exit (0);
			break;
			
		default:
			printf("Invalid input!");
			break;
			
		}
			
	}
	
	return 0;
}