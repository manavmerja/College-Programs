#include<stdio.h>
// This program is Writtern By 24DCE074_MANAV_MERJA
int calculate_total(int marks[],int n){
    int total = 0;
    for(int i = 0; i < n; i++){
        total += marks[i];
        }
        return total;
}
float calculate_average(int marks[],int n){
    int total=calculate_total(marks,n);
    return (float)total/n;
}

int find_highest(int marks[],int n){
    int highest = marks[0];
    for(int i = 1; i < n; i++){
        if(marks[i] > highest){
            highest = marks[i];
            }
            }
            return highest;
}

int find_lowest(int marks[],int n){
    int lowest = marks[0];
    for(int i = 1; i < n; i++){
        if(marks[i] < lowest){
            lowest = marks[i];
            }
            }
            return lowest;
}

int main(){
    int n;
    printf("Enter the no of student: ");
    scanf("%d",&n);

    int marks[n];
    printf("Enter student marks:\n");
    for(int i=0;i<n;i++){
        printf("student %d: ",i+1);
        scanf("%d",&marks[i]);
    }
    int total=calculate_total(marks,n);
    float average=calculate_average(marks,n);
    int highest=find_highest(marks,n);
    int lowest = find_lowest(marks,n);

    printf("Total Marks: %d\n",total);
        printf("Averge marks: %f\n",average);
    printf("highest marks: %d\n",highest);
    printf("lowest marks: %d\n",lowest);

    return 0;
}