#include<stdio.h>
int main(){
    int a[10],n,swap;
    printf("Enter the arrey element: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap=a[10];
                a[j]=a[j+1];
                a[j+1]=swap;
                }
                }

    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
        }
        return 0;

}