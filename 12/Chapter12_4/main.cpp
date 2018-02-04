#include <set>
#include <iostream>
//ѧ���ṹ��	
struct Student{
	char* name;
	int year;
	char* addr;
};
//�ȽϺ���
struct StudentLess{
	bool operator()(const Student& s1, const Student& s2) const 
	{
		return s1.year < s2.year;  //�Ƚ�ѧ������
	}
};
int main(void){
	using namespace std;
	//ѧ������
	Student stuArray[] = {
		{ "��ǿ", 21, "����" },
		{ "����", 22, "�㽭" },
		{ "����", 21, "�Ϻ�" },
		{ "����", 23, "����" },
		{ "����", 30, "���" }
	};
	//����multiset����ms
	multiset<Student, StudentLess> ms(stuArray, stuArray +5 , StudentLess());
	//ͳ��
	cout << "ѧ������: " << ms.size() << endl << endl;
	cout << "����Ϊ21���ѧ������: " << ms.count(stuArray[0]) << endl << endl;
	//��ӡԪ��
	multiset<Student>::iterator i,iend;
	iend=ms.end();
	cout << "����	" << "����	" << "��ַ\n";
	for(i=ms.begin(); i!=iend; i++)
		cout << (*i).name <<'	' << (*i).year << '	' << (*i).addr << endl;
	cout << endl;
	return 0;
}