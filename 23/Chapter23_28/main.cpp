#include <algorithm>
#include <iostream>
using namespace std;

void print(int x){
	cout << x << ' ';
}

template <class BidirectionalIter>
void nextPermu_sort(BidirectionalIter first, BidirectionalIter last){
	while(next_permutation(first, last)) {}  //���ýϴ����Ϸ���true
}

int main(void){
	int iArray[]={3, 6, 2, 9, 8};
	const int len=sizeof(iArray)/sizeof(int);
	cout << "ԭ���" << endl;
	for_each(iArray, iArray+len, print);
	cout << endl;
	cout << "�����" << endl;
	next_permutation(iArray, iArray+len);
	for_each(iArray, iArray+len, print);
	cout << endl;
	//
	cout << "���ý�����next_permutation�㷨����\n";
	nextPermu_sort(iArray, iArray+len);
	for_each(iArray, iArray+len, print);
	cout << endl;
	return 0;
}