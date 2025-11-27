#include<stdio.h>
int main(){
    int n=0,temp,arr[30];
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);

    printf("Enter the arrey :\n");
    for(int i=0;i<n;i++){
        printf("arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
}
for(int i=0;i<n;i++){
    printf("arr[%d]=%d\n",i,arr[i]);
}
return 0;
}