#include<stdio.h>
// This Program is Writtern By 24DCE074_MANAV_MERJA
int main(){
    int n,i,j,temp;
    int price[n];
    printf("Enter the number of product: ");
    scanf("%d",&n);

    for( i=0;i<n;i++){
        scanf("%d",&price[i]);
    }

    for( i=0;i<n;i++){
        for( j=i+1;j<n;j++){
            if(price[i]>price[j]){
                temp=price[i];
                price[i]=price[j];
                price[j]=temp;
                }
    }
}
    for( i=0;i<n;i++){
        printf("%d\n",price[i]);
    }
    return 0;
}
