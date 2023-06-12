#include<stdio.h>
#include <string.h>

struct student{
    char name[30];
    int roll;
    float cgpa;
};

int main()
{
    int i,j,r;
    struct student st[100];
    printf("Enter Records of 10 students");
    for(i=0;i<10;i++){
    printf("\nEnter Name: ");
    scanf("%s",&st[i].name);
    printf("\nEnter Roll: ");
    scanf("%d",&st[i].roll);
    printf("\nEnter CGPA: ");
    scanf("%f",&st[i].cgpa);
}

    printf("Enter Roll number to search: ");
    scanf("%d",&r);
    for(j=0;j<10;j++){
        if((st[j].roll)==r){
            printf("Name: %s",st[j].name);
            printf("\n");
            printf("Roll: %d",st[j].roll);
            printf("\n");
            printf("CGPA: %f",st[j].cgpa);
}

    }
    return 0;
}

