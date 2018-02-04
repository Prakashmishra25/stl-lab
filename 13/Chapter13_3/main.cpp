#include <map>
#include <iostream>

struct StudentRecord{  //ѧ����¼�ṹ��
	struct StudentInfo{
		char* name;
		int year;
		char* addr;
	};
	StudentRecord(int id_, char* name_, int year_, char* addr_){
		id=id_;
		sf.name=name_;
		sf.year=year_;
		sf.addr=addr_;
	}
	int id;           //ѧ��,����ֵ
	StudentInfo sf;   //������Ϣ
};

int main(void){
	using namespace std;
	//����map��������m
	typedef map<int, StudentRecord::StudentInfo> studentmap;
	studentmap m;
	pair<studentmap::iterator, bool > p;
	//�����һ��ѧ����¼
	StudentRecord student1=StudentRecord(1, "����", 21, "����");
	pair<int, StudentRecord::StudentInfo> pairStudent1(student1.id, student1.sf);
	p=m.insert(pairStudent1);
	if(!p.second)
		cout << "����ѧ����¼ʧ��:\n" 
				<< student1.id << '	'
				<< student1.sf.name << '	'
				<< student1.sf.year << '	'
				<< student1.sf.addr << '	'
				<< endl << endl;
	//����ڶ���ѧ����¼
	StudentRecord student2=StudentRecord(2, "�ؽ�", 18, "�Ϻ�");
	pair<int, StudentRecord::StudentInfo> pairStudent2(student2.id, student2.sf);
	p=m.insert(pairStudent2);
	if(!p.second)
		cout << "����ѧ����¼ʧ��:\n" 
				<< student2.id << '	'
				<< student2.sf.name << '	'
				<< student2.sf.year << '	'
				<< student2.sf.addr << '	'
				<< endl << endl;
	//���������ѧ����¼
	StudentRecord student3=StudentRecord(3, "����", 20, "����");
	pair<int, StudentRecord::StudentInfo> pairStudent3(student3.id, student3.sf);
	p=m.insert(pairStudent3);
	if(!p.second)
		cout << "����ѧ����¼ʧ��:\n" 
				<< student3.id << '	'
				<< student3.sf.name << '	'
				<< student3.sf.year << '	'
				<< student3.sf.addr << '	'
				<< endl << endl;
	//�����ֵ�ظ���ѧ����¼,ʧ��
	StudentRecord student4=StudentRecord(3, "��ǿ", 26, "���");
	pair<int, StudentRecord::StudentInfo> pairStudent4(student4.id, student4.sf);
	p=m.insert(pairStudent4);
	if(!p.second)
		cout << "����ѧ����¼ʧ��:\n" 
				<< student4.id << '	'
				<< student4.sf.name << '	'
				<< student4.sf.year << '	'
				<< student4.sf.addr << '	'
				<< endl << endl;
	//��¼����
	studentmap::iterator i=m.find(2);
	cout << "������ѧ��Ϊ2�ļ�¼:\n"
			<< (*i).first << '	'
			<< (*i).second.name << '	'
			<< (*i).second.year << '	'
			<< (*i).second.addr << '	'
			<< endl << endl;
	return 0;
}