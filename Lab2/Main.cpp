#include <iostream>
#include "AssemblerDummy.h"
#include "SortFunctions.h"

void func()
{
    std::cout << "Hello, world! It's me again!\n";
}

void TestAssemblerDummy()
{
	using namespace std;

	int a = 7;
	int b = 2;

	cout << boolalpha;

	//cout << "Sum: " << AssemblerDummy::Add(a, b) << '\n';
	//cout << "Substract: " << AssemblerDummy::Substract(a, b) << '\n';
	//cout << "Multiply: " << AssemblerDummy::Multiply(a, b) << '\n';
	//cout << "Divide: " << AssemblerDummy::Divide(a, b) << '\n';

	//cout << "Not: " << AssemblerDummy::Not(a) << '\n';
	//cout << "And: " << AssemblerDummy::And(a, b) << '\n';
	//cout << "Or: " << AssemblerDummy::Or(a, b) << '\n';
	//cout << "Xor: " << AssemblerDummy::Xor(a, b) << '\n';

	//cout << "Equal: " << AssemblerDummy::Eq(a, b) << '\n';
	//cout << "Not equal: " << AssemblerDummy::Neq(a, b) << '\n';

	//cout << "Less than: " << AssemblerDummy::Lt(a, b) << '\n';
	//cout << "Less equal: " << AssemblerDummy::Le(a, b) << '\n';
	//cout << "Greater than: " << AssemblerDummy::Gt(a, b) << '\n';
	//cout << "Greater equal: " << AssemblerDummy::Ge(a, b) << '\n';

	//cout << "Shift left: " << AssemblerDummy::Shl(1, 3) << '\n';
	//cout << "Shift right: " << AssemblerDummy::Shr(4, 1) << '\n';
	//cout << "Loop shift right: " << AssemblerDummy::Rol(4, 1) << '\n';
	//cout << "Loop shift right: " << AssemblerDummy::Ror(4, 1) << '\n';

	//int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7 };
	//int index = 2;
	//auto value = AssemblerDummy::Index(arr, index);
	//cout << "Value: " << value << " at index " << index << '\n';
    
    // AssemblerDummy::Iter(func, 5);
}

void TestSortFunction(void (*f)(int *arr, int size))
{
	int size = 12;
	int* arr = new int[size];
	for (int i = 0; i < size; ++i) {
		arr[i] = size - i;
	}

	PrintArray(arr, size);
	f(arr, size);
	PrintArray(arr, size);

    delete[] arr;
}

int main()
{
	//TestAssemblerDummy();
    
    //TestSortFunction(BubbleSort);
	TestSortFunction(InsertionSort);
}

