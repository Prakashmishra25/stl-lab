#include <hash_map>
#include <iostream>
int main(void){
	using namespace std;
	//����hash_map��������hm
	hash_map<const char*, float> hm;
	//����Ԫ��(ˮ����,����),ˮ����Ϊ��ֵ,����Ϊӳ������
	hm["apple"]=3.6f;
	hm["orange"]=3.2f;
	hm["banana"]=1.8f;
	hm["pear"]=2.3f;
	hm["lichee"]=6.3f;
	//��ӡԪ��
	cout << "ƻ���۸�: " << hm["apple"] << "Ԫ/��\n";
	cout << "���Ӽ۸�: " << hm["orange"] << "Ԫ/��\n";
	cout << "�㽶�۸�: " << hm["banana"] << "Ԫ/��\n";
	cout << "ѩ��۸�: " << hm["pear"] << "Ԫ/��\n";
	cout << "��֦�۸�: " << hm["lichee"] << "Ԫ/��\n";
	return 0;
}
