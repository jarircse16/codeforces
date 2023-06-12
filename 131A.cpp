#include <bits/stdc++.h>
using namespace std;
char s[100],t[100];

bool isup1()
{
    int i,len=strlen(s),c=0;

    for(i=0;i<len;i++)
    {
        if(s[i]>64 && s[i]<91)
            c++;
    }
    if(c==len)
        return true;
    else return false;
}

bool isup2()
{
    int i,len=strlen(t),c=0;

    for(i=0;i<len;i++)
    {
        if(t[i]>64 && t[i]<91)
            c++;
    }
    if(c==len)
        return true;
    else return false;
}

void upperoperation1()
{
    int i;
    s[0]=toupper(s[0]);
    for(i=1; i<strlen(s); i++)
    {
        s[i]=tolower(s[i]);
    }
}

void upperoperation2()
{
    int i;
    for(i=0; i<strlen(s); i++)
    {
        s[i]=tolower(s[i]);
    }
}

void upperoperation3()
{

    printf("%s\n",s);
}

int main()
{
    int i,l=0;

    scanf("%s",s);
    for(i=1;i<100;i++)
    {
        t[i-1]=s[i];
    }

   if(isup1()==true)
   {
        upperoperation2();
        printf("%s\n",s);
        return 0;
   }
   if(isup2()==true)
   {
        upperoperation1();
        printf("%s\n",s);
        return 0;
   }
   if((s[0]>64 || s[0]<91) && isup2()==false )
   {
       upperoperation3();
       return 0;
   }
    return 0;
}
