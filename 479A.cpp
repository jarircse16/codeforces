

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[3],i,x,y,b,c,d;
    for(i=0;i<3;i++)
        scanf("%d",&a[i]);
    if(a[0]==1&&a[1]==1&&a[2]==1){
        printf("3\n");
    }
    else if(a[0]==1&&a[2]==1){
        printf("%d\n",2+a[1]);
    }
    else if(a[0]==1){
        printf("%d\n",(a[0]+(a[1]))*a[2]);
    }
    else if(a[1]==1){
            x=a[0]+a[1];
            y=a[1]+a[2];
            b=x*a[2];
            c=a[0]*y;
            d=max(b,c);
            printf("%d\n",d);
    }
    else if(a[2]==1){
        printf("%d\n",a[0]*((a[1])+a[2]));
    }
    else
        printf("%d\n",a[0]*a[1]*a[2]);
    return 0;
}
