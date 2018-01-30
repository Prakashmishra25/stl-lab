#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

struct Student{
	int id;
	char* name;
	int score;
	Student(int id_, char* name_, int score_){
		id=id_;
		name=name_;
		score=score_;
	}
};

bool compByid(Student s1, Student s2){
	return s1.id < s2.id ? 1 : 0;
}
bool compByscore(Student s1, Student s2){
	return s1.score < s2.score ? 1 : 0;
}	

void print(Student s){
	cout << s.id << ' ' << s.name << ' ' << s.score << endl;
}

int main(void){
	vector<Student> v;
	v.push_back(Student(5, "��ǿ", 90));
	v.push_back(Student(9, "����", 80));
	v.push_back(Student(8, "����", 87));
	v.push_back(Student(6, "����", 90));
	v.push_back(Student(7, "����", 99));
	//
	cout << "��ѧ��ִ��sort�㷨����:\n";
	sort(v.begin(), v.end(), compByid);
	for_each(v.begin(), v.end(), print);
	cout << endl ;
	//
	cout << "������ִ��stable_sort�㷨����:\n";
	stable_sort(v.begin(), v.end(), compByscore);
	for_each(v.begin(), v.end(), print);
	cout << endl;
	return 0;
}