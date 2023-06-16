
int lognpower(int a, int n)
{
	int r=1;
	while(n)
	{
		if(n%2==1) r=r*a;
		a=a*a;
		n=n/2;
	}
	return r;
}
