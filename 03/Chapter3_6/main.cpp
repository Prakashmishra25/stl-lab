#include <fstream>
#include <iostream>
using namespace std; 

struct Student{
	char name[8];
	int year;
};

int main(void){
	Student st;
	strcpy(st.name, "�ι���"); 
	st.year=18;
	//
	ofstream wFileStream;
	wFileStream.open("d:\\student.txt", ios::out|ios::binary);
	if(!wFileStream){
		cout << "���ļ�ʧ��" << endl;
		return 1;
	}
	wFileStream.write(reinterpret_cast<char*>(&st), sizeof(Student));
	wFileStream.close();
	//
	ifstream rFileStream;
	rFileStream.open("d:\\student.txt", ios::in|ios::binary);
	rFileStream.read(reinterpret_cast<char*>(&st), sizeof(Student));
	cout << st.name << "  " << st.year << endl;
	rFileStream.close();
	return 0;
}


