#include <iostream>

#include "MathUtils.h"
#include "AdvancedMath.h"

using std::cout, std::endl;

int main(){
	int a = 3;
	int b = 4;

	cout << "a + b = " << MathUtils::add(a, b) << endl;
	cout << "a * b = " << MathUtils::multiply(a, b) << endl;
	cout << "square(a) = " << AdvancedMath::square(a) << endl;

	return 0;

}
