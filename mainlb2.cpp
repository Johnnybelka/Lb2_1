#include <iostream> 

using namespace std;

int sum(int a, int b)
{
	return a + b;
}

int per(int a, int b)
{
	return a * b;
}


int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

void func(int* ar, int s, int(*oot) (int, int), int* rr)
{
	*rr = oot(ar[0], ar[1]);
	for (int i = 2; i < s; i++)
		* rr = oot(*rr, ar[i]);
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int a[] = { 7, 8, 6, 7, 9, 0, 4 };
	int q;
	int result;
	for(int i = 0; i < 7; i++)
		cout << a[i] << " ";
	cout << endl;
	cout << "Если сложить все элементы, нажмите 1" << endl << "Если перемножить все элементы, нажмите 2" << endl << "Если найти максимальный элемент, нажмите 3" << endl;
	cin >> q;
	if (q == 1)
		func(a, 7, sum, &result);
	if (q == 2)
		func(a, 7, per, &result);
	if (q == 3)
		func(a, 7, max, &result);
	cout << result << endl;
	system("pause");
}