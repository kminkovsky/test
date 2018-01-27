#include <stdio.h>

int main()
{
 int k, n, m;
 scanf("%d", &k);
 int dupa;
 int wynik;
 for(int i=0; i<k; i++)
 {
 	scanf("%d %d\n", &n, &m);
 	wynik = f(n,m);
 	printf("f(%d,%d)=%d\n", n, m, wynik);
 }
return 0;
}
	int f(int n, int m)
	{
		if(n != 0 && m==0)
	{
		return n;
	}
	if(n == 0 && m!=0)
	{
	return m;
	}
	if(n >= 0 && m>=0 && (m != 0 && n!= 0))
	{
		int odpowiedz = f((n-1), m) + f(n, m-1) + f(n-1, m-1);
		return odpowiedz;
	}
	if(n==0 && m == 0)
	{
		return n;
	}

	}

