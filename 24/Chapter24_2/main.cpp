#include <numeric>
#include <iostream>
using namespace std;

int multiply(int x, int y){
	return x * y;
}

int main(void){
	int iArray[5]={1, 2, 3, 4, 5};
	cout << "����iArray��Ԫ�غ�Ϊ"
		<< accumulate(iArray, iArray+5, 0)
		<< endl;
	cout << "����iArray��Ԫ�س˻�Ϊ"
		<< accumulate(iArray, iArray+5, 1, multiply)
		<< endl;
	return 0;
}