#include <fstream>
#include <iostream>
using namespace std;

int main(void){ 
	ifstream rFileStream;
	rFileStream.open("d:\\ˮ��.txt", ios::in);
	if(!rFileStream){
		cout << "���ļ�ʧ��" << endl;
		return 1;
	} 
	//���ļ�
	char eName[10], cName[10];
	rFileStream >> eName >> cName;
	cout << eName << ' ' << cName << endl;
	rFileStream >> eName >> cName;
	cout << eName << ' ' << cName << endl;
	rFileStream >> eName >> cName;
	cout << eName << ' ' << cName << endl;
	rFileStream.close();
	return 0;
}