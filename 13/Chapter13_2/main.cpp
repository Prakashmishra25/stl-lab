#include <map>
#include <iostream>

struct StudentInfo{  //ѧ����Ϣ�ṹ��
	  char* name;
	  int year;
	  char* addr;
};

struct StudentRecord{        //ѧ����¼�ṹ��
	int id;                  //ѧ��,����ֵ
	StudentInfo sf;          //ѧ����Ϣ,��ӳ������
};

int main(void){
	using namespace std;
	//ѧ������
	StudentRecord srArray[] = {  //3��ѧ����¼
				{ 1, "��ǿ", 21, "����" },
				{ 2, "����", 29, "�Ϻ�" },
				{ 3, "����", 38, "����" }
	};
	//����map��������m,����ѧ����¼
	map<int, StudentInfo> m;
	//װ��3��ѧ����¼
	for(int j=0; j<3; j++)
		m[srArray[j].id]=srArray[j].sf;
	//�������������Ԫ��
	map<int, StudentInfo>::reverse_iterator i,iend;
	iend=m.rend();
	cout << "ѧ��	" << "����	" << "����	" << "��ַ	" << endl;
	for(i=m.rbegin(); i!=iend; i++)
		cout << (*i).first << '	'
			 << (*i).second.name << '	'
		     << (*i).second.year << '	'
			 << (*i).second.addr << '	'
			 << endl; 
	return 0;
}