#include<stdio.h>
#include<math.h>
// This Program is writtern by 24DCE074_MANAV_MERJA
int tringle(float a,float b,float c){
    return(a+b>c) && (a+c>b) && (b+c>a);
}

float calculate_area(float a,float b,float c){
    float s=(a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

int main(){
    float a,b,c;
    printf("Enter the three sides of the triangle:\n");
    scanf("%f %f %f",&a,&b,&c);

    if(  tringle(a, b, c)){
        float area=calculate_area(a,b,c);
        printf("The area of the triangle is: %f\n",area);
    }
    else{
        printf("This is not a triangle.\n");
    }
    return 0;
}