//15. Missing number in array [1 to n]
#include <stdio.h>
#include<stdlib.h>
int main() {
    int n,sum=0,originalsum,missingnum;

    printf("Enter number of elements: ");
    scanf("%d",&n);
    int *a=(int *)malloc(n * sizeof(int));
    printf("Enter %d elements:\n",n);
    for (int j=0;j<n;j++){
        scanf("%d",&a[j]);
        sum+=a[j];
    }

    originalsum=(n+1)*(n+2)/2;
    missingnum=originalsum-sum;
    printf("Missing Number is: %d\n",missingnum);
    return 0;
}
