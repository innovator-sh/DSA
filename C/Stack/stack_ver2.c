#include <stdio.h>
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
}