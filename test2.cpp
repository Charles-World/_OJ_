//#include <iostream>
//#include <vector>
//using namespace std;
////ţţ��������������Ϊһ��������һ��������������, ��������������Ƿǵ������߷ǵݼ�����ġ�ţţ��һ
////������Ϊn����������A, ��������һ�������ǰ�����A��Ϊ���ɶ�����������, ţţ��֪�������ٿ��԰������
////���Ϊ��������������.
////��������ʾ, ţţ���԰�����A����Ϊ[1, 2, 3]��[2, 2, 1]��������������, ������Ҫ����Ϊ2������������, �������
////2
////����������
////����ĵ�һ��Ϊһ��������n(1 �� n �� 10 ^ 5)
////�ڶ��а���n������A_i(1 �� A_i �� 10 ^ 9), ��ʾ����A��ÿ�����֡�
////���������
////���һ��������ʾţţ���Խ�A���ٻ���Ϊ���ٶ�����������
////ʾ��1 :
////����
////6
////1 2 3 2 2 1
////���
////2
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int> v;
//	v.resize(n);
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> v[i];
//	}
//
//	int ret = 1;
//	for (int i = 1; i < n - 1; ++i)
//	{
//		if ((v[i - 1] < v[i] && v[i] > v[i + 1]) || (v[i - 1] > v[i] && v[i] < v[i + 1]))
//		{
//			ret++;
//			
//			if (i != n - 3)
//			{
//				++i;
//			}
//		}
//	}
//	cout << ret << endl;
//}

//�����ַ��� | ʱ�����ƣ�1�� | �ڴ����ƣ�32768K
//��һ�仰�ĵ��ʽ��е��ã���㲻���á����� I like beijing.�����������Ϊ��beijing.like I
//NOWCODER.COM
//ţ������������������� / �������
//ţ�ͳ�Ʒ - http://www.nowcoder.com
//����������
//ÿ�������������1������������ I like beijing.�����������Ȳ�����100
//���������
//�����������֮����ַ���, �Կո�ָ�
//ʾ��1 :
//����
//I like beijing.
//���
//beijing.like I
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string s;
	getline(cin, s);

	reverse(s.begin(), s.end());
	auto start = s.begin();
	auto end = start;
	while (start != s.end())
	{
		while (start != s.end() && *start != ' ')
		{
			++start;
		}
		reverse(end, start);
		if (start != s.end())
		{
			++start;
			end = start;
		}
	}
	cout << s << endl;
	return 0;
}