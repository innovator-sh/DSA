#include <stdio.h>
int main() {
	
	int i, n, j, item, count=0;
	
	printf("Enter size of array : ");
	scanf("%d", &n);
	
	int a[n+1];
	
	printf("Enter array elements:\n");
	for(i=0; i<n; i++)
	scanf("%d", &a[i]);
	
	printf("Enter number to search:\n");
	scanf("%d", &item);
	
	for(i=0;i<n;i++){
		if(a[i] == item) {
			printf("Element found at position %d", i+1);
			count++;
			break;
		}
	}
	
	if(count == 0){
		printf("Element does not exist.");
	}
	
	return 0;	
}
