#include <numeric>
#include <iostream>

int add(int x, int y){
	return x + y;
}

int mul(int x, int y){
	return x * y;
}

int main(void){
	using namespace std;
	int iArray1[3]={2, 5, 4};
	int iArray2[3]={10, 6, 5};
	//��ԭ��1�����ڻ�
	int result=inner_product(iArray1, iArray1 + 3, iArray2, 0);
	cout << "����iArray1������iArray2���ڻ�Ϊ" << result << endl;
	//��ԭ��2�����ڻ�
	result=inner_product(iArray1, iArray1 +3, iArray2, 0, add, mul);
	cout << "����iArray1������iArray2���ڻ�Ϊ" << result << endl;
	return 0;
}
