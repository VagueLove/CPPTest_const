#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>

using namespace std;

namespace spaceA {
	int a_g = 666;
}

int main(void ) {
	cout << spaceA::a_g << endl;


	return 0;

}
