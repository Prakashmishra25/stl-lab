#include <numeric>
#include <algorithm>
#include <iostream>
using namespace std;
void print(int x){
	cout << x << ' ';
}

int multiply(int x, int y){
	return x * y;
}

int main(void){
	int iArray[5]={1, 10, 17, 25, 30};
	int iResult[5];
	//�ڽ�Ԫ�ز�
	adjacent_difference(iArray, iArray+5, iResult);
	for_each(iResult, iResult+5, print);
	cout << endl;
	//�ڽ�Ԫ�����
	adjacent_difference(iArray, iArray+5, iResult, multiply);
	for_each(iResult, iResult+5, print);
	cout << endl;
	return 0;
}


