#include"main.h"
#include"util.h"
#include"logic.h"
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