#include<iostream>
#include<iomanip>

using namespace std;
bool proverka(int item, int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (item == arr[i])
		{
			return true;
		}
	}
	return false;
}
bool proverka1(int item, int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (item == arr[i])
		{
			return true;
		}
	}
	return false;
}
int main()
{
	setlocale(LC_ALL, "Rus");
	
	int n = 0;
	start:
	cout << "Введите номер задания: ";
	cin >> n;
	if (n == 1)
	{
		cout << "Даны два массива: А[M] и B[N] (M и  N вводятся с клавиатуры). Необходимо создать третий массив минимально возможного размера, в котором нужно собрать элементы массива A, которые не включаются в массив B" << endl;
		const int n = 5;
		const int m = 5;
		const int k = 5;
		int A[n] = { 1,2,3,4,5 };
		int B[m] = { 1,2,6,7,8 };
		int C[k];
		int count = 0;
		for (int i = 0; i < n; i++)
		{
			cout << setw(3) << A[i];
		}
		cout << endl;
		for (int i = 0; i < m; i++)
		{
			cout << setw(3) << B[i];
		}
		cout << endl;
		for (int i = 0; i < n; i++)
		{
			if (proverka(A[i], B, n) == false)
			{
				C[count] = A[i];
				count++;
			}
		}
		cout << endl;
		for (int i = 0; i < count; i++)
		{
			cout << setw(3) << C[i];
		}
		cout << endl;
	}

	else if (n == 2)
	{
		cout << "Даны два массива: А[M] и B[N] (M и  N вводятся с клавиатуры). Необходимо создать третий массив минимально возможного размера, в котором нужно собрать общие элементы массивов A и B" << endl;
		const int n = 5;
		const int m = 5;
		const int k = 5;
		int A[n] = { 1,2,3,4,5 };
		int B[m] = { 1,2,6,7,8 };
		int C[k];
		int count = 0;
		for (int i = 0; i < n; i++)
		{
			cout << setw(3) << A[i];
		}
		cout << endl;
		for (int i = 0; i < m; i++)
		{
			cout << setw(3) << B[i];
		}
		cout << endl;
		for (int i = 0; i < n; i++)
		{
			if (proverka1(A[i], B, n))
			{
				C[count] = A[i];
				count++;
			}
		}
		cout << endl;
		for (int i = 0; i < count; i++)
		{
			cout << setw(3) << C[i];
		}
		cout << endl;



	}

	else if (n == 3)
	{
		cout << "Исключить повторяющиеся элементы. " << endl;

		int a[] = { 5,4,2,1,6 };
		int b[] = { 4,2,3,8,9 };

		int n = 5, m = 5;

		int k = 0;
		for (int i = 0; i < n; i++)
		{
			cout << setw(3) << a[i];
		}
		cout << endl;
		for (int i = 0; i < m; i++)
		{
			cout << setw(3) << b[i];
		}
		cout << endl;
		for (int i = 0; i < n; i++)
		{
			int sum = 0;
			for (int j = 0; j < m; j++)
			{
				if (a[i] == b[j]) sum++;
			}
			if (sum != 0) k++;
		}

		int k1 = 0;
		for (int i = 0; i < m; i++)
		{
			int sum = 0;
			for (int j = 0; j < n; j++)
			{
				if (b[i] == a[j]) sum++;
			}
			if (sum != 0)
				k1++;
		}

		int *c;
		c = new int[k + k1];
		int h = 0;
		for (int i = 0; i < n; i++)
		{
			int sum = 0;
			for (int j = 0; j < m; j++)
			{
				if (a[i] == b[j]) sum++;
			}
			if (sum != 0)
				c[h++] = a[i];
		}
		for (int i = 0; i < m; i++)
		{
			int sum = 0;
			for (int j = 0; j < n; j++)
			{
				if (b[i] == a[j]) sum++;
			}
			if (sum != 0)
				c[h++] = b[i];
		}
		cout << endl;
		for (int i = 0; i < k + k1; i++)
		{
			cout << setw(3) << c[i];
		}
		cout << endl;
		delete[] c;
	}
	goto start;
	system("pause");
	return 0;
}