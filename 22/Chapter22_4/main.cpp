#include <algorithm>
#include <iostream>

int main(void){
	using namespace std;
	int a = 5;
	int b = 26;
	cout << "����ǰ " << "a = " << a << " b = " << b << endl;
	iter_swap(&a, &b);
	cout << "������ " << "a = " << a << " b = " << b << endl;
	return 0;
}

