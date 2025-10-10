//1. Find the maximum and minimum element in an array
#include<stdio.h>
#include<limits.h>
int main(){
    int arr[100],n;
    printf("Enter number of Elements in the array : ");
    scanf("%d",&n);
    printf("Enter %d Elements in the array :\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("Maximum element = %d\n",max);
    printf("Minimum element = %d\n",min);
}
