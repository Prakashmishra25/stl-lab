#include <map>
#include <iostream>

int main(void){
	using namespace std;
	//����map��������m
	map<const char*, float> m;
	//����Ԫ��(ˮ��,����)
	m["apple"]   = 3.6f;
	m["orange"]  = 3.2f;
	m["banana"]  = 1.8f;
	m["pear"]    = 2.3f;
	m["lichee"]  = 6.3f;
	//��ӡԪ��
	cout << "ƻ���۸�: " << m["apple"] << "Ԫ/��\n";
	cout << "���Ӽ۸�: " << m["orange"] << "Ԫ/��\n";
	cout << "�㽶�۸�: " << m["banana"] << "Ԫ/��\n";
	cout << "ѩ��۸�: " << m["pear"] << "Ԫ/��\n";
	cout << "��֦�۸�: " << m["lichee"] << "Ԫ/��\n";
	return 0;
}