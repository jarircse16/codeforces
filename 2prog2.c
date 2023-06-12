#include<stdio.h>
#include <string.h>

struct student{
    int roll;
    int s1;
    int s2;
    int s3;

};

int main()
{
    int i,j,r,x,y,z,p,q,n;
    struct student st[100];
    printf("Enter Records of 30 students");
    for(i=0;i<30;i++){
    printf("\nEnter Roll: ");
    scanf("%d",&st[i].roll);
    printf("\nEnter Marks of Subject 1: ");
    scanf("%d",&st[i].s1);
    printf("\nEnter Marks of Subject 2: ");
    scanf("%d",&st[i].s2);
    printf("\nEnter Marks of Subject 3: ");
    scanf("%d",&st[i].s3);
}

    int sum[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    for(j=0;j<30;j++)
        sum[j]=sum[j]+ (st[j].s1+st[j].s2+st[j].s3);
    for(r=0;r<30;r++)
        printf("Roll: %d---Total Marks: %d\n",st[r].roll,sum[r]);

    int hms1=st[0].s1,hl1=st[0].roll;
    for(x=1;x<30;x++)
        if(st[x].s1>hms1)
        {
            hms1=st[x].s1;
            hl1=st[x].roll;
        }

    printf("Highest Mark in subject 1 is: %d and Roll is: %d \n",hms1,hl1);

    int hms2=st[0].s2,hl2=st[0].roll;
    for(y=1;y<30;y++)
        if(st[y].s2>hms2){
            hms2=st[y].s2;
            hl2=st[y].roll;
        }
    printf("Highest Mark in subject 2 is: %d and Roll is: %d\n",hms2,hl2);

    int hms3=st[0].s3,hl3=st[0].roll;
    for(z=1;z<30;z++)
        if(st[z].s3>hms3){
            hms3=st[z].s3;
            hl3=st[z].roll;
        }
    printf("Highest Mark in subject 3 is: %d and Roll is: %d\n",hms3,hl3);

    int hst=sum[0];
    for(p=1;p<30;p++)
        if(sum[p]>hst)
            hst=sum[p];

    for(q=1;q<30;q++)
        if(sum[q]==hst)
        {
            n=q;
            break;
        }
    printf("The student with roll %d got highest mark",st[n].roll);
    return 0;
}



