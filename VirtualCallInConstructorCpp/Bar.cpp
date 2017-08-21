#include "stdafx.h"
#include "Bar.h"
#include "cstdlib"

Bar::Bar() {
	this->value = rand() % 100 + 1;
}