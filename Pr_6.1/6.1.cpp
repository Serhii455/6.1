#include <iostream>
#include <cstdlib>

using namespace std;

void Array_B(int* b, const int size)
{
	for (int index = 0; index < size; index++)
		b[index] = rand() % (14 - (-10)) + (-10);
}


void Print(int* b, const int size)
{
	for (int i = 0; i < size; i++)
		cout << "     " << b[i];
	cout << endl;
}


int SUM(int* b, const int size)
{
	int S = 0;
	for (int index = 0; index < size; index++)
	{
		if (index > 0 || index % 2 == 0)
			S += b[index];
	}

	return S;
}


int NUMEROSITY(const int* b, const int size)
{
	int count = 0;
	for (int index = 0; index < size; index++)
	{
		if (b[index] > 0 || index % 2 == 0)
		{
			count++;
		}
	}
	return count;
}




void REPLACE(int* a, const int size)
{
	for (int index = 0; index < size; index++) {
		if (a[index] > 0 || index % 2 == 0)
		{
			a[index] = 0;
		}
	}
}



int main()
{
	//srand((unsigned)time(NULL));
	const int n = 24;
	int b[n];

	

	Array_B(b, n);

	cout << "Unmodified ";

	Print(b, n);

	int sum = SUM(b, n);

	int count = NUMEROSITY(b, n);
	
	REPLACE(b, n);

	cout << "Modified ";

	Print(b, n);

	cout << "Number of elements " << count << endl;
	cout << "Sum of elements " << sum << endl;

	return 0;

}

