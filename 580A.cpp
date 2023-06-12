#include <iostream>
using namespace std;

int32_t main()
{
	long long int n; //a[100005]; //Maximum array size 10^5
	cin >> n;
	long long a[n];

	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	int minimum_length = 1, maximum_length=1; //minimum_length=1 for minimum length like worst case 5 4 3 2 1
	for (int j = 1; j < n; j++)
	{
		if (a[j] >= a[j - 1]) minimum_length++; //Next element is greater than or equal to previous one
		else minimum_length = 1;//Reset , next element is less than previous one,will be 1 always because we will go to the last element

		if (minimum_length > maximum_length)
			maximum_length = minimum_length;
	}
	cout << maximum_length << endl;

	return 0;
}

