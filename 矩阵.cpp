#include<iostream>
using namespace std;
int main()
{
	int m,n, i, j, k;
	cin >>m>>n;
	int r[200][200],a[200][200],t[2000][2000];


	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
            cin>>r[i][j];//为结果矩阵赋值
			a[i][j]= r[i][j];//为第二个矩阵赋值
		}
	}

	int sum;
	//计算结果矩阵内部的值
	for (int l = 1; l <n; l++)//循环计算的次数
	{
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < m; j++)
			{
				sum = 0;
				for (k = 0; k < m; k++)
				{
					sum += r[i][k] * a[k][j];
				}

				t[i][j] = sum;//最终算出的结果赋给结果矩阵c
			}
		}

		//计算完一次后复制数组
		for (int ii = 0; ii < m; ii++)
		{
			for (int jj = 0; jj < m; jj++)
			{
				r[ii][jj] = t[ii][jj];

			}
		}
	}


	//显示结果矩阵
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (j == m - 1)
				cout << r[i][j] << endl;


			else
				cout << r[i][j] << " ";
		}
	}


}
