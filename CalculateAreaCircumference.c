#include<stdio.h>
#include<math.h>


int radius;
void CalculateA(int *area) {

    (*area) = 3.14 * (radius*radius);
    printf("\t The Area is: %d\n",*area);

}
void Circumference(int*circum) {

    (*circum) = 2 * 3.14 * radius;
    printf("\n\t The Circumference is: %d\n",*circum);
}
int main() {
    int*area, *circum;
    printf("Enter Radius: \n");
    scanf("%d",&radius);

    CalculateA(&radius);
    Circumference(&radius);

    return 0;

}


