#include <vector>
#include <iostream>

int main(void){
	using namespace std;
	//��ʼ��bv1
	bit_vector bv1;
	bv1.push_back(true);
	bv1.push_back(false);
	bv1.push_back(false);
	//��ʼ��bv2
	bit_vector bv2(7);  //ע��,����bv2[7]
	bv2[0] = true;
	bv2[1] = false;
	bv2[2] = true;
	bv2[3] = true;
	bv2[4] = false;
	bv2[5] = true;
	bv2[6] = false;
	//��ӡbv1�ĸ���bit
	bit_vector::iterator i,iend;
	iend = bv1.end();
	cout << "bv1��bitλ: ";
	for(i=bv1.begin(); i!=iend; i++)
		cout << (*i ? '1':'0') << ' ';  //��ӡ1 0 0
	cout << endl;
	//��ӡbv2�ĸ���bit
	cout << "bv2��bitλ: ";
	for(unsigned int j=0; j < bv2.size(); j++)
		cout << bv2[j] << ' ';
	cout << endl;
	return 0;
}