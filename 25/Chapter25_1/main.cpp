#include <iterator>
#include <fstream>
#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
	//Դ�ļ���������
	ifstream rFileStream;
	rFileStream.open("d:\\ˮ��.txt", ios::in);
	if(!rFileStream){
		cout << "���ļ�ʧ��\n";
		return 1;
	}
	rFileStream >> noskipws;  //����ո�
	//Ŀ���ļ��������
	ofstream wFileStream;
	wFileStream.open("d:\\ˮ��2.txt", ios::out);
	if(!wFileStream){
		cout << "���ļ�ʧ��\n";
		return 1;
	}
	//copy�㷨ʹ�������������������ļ�����
	istream_iterator<char> iter_iFile(rFileStream);
	ostream_iterator<char> iter_oFile(wFileStream);
	copy(iter_iFile, istream_iterator<char>(), iter_oFile);
	rFileStream.close();
	wFileStream.close();
	return 0;
}