//1. ���⣺�ַ������ҳ�����������ִ� | ʱ�����ƣ�1�� | �ڴ����ƣ�32768K
//����һ���ַ���str������ַ���str�е�����������ִ�
//����������
//�������������1������������һ���ַ���str�����Ȳ�����255��
//���������
//��һ�������str��������������ִ���
//ʾ��1 :
//����
//abcd12345ed125ss123456789
//���
//123456789
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s, s2, s3;
	getline(cin, s);

	auto start = s.begin();
	int count[2] = { 0 };
	while (start != s.end())
	{
		if (start != s.end() && *start >= '0' && *start <= '9')
		{
			s2 = "";
			count[1] = 0;
			while (start != s.end() && *start >= '0' && *start <= '9')
			{
				s2 += *start;
				++(count[1]);
				++start;
			}
			if (count[0] < count[1])
			{
				s3 = s2;
				count[0] = count[1];
			}
			--start;
		}
		++start;
	}
	cout << s3 << endl;
	return 0;
}