#include <stdio.h>
int main() {
    int i, j, n, min, temp;
    
    printf("Enter size of array : ");
    scanf("%d", &n);
    
    int a[n+1];
    
    printf("Enter array elements :\n");
    for(i=0;i<n; i++) {
    	scanf("%d", &a[i]);
	}
	
	for(i=0; i<n-1; i++) {
		min=i;
		for(j=i+1; j<n; j++){
			if(a[j] > a[min]) {
				min=j;
			}
			temp=a[j];
			a[j] = a[min];
			a[min]=temp;
		}
	}
	
	printf("\nElements in array :\n");
	for(i=0; i<n; i++){
		printf("%d\t", a[i]);
	}

    return 0;

}
