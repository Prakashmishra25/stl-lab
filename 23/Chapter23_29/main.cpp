#include <algorithm>
#include <iostream>
using namespace std;

void print(int x){
	cout << x << ' ';
}

template <class BidirectionalIter>
void prevPermu_sort(BidirectionalIter first, BidirectionalIter last){
	while(prev_permutation(first, last)) {}  //���ý�С����Ϸ���true
}

int main(void){
	int iArray[]={1, 3, 9, 6, 7};
	const int len=sizeof(iArray)/sizeof(int);
	cout << "ԭ���" << endl;
	for_each(iArray, iArray+len, print);
	cout << endl;
	cout << "�����" << endl;
	prev_permutation(iArray, iArray+len);
	for_each(iArray, iArray+len, print);
	cout << endl;
	//
	cout << "���ý�����prev_permutation�㷨����\n";
	prevPermu_sort(iArray, iArray+len);
	for_each(iArray, iArray+len, print);
	cout << endl;
	return 0;
}