#include "Exp.h"

Exp::Exp() {
	base = 1;
	jisu = 1;
}

Exp::Exp(int a) {
	base = a;
	jisu = 1;
}

Exp::Exp(int a, int b) {
	base = a;
	jisu = b;
}

int Exp::getValue() {
	int result = base;
	for (int i = 1; i < jisu; i++)
		result *= base;
	return result;
}

int Exp::getBase() {
	return base;
}

int Exp::getExp() {
	return jisu;
}

bool Exp::equals(Exp b) {
	if (getValue() == b.getValue()) return true;
	else return false;
}