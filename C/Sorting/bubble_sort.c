#include <stdio.h>
int main() {
	
	int i, j, n, temp;
	
	printf("Enter size of array : ");
	scanf("%d", &n);
	
	int a[n+1];
	
	printf ("Enter array elements :\n");
	for(i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	
	for(i=0; i<n; i++) {
		for(j=0; j<n-1-i; j++) {
			if(a[j] > a[j+1]) {
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	
	printf("\nSorted Elements :\n");
	for(i=0; i<n; i++){
		printf("%d\t", a[i]);
	}
	
	return 0;
}
