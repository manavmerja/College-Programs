#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,root_1,root_2,discriminant;
    printf("Enter the coefficients of the quadratic equation (ax^2+bx+c=0):\n");
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of c: ");
    scanf("%d", &c);
    discriminant = (b*b) - 4*a*c;
    if(discriminant>0){
        root_1 = (-b + sqrt(discriminant)) /(2*a);
        root_2 = (-b - sqrt(discriminant)) /(2*a);
        printf("root_1 = %d\n", root_1);
        printf("root_2 = %d\n", root_2);
    }
    else if(discriminant==0){
        root_1 = -b/(2*a);
        printf("The number is equal\n");
}
else{
    printf("The roots are imaginary\n");
}
return 0;
}