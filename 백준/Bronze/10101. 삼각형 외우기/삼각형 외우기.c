#include <stdio.h>

int main(){
    int ang, ang1, ang2, ang3;
    scanf("%d %d %d", &ang1, &ang2, &ang3);
    ang = ang1+ang2+ang3;
    if(ang == 180){
        if(ang1==ang2 && ang1==ang3){
            printf("Equilateral");
        }
        else if(ang1==ang2 || ang1==ang3 || ang2==ang3){
            printf("Isosceles");
        }
        else{
            printf("Scalene");
        }
    }
    else{
        printf("Error");
    }
    
    return 0;
}
//더 간결하고 깔끔한 코드를 쓸 수 있을것 같다...