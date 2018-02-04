#pragma warning (disable:4786)
#include <hash_map>
#include <iostream>

int main(void){
	using namespace std;
	hash_map<int, char> hm;
	typedef pair<hash_map<int, char>::iterator, bool> ReturnPair;
	typedef pair<int, char> InsertPair;
	ReturnPair p;
	InsertPair p1(10, 'a'), p2(20, 'c'), p3(80, 'e');
	//����p1
	p=hm.insert(p1);
	if(!p.second) cout << "����p1ʧ��\n";
	//����p2
	p=hm.insert(p2);
	if(!p.second) cout << "����p2ʧ��\n";
	//����p3
	p=hm.insert(p3);
	if(!p.second) cout << "����p3ʧ��\n";
	//��ӡͳ������
	cout << hm.empty() << endl;          //��ӡ�Ƿ�Ϊ��(falseΪ0)
	cout << hm.size() << endl;           //��ӡԪ�ظ���(3)
	cout << hm.bucket_count() << endl;   //��ӡ��(193)
	return 0;
}
