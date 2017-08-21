#include "Base.h"
#include "Bar.h"

class Child : Base {
private:
	Bar* bar;
public:
	Child();

	void Foo() override;

};