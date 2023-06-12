#include<bits/stdc++.h>
using namespace std;
int maxx;
int height(int* arr, int n)
{
    int k= *max_element(arr, arr + n);

    for(int i = 0; i< n; i++)
        arr[arr[i]%k] += k;
    for (int i = 0; i< n; i++)

    maxx = arr[0];
    int result = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxx)
        {
            maxx = arr[i];
            result = i;
        }
    }
    return result;
}

int main()
{
    int n;
    cin>>n;
    int l[n];
    set<int>s;
    for(int i=0;i<n;i++)
    {
        cin>>l[i];
        s.insert(l[i]);
    }
    int d=n-s.size();
    int h=height(l,n);
    cout<<h<<" "; //height of largest tower
    cout<<s.size()<<endl; //total number of towers
}
