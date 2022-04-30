#include "AssemblerDummy.h"

int AssemblerDummy::Add(int a, int b)
{
	_asm {
		mov eax, a
		add eax, b
	}
}

int AssemblerDummy::Substract(int a, int b)
{
	_asm {
		mov eax, a
		sub eax, b
	}
}

int AssemblerDummy::Multiply(int a, int b)
{
	_asm {
		mov eax, a
		imul eax, b
	}
}

int AssemblerDummy::Divide(int a, int b)
{
	_asm {
		mov eax, a
		mov edx, 0
		mov ebx, b
		idiv ebx
	}
}

bool AssemblerDummy::Eq(int a, int b)
{
	_asm {
		mov eax, a
		cmp eax, b
		jz EQUAL

		mov eax, 0
		jmp END

		EQUAL :
		mov eax, 1

			END :
	}
}

bool AssemblerDummy::Neq(int a, int b)
{
	_asm {
		mov eax, a
		cmp eax, b
		jz EQUAL
		mov eax, 1
		jmp END

		EQUAL :
		mov eax, 0

			END :
	}
}

bool AssemblerDummy::Lt(int a, int b)
{
	_asm {
		mov eax, a
		cmp eax, b
		jl LESS
		mov eax, 0
		jmp END

		LESS :
		mov eax, 1

			END :
	}
}

bool AssemblerDummy::Le(int a, int b)
{
	_asm {
		mov eax, a
		cmp eax, b
		jle LESSEQUAL
		mov eax, 0
		jmp END

		LESSEQUAL :
		mov eax, 1

			END :
	}
}

bool AssemblerDummy::Gt(int a, int b)
{
	_asm {
		mov eax, a
		cmp eax, b
		jg GREATER
		mov eax, 0
		jmp END

		GREATER :
		mov eax, 1

			END :
	}
}

bool AssemblerDummy::Ge(int a, int b)
{
	_asm {
		mov eax, a
		cmp eax, b
		jge GREATEREQUAL
		mov eax, 0
		jmp END

		GREATEREQUAL :
		mov eax, 1

			END :
	}
}

int AssemblerDummy::Not(int a)
{
	_asm {
		mov eax, a
		not eax
	}
}

int AssemblerDummy::And(int a, int b)
{
	_asm {
		mov eax, a
		and eax, b
	}
}

int AssemblerDummy::Or(int a, int b)
{
	_asm {
		mov eax, a
		or eax, b
	}
}

int AssemblerDummy::Xor(int a, int b)
{
	_asm {
		mov eax, a
		xor eax, b
	}
}

int AssemblerDummy::Index(int* arr, int index)
{
	_asm {
		mov eax, index
		mov ebx, arr
		mov eax, [ebx + 4 * eax]
	}
}

int AssemblerDummy::Shl(int a, unsigned char shift)
{
	_asm {
		mov eax, a
		mov cl, shift
		shl eax, cl
	}
}

int AssemblerDummy::Shr(int a, unsigned char shift)
{
	_asm {
		mov eax, a
		mov cl, shift
		shr eax, cl
	}
}

int AssemblerDummy::Rol(int a, unsigned char shift)
{
	_asm {
		mov eax, a
		mov cl, shift
		rol eax, cl
	}
}

int AssemblerDummy::Ror(int a, unsigned char shift)
{
	_asm {
		mov eax, a
		mov cl, shift
		ror eax, cl
	}
}

void AssemblerDummy::Iter(void (*func)(), int times)
{
	_asm {
		mov ebx, times
		BEGIN :
		call func
			dec ebx
			cmp ebx, 0
			jne BEGIN
	}
}
