#pragma warning(disable:4786)
#include <deque>
#include <string>
#include <iostream>

int main(void){  
	using namespace std;
	deque<string> d;
	//��ӡdequeΪ��
	cout << "d�Ƿ�Ϊ��: " << d.empty() << endl;
	//װ��Ԫ��
	d.push_back("��¥��");
	d.push_back("Դ������");
	d.push_back("�̸�");
	d.push_back("ˮ䰴�");
	d.push_back("24ʷ");
	//��ӡdeque����Ԫ��
	deque<string>::iterator i,iend;
	iend=d.end();
	for(i=d.begin(); i!=iend; i++)
		cout <<  *i << "   ";
	cout << endl;
	//��ӡ��Ԫ��
	cout << "deque��Ԫ��Ϊ: " << d.front() << endl;
	//��ӡĩԪ��
	cout << "dequeĩԪ��Ϊ: " << d.back() << endl;
	//��ӡԪ�ظ���
	cout << "dequeԪ�ظ���Ϊ: " << d.size() << endl;
	//��ӡ��֧�ֵ����dequeԪ�ظ���
	cout << "deque���Ԫ�ظ���Ϊ: " << d.max_size() << endl;
	return 0;
}
