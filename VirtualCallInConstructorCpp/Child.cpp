#include "stdafx.h"
#include "Child.h"

Child::Child() : Base::Base() {
	this->bar = new Bar();
}

void Child::Foo() {
	this->bar->value = 5;
}