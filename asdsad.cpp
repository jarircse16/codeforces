#include <bits/stdc++.h>
using namespace std;

const double pi = 4 * atan(1);
const double eps = 1e-6;

inline int dcmp (double x) { if (fabs(x) < eps) return 0; else return x < 0 ? -1 : 1; }

struct Point{
    int n; double pt[15];
    Point(){}
    Point(int n) {this->n=n;}
    void Set(int n){this->n=n;}

    Point operator + (const Point& u) {
        Point x(n);
        for(int i=0;i<n;i++) x.pt[i]=pt[i]+u.pt[i];
        return x;
    }
    Point operator * (const double u) {
        Point x(n);
        for(int i=0;i<n;i++) x.pt[i]=pt[i]*u;
        return x;
    }
    double Distance(const Point& u){
        double Dist=0;
        for(int i=0;i<n;i++) Dist+=(u.pt[i]-pt[i])*(u.pt[i]-pt[i]);
        return Dist;
    }
};
typedef Point Vector;

int r1,r2;
double allow;
Point Point1,Point2;
Vector Velocity1,Velocity2;

double Check(double Time){
    Point pt1=Point1+Velocity1*Time;
    Point pt2=Point2+Velocity2*Time;
    return pt1.Distance(pt2);
}

double MinDistance(){
    double lo=0;
    double hi=100000;

    for(int i=1;i<=100;i++){
        double mid1=(2*lo+hi)/3;
        double mid2=(lo+2*hi)/3;

        double val1=Check(mid1);
        double val2=Check(mid2);

        if(val1<val2) hi=mid2;
        else lo=mid1;
    }
    return lo;
}

double BS(double hi){
    double lo=0;
    for(int i=1;i<=100;i++){
        double mid=(lo+hi)/2;
        if(Check(mid)<=allow*allow) hi=mid;
        else lo=mid;
    }
    return lo;
}

int main(){
    int t;
    scanf("%d",&t);

    for(int cs=1;cs<=t;cs++){
        int n;
        scanf("%d %d %d",&n,&r1,&r2);

        Point1.Set(n); Point2.Set(n);
        Velocity1.Set(n); Velocity2.Set(n);

        for(int i=0;i<n;i++) scanf("%lf",&Point1.pt[i]);
        for(int i=0;i<n;i++) scanf("%lf",&Point2.pt[i]);
        for(int i=0;i<n;i++) scanf("%lf",&Velocity1.pt[i]);
        for(int i=0;i<n;i++) scanf("%lf",&Velocity2.pt[i]);

        double ret=MinDistance();
        allow=abs(r1-r2);
        if(Check(ret)>allow*allow || r1==r2) printf("-1\n");
        else printf("%.10lf\n",BS(ret));
    }
}
