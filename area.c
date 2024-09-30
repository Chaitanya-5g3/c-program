#include <stdio.h>
#include<math.h>
int main() {
    int a,b,c;
    float s,Area;
    printf("Enter the values of a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/(2);
    Area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle is:%f",Area);
    return 0;
}
