#include <stdio.h>

int main() {
	int i, n, target, count=0, mid, low, high;
	
	printf("Enter size of array : ");
	scanf("%d", &n);
	
	int a[n+1];
	
	printf("Enter elements in the Array :\n");
	for(i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	
	printf("Enter target element : ");
	scanf("%d", &target);
	
	low=0;
	high=n-1;
	
	while(low<=high) {
		
		mid=(low+high)/2;
		
		if(a[mid] == target) {
			printf("Element found at position %d", mid+1);
			count++;
			break;
		} else if(a[mid] < target) {
			low=mid+1;
		} else {
			high=mid-1;
		}
	}
	
	if(count==0) {
		printf("Element does not exist!");
	}
	
	return 0;
}
