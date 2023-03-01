#include <iostream>
using namespace std;
void rand_init(int* vector, int size, int bound);
int main() {
	int size;
	cout << "Input size of array: " << endl;
	cin >> size;
	int* vector = new int [size];

	rand_init();

	delete[]vector;
	return 0;
}