#pragma warning (disable:4786)
#include <algorithm>
#include <map>
#include <iostream>
using namespace std;

struct StudentRecord{
	struct StudentInfo{
		char* name;
		int year;
		char* addr;
	};
	int id;  //ѧ��
	StudentInfo sf; //ѧ����Ϣ
	StudentRecord(int id_, char* name_, int year_, char* addr_){
		id=id_;
		sf.name=name_;
		sf.year=year_;
		sf.addr=addr_;
	}
};

bool setRange20_30(pair<int, StudentRecord::StudentInfo>  s){  // 20< x <30
	if( s.second.year > 20 && s.second.year < 30) return 1;
	return 0;
}
	

int main(void){
	//ѧ������
	StudentRecord st1=StudentRecord(1, "��ǿ", 21, "����");
	StudentRecord st2=StudentRecord(2, "����", 29, "�Ϻ�");
	StudentRecord st3=StudentRecord(3, "�ؽ�", 12, "�㽭");
	StudentRecord st4=StudentRecord(4, "��ǿ", 23, "ɽ��");
	StudentRecord st5=StudentRecord(5, "����", 31, "����");
	//ӳ������
	map<int, StudentRecord::StudentInfo> m;
	//����5��ѧ����¼
	pair<int, StudentRecord::StudentInfo> pairSt1(st1.id, st1.sf);
	m.insert(pairSt1);
	pair<int, StudentRecord::StudentInfo> pairSt2(st2.id, st2.sf);
	m.insert(pairSt2);
	pair<int, StudentRecord::StudentInfo> pairSt3(st3.id, st3.sf);
	m.insert(pairSt3);
	pair<int, StudentRecord::StudentInfo> pairSt4(st4.id, st4.sf);
	m.insert(pairSt4);
	pair<int, StudentRecord::StudentInfo> pairSt5(st5.id, st5.sf);
	m.insert(pairSt5);
	//����ͳ��
	int num=0;
	num=count_if(m.begin(), m.end(), setRange20_30);
	cout << "�������20��30��֮���ѧ������Ϊ: " 
		 << num << endl;  //��ӡ3
	return 0;
}