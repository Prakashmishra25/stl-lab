#include <hash_map>
#include <iostream>

template<class Key, class NameType, class YearType, class AddrType>
struct StudentRecord_tag{    //ѧ����¼�ṹ��
	struct StudentInfo_tag{  //ѧ����Ϣ�ṹ��
		NameType name;
		YearType year;
		AddrType addr;
	};
	//�ṩ������Ϣ
	typedef Key IdType;
	typedef StudentInfo_tag StudentInfo;
	//���ݳ�Ա
	IdType id;              //ѧ��,��ֵ
	StudentInfo sf;         //ѧ����Ϣ,��ӳ������
};

int main(void){
	  using namespace std;
	  typedef StudentRecord_tag<int, char*, int, char*> StudentRecord;
	  //ѧ������
	  StudentRecord srArray[] = {  //3��ѧ����¼
				{ 192, "��ǿ", 21, "����" },
				{ 193, "����", 29, "�Ϻ�" },
				{ 191, "����", 38, "����" }
	  };
	  //����hash_map��������hm,����ѧ����¼
	  hash_map<StudentRecord::IdType, StudentRecord::StudentInfo> hm;
	  //װ��3��ѧ����¼
	  for(int j=0; j<3; j++)
		hm[srArray[j].id]=srArray[j].sf;
	  //����������Ԫ��
	  hash_map<StudentRecord::IdType, StudentRecord::StudentInfo>::iterator i,iend;
	  iend=hm.end();
	  cout << "ѧ��	" << "����	" << "����	" << "��ַ	" << endl;  //Tab���ָ�
	  for(i=hm.begin(); i!=iend; i++)
		cout << (*i).first << '	'
			 << (*i).second.name << '	'
		     << (*i).second.year << '	'
			<< (*i).second.addr << '	'
			<< endl;
	  return 0;
}
