#include <algorithm>
#include <vector>
#include <iostream>

bool absEqual(int a, int b){
	return (a== abs(b) || abs(a) == b) ? 1:0;
}

int main(void){
	using namespace std;
	//��ʼ������v1��v2
	vector <int> v1(5);
	vector <int> v2(5);
	for(unsigned int i = 0; i < v1.size(); i++) {
		v1[i] = i;
		v2[i] = -1 * i;
	}
	//v1��v2��ȼ��
	if(equal(v1.begin(), v1.end(), v2.begin(), absEqual))
		cout << "v1��v2Ԫ�صľ���ֵ��ȫ���" << endl;
	else
		cout << "v1��v2Ԫ�صľ���ֵ����ȫ���" << endl;
	return 0;
}

