#include <iostream>
#include <vector>
using namespace std;
int main() {
	// Завдання 1
	int array1[5][5];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << "enter element [" << i + 1 << "] [" << j + 1 << "] ";
			cin >> array1[i][j];
		}
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (array1[i][j] % 3 == 0)
				array1[i][j] = 3;
		}
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
			cout << "[ " << array1[i][j] << "] " << " ";
		cout << endl;
	}
	// Завдання 2
	int rows2, cols2;
	cout << "enter size ";
	cin >> rows2;
	cols2 = rows2;
	if (rows2 > 10)
		cout << "size cannot be larger than 10 ";
	else {
		vector<vector<int>> array2(rows2, vector<int>(cols2));
		for (int i = 0; i < rows2; i++) {
			for (int j = 0; j < cols2; j++) {
				cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
				cin >> array2[i][j];
			}
		}
		vector<int> products2(rows2, 1);
		for (int i = 0; i < rows2; ++i) {
			for (int j = 0; j < cols2; ++j) {
				products2[i] *= array2[i][j];
			}
		}
		cout << "products: ";
		for (int i = 0; i < rows2; ++i) {
			cout << "[" << products2[i] << "] ";
		}
	}
	// Завдання 3
	const int rows3 = 4;
	const int cols3 = 10;
	int array3[rows3][cols3];
	for (int i = 0; i < rows3; i++) {
		for (int j = 0; j < cols3; j++) {
			std::cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
			std::cin >> array3[i][j];
		}
	}
	int k, sum3 = 0, product3 = 1;
	cout << "Enter k: ";
	cin >> k;
	for (int i = 0; i < rows3; i++) {
		sum3 += array3[i][k];
		product3 *= array3[i][k];
	}
	cout << "sum: " << sum3 << endl;
	cout << "product: " << product3 << endl;
	//Завдання 4
	int rows4, cols4;
	cout << "enter rows ";
	cin >> rows4;
	cout << "enter cols ";
	cin >> cols4;
	vector<int> array4(rows4 * cols4);
	for (int i = 0; i < rows4 * cols4; i++){
		cout << "Enter [" << i + 1 << "] element: ";
		cin >> array4[i];
	}
	vector<vector<int>> matrix4(rows4, vector<int>(cols4, 0));
	int a4 = 1;
	for (int i = 0; i < cols4; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < cols4; j++)
				matrix4[i][j] = a4++;
		}
		else {
			for (int j = cols4 - 1; j >= 0; --j)
				matrix4[i][j] = a4++;
		}
	}
	cout << "your matrix: " << endl;
	for (int i = 0; i < rows4; ++i) {
		for (int j = 0; j < cols4; ++j)
			cout << "[" << matrix4[i][j] << "] ";
		cout << endl;
	}
	return 0;
}