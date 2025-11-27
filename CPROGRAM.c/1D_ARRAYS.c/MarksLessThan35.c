#include<stdio.h>
int main(){
    int marks[5]={45,65,85,95,10};
    for(int i=0;i<=5;i++){
        if(marks[i]<=35){
        printf("%d\n",marks[i]);
    }
    
}
return 0;
}