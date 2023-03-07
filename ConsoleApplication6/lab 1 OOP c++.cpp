#include <iostream>
#include <valarray>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <algorithm>
using namespace std;
int main() 
{
	setlocale(LC_ALL, "Ukr");
	srand(time(NULL));
	const int N = 10;
	double arr[N];
	cout <<"Згенеровані числа: " << endl;
	for (int i = 0; i < N; i++)
	{
		arr[i] = (rand() % 100)/10.;
		cout << arr[i] << " ";
	}
	cout << endl;

	valarray<double> v(arr, N);
	double sum = v.sum();
	double min = v.min();
	double max = v.max();
	double average = 0;
	int numberOfIntegerValues = 0;
	for (int i = 0; i < N; i++)
	{
		if (floor(arr[i]) == arr[i])
		{
			average += arr[i];
			numberOfIntegerValues++;
		}
	}
	average /= numberOfIntegerValues;

	cout << "Сума: " << sum << endl;
	cout << "Мінімальне: " << min << endl;
	cout << "Максимальне: " << max << endl;
	cout << "Середнє значення: " << average << endl;

	return 0;
}