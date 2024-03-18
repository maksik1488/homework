
using namespace std;
#include <iostream>

int main()
{
	int min, max;
	const int A = 10;
	int array[A];
	cin >> min >> max;
	cout << "min and max: ";
	setlocale(LC_ALL, "rus");
	bool flag;
	srand(time(NULL));
	for (int i = 0; i < A; i++) {
		int c = min + rand() % (max - min - 1);
		array[i] = c;
		cout << array[i] << " ";

	}
	for (int j = 0; j < A; j++) {
		flag = true;
		for (int i = 0; i < A - 1 - j; i++) {
			if (array[i] > array[i + 1]) {
				swap(array[i], array[i + 1]);
				flag = false;
			}

		}
		if (flag) break;
	}
	cout << endl;
	for (int i = 0; i < A; i++) {
		cout << array[i] << " ";
	}
}