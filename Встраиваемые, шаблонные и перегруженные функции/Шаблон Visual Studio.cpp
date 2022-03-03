#include <iostream>
using namespace std;

int average2Numbers(int num1, int num2) {
	int sum = 0;
	sum = num1 + num2;
	cout << "Сумма = " << sum << "\n";
	return sum - num2;
}

int maxOf3Elements(int a, int b) {
	return a > b ? a : b;
}
float maxOf3Elements(float a, float b) {
	return a > b ? a : b;
}
double maxOf3Elements(double a, double b) {
	return a > b ? a : b;
}
int maxOf3Elements(int a, int b, int c) {
	return maxOf3Elements(a, maxOf3Elements(b, c));
}
float maxOf3Elements(float a, float b, float c) {
	return maxOf3Elements(a, maxOf3Elements(b, c));
}
double maxOf3Elements(double a, double b, double c) {
	return maxOf3Elements(a, maxOf3Elements(b, c));
}

template <typename T> T maxElementArr(T* arr, size_t length) {
	if (length == 0) throw length_error("плохой размер");
	T* res = &arr[0];
	for (int i = 1; i < length; ++i) {
		if (arr[i] > *res) res = &arr[i];
	}
	return *res;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	// Задача 1
	cout << "Задача 1.\nВведите N и M: ";
	cin >> n >> m;
	cout << average2Numbers(n, m) << "\n\n";

	// Задача 2
	cout << "Задача 2.\n";
	float fa = 1, fb = 2, fc = 3;
	cout << maxOf3Elements(fa, fb, fc) << "\n";

	double da = 3, db = 1, dc = 2;
	cout << maxOf3Elements(da, db, dc) << "\n";

	int ia = 2, ib = 3, ic = 1;
	cout << maxOf3Elements(ia, ib, ic) << "\n\n";

	// Задача 3
	cout << "Задача 3.\n";
	int z3[3] = { 1, 3, -5 };
	double d3[3] = { 12.3, 2.1, 4.8 };

	cout << maxElementArr(z3, 3) << "\n";
	cout << maxElementArr(d3, 3) << "\n\n";
	return 0;
}