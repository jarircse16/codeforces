#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int student_count, puzzle_count,minimum_difference = 0, ans;
    cin >> student_count >> puzzle_count;
    int arr[puzzle_count];
    for(int i = 0; i < puzzle_count; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + puzzle_count);
    minimum_difference = arr[puzzle_count-1] - arr[0];
    for(int i = student_count; i <= puzzle_count; i++)
    {
        ans = arr[i-1] - arr[i-student_count];
        ans = abs(ans);
        minimum_difference = min(minimum_difference, ans);
    }
    cout << minimum_difference;
}

