#include <algorithm>
#include <vector>
#include <iostream>

int main(void){
	using namespace std;
	//��ʼ������v1={5, 6, 7, 8, 9 } 
	vector<int> v1; 
	v1.push_back(5);
	v1.push_back(6);
	v1.push_back(7);
	v1.push_back(8);
	v1.push_back(9);
	//��ʼ������v2={7, 8}
	vector<int> v2;
	v2.push_back(7);
	v2.push_back(8);
	//���v2�Ƿ񹹳�v1��������
	vector<int>::iterator iterLocation;
	iterLocation=search(v1.begin(), v1.end(), v2.begin(), v2.end());
	//��ӡ��v1[2]��ʼƥ��
	if(iterLocation != v1.end())
		cout << "v2��Ԫ�ذ�����v1��,��ʼԪ��Ϊ"  
		     << "v1[" << iterLocation - v1.begin() << "]\n";
	else 
		cout << "v2��Ԫ�ز�������v1��" << endl;
	return 0;
}

