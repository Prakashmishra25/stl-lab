#include <list>
#include <iostream>
struct student{  
	char* name;
	int age;
	char* city;
	char* tel;
};
 

int main(void){
	student s[] = {
		{"����", 18, "������", "67111111"},
		{"���", 30, "�Ϻ���", "33939393"},
		{"����", 23, "������", "88883333"}
	};

	using namespace std;
	list<student> l;
	l.push_back(s[0]);
	l.push_back(s[1]);
	l.push_back(s[2]);

	list<student>::iterator i,iend;
	iend=l.end();
	cout << "����	����	����	�绰" << endl;
	cout << "----------------------------------" << endl;
	for(i=l.begin(); i!=iend; i++){
		cout << (*i).name << "	";
		cout << (*i).age <<	"	";
		cout << (*i).city << "	";
		cout << (*i).tel <<"	"<< endl;
	}
	cout << "----------------------------------" << endl<< endl;
	return 0;
}