#include <stdio.h>
int main() {
    int i, j, n, key;

    printf("Enter size of array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements in array :\n");
    for(i=0; i<n; i++)
    scanf("%d", &a[i]);

    for(j=1; j<n; j++ ) {
        key = a[j];
        i=j-1;
        while(i>-1 && key <= a[i]){
            a[i+1] = a[i];
            i=i-1;
        }
        a[i+1] = key;
    }

    printf("\nSorted array :\n");
    for(i=0; i<n; i++)
    printf("%d\t", a[i]);

    return 0;

}
