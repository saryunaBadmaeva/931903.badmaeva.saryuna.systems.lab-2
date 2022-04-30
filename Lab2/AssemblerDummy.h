#pragma once
class AssemblerDummy
{
public:
	static int Add(int a, int b);
	static int Substract(int a, int b);
	static int Multiply(int a, int b);
	static int Divide(int a, int b);

	static int Not(int a);
	static int And(int a, int b);
	static int Or(int a, int b);
	static int Xor(int a, int b);

	static bool Eq(int a, int b);
	static bool Neq(int a, int b);
	static bool Lt(int a, int b);
	static bool Le(int a, int b);
	static bool Gt(int a, int b);
	static bool Ge(int a, int b);

	static int Index(int* arr, int index);
	static int Shl(int a, unsigned char shift);
	static int Shr(int a, unsigned char shift);
	static int Rol(int a, unsigned char shift);
	static int Ror(int a, unsigned char shift);

	static void Iter(void (*func)(), int times);
};
