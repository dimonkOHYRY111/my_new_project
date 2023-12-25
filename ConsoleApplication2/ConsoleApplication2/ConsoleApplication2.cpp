#include <iostream>
using namespace std;
int main() {
	// Завдання 1 
	int num1, num2;
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	if (num1 > num2)
		cout << "your number: " << num1 << endl;
	else
		cout << "your numbers: " << num1 << ", " << num2 << endl;
	// Завдання 2
	int a, b, c;
	cout << "enter a: ";
	cin >> a;
	cout << "enter b: ";
	cin >> b;
	cout << "enter c: ";
	cin >> c;
	int min;
	(a < b) ? ((a < c) ? min = a : min = c) : ((b < c) ? min = b : min = c);
	cout << "min number is " << min << endl;
	// Завдання 3
	int size;
	cout << "enter array size ";
	cin >> size;
	int* array = new int[size];
	for (int i = 0; i < size; i++) {
		cout << "enter " << i + 1 << " number: ";
		cin >> array[i];
	}
	for (int i = 0; i < size; i++) {
		if (array[i] % 2 == 0)
			array[i] = 0;
	}
	cout << "your processed array: " << endl;
	for (int i = 0; i < size; i++)
		cout << "element " << i + 1 << ": " << array[i] << endl;
	//Завдання 4
	int size2;
		int sum = 0;
	cout << "enter array size ";
	cin >> size2;
	int* array2 = new int[size2];
	for (int i = 0; i < size2; i++) {
		cout << "enter " << i + 1 << " number: ";
		cin >> array2[i];
	}
	for (int i = 0; i < size2; i++)
		sum += array2[i];
	cout << "sum: " << sum << endl;
	//Завдання 5
	int size3;
	cout << "enter array size ";
	cin >> size3;
	int* array3 = new int[size3];
	for (int i = 0; i < size3; i++) {
		cout << "enter " << i + 1 << " number: ";
		cin >> array3[i];
	}
	for (int i = size3 - 1; i >= 0; i--)
		cout << "element " << i + 1 << ": " << array3[i] << endl;
	//Завдання 6
	int size4;
	cout << "enter array size ";
	cin >> size4; 
	int* array4 = new int[size4]; 
	for (int i = 0; i < size4; i++) {
		cout << "enter " << i + 1 << " number: ";
		cin >> array4[i];
	} 
	int min2 = 0, max2 = 0;
	for (int i = 0; i < size4; i++) {
		if (min2 > array4[i])
			min2 = array4[i];
		else if (max2 < array4[i])
			max2 = array4[i];
		else {
			min2 = min2;
			max2 = max2;
		}
	}
	cout << "min: " << min2 << endl;
	cout << "max: " << max2 << endl;
	return 0;
}