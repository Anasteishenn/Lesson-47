﻿#include <iostream>
using namespace std;
void rand_init(int* vector, int size, int bound);
int max(int* vector, int size);
int min(int* vector, int size);
string convert(int* vector, int size);
int main() {
	int size;
	cout << "Input size of array: " << endl;
	cin >> size;
	int* vector = new int [size];

	rand_init(vector,  size,100 );
	 cout<<"Max: "<<max(vector, size) << endl;
	 cout<<"Min: "<<min(vector, size) << endl;
	 cout <<"Vector: "<< convert(vector, size);

	delete[]vector;
	return 0;
}