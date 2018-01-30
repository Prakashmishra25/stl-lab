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
	int iArray[5]={1, 2, 3, 4, 5};
	int iResult[5];
	//���
	partial_sum(iArray, iArray+5, iResult);
	for_each(iResult, iResult+5, print);
	cout << endl;
	//����׳�
	partial_sum(iArray, iArray+5, iResult, multiply);
	for_each(iResult, iResult+5, print);
	cout << endl;
	return 0;
}