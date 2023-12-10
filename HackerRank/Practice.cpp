#include<stdio.h>
#include<conio.h>
#include<math.h>
void init(int**& a, int& m)
{
	a = new int*[m];
	for (int i = 0; i < m; i++)
	{
		a[i] = new int[m];
	}
}
void Output(int** &a, int m)
{
	printf("Mang 2 chieu: \n");
	for (int i = 0; i < m; i++)
	{
		printf("\t");
		for (int j = 0; j < m; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}
int CSC(int n)
{
	if (n == 1)
	{
		return 1;
	}
	return 2 + CSC(n - 1);
}
void setBoundary(int **&a, int result, int m)
{
	int count = 0;
	int loop = m;
	for (int k = 0; k < loop; k++)
	{
		for (int i = count; i < result; i++)
		{
			for (int j = count; j < result; j++)
			{
				a[i][j] = m;
			}
		}
		count++, result--,m--;
	}
}

int main()
{
	int m;
	int **a = NULL;
	scanf("%d", &m);
	int result = CSC(m);

	init(a, result);
	setBoundary(a, result, m);
	Output(a, result);
	getch();
}

