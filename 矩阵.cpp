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
            cin>>r[i][j];//Ϊ�������ֵ
			a[i][j]= r[i][j];//Ϊ�ڶ�������ֵ
		}
	}

	int sum;
	//�����������ڲ���ֵ
	for (int l = 1; l <n; l++)//ѭ������Ĵ���
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

				t[i][j] = sum;//��������Ľ�������������c
			}
		}

		//������һ�κ�������
		for (int ii = 0; ii < m; ii++)
		{
			for (int jj = 0; jj < m; jj++)
			{
				r[ii][jj] = t[ii][jj];

			}
		}
	}


	//��ʾ�������
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
