#include <iostream>
#include "SortFunctions.h"

void PrintArray(int* arr, int count)
{
	for (int i = 0; i < count; ++i) {
		std::cout << arr[i] << ' ';
	}
	std::cout << "\n";
}

void BubbleSort(int* arr, int count)
{
	_asm {
		mov edx, count
		dec edx									// Нужно count-1 внутренних итераций.

		oloop :
			mov ecx, edx						// Большие числа уже отсортированы, их не надо проверять.
			mov esi, arr

			iloop :
				mov eax, [esi]					// mov eax, arr[i]
				mov ebx, [esi + type arr]		// mov ebx, arr[i + 4]
				cmp eax, ebx
				jle noswap
				mov[esi + type arr], eax		// mov arr[i + 4], eax
				mov[esi], ebx					// mov arr[i], ebx

				noswap :
					add esi, type arr			// i++
					loop iloop

		dec edx
		jnz oloop
	}
}

void InsertionSort(int* arr, const int count)
{
}
