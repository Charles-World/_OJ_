//�����Ĵ�����һ�������ͷ�����һ�����ַ��������硰level�����ߡ�noon���ȵȾ��ǻ��Ĵ��������ǳ�ϲ������ӵ�жԳ����Ļ��Ĵ������յ�ʱ�����õ���������ֱ����ַ���A���ַ���B���������ǳ�������û�а취���ַ���B�����ַ���Aʹ�������ַ�����һ�����Ĵ�������ܻ��������󣬰�����Ѱ���ж����ֲ���취����ʹ�´���һ�����Ĵ�������ַ���B�����λ�ò�ͬ�Ϳ���Ϊ��һ���İ취��
//���磺
//A = ��aba����B = ��b����������4�ְ�B����A�İ취��
//* ��A�ĵ�һ����ĸ֮ǰ: "baba" ���ǻ���
//* �ڵ�һ����ĸ��a��֮�� : "abba" �ǻ���
//* ����ĸ��b��֮�� : "abba" �ǻ���
//* �ڵڶ�����ĸ'a'֮�� "abab" ���ǻ���
//�������������Ĵ�Ϊ2
//�������� :
//ÿ���������ݹ����С�
//��һ��Ϊ�ַ���A
//�ڶ���Ϊ�ַ���B
//�ַ������Ⱦ�С��100��ֻ����Сд��ĸ
//������� :
//���һ�����֣���ʾ���ַ���B�����ַ���A֮�󹹳�һ�����Ĵ��ķ�����
//#include <iostream>
//#include <string>
//using namespace std;
//
//bool IsCircle(const string& s)
//{
//	int begin = 0;
//	int end = s.size() - 1;
//	while (begin < end)
//	{
//		if (s[begin] != s[end])
//		{
//			return false;
//		}
//		++begin;
//		--end;
//	}
//	return true;
//}
//int main()
//{
//	string s1, s2;
//	getline(cin, s1);
//	getline(cin, s2);
//
//	int ret = 0;
//	for (int i = 0; i <= s1.size(); ++i)
//	{
//		string s(s1);
//		s.insert(i, s2);
//		if (IsCircle(s))
//		{
//			++ret;
//		}
//	}
//	cout << ret << endl;
//	return 0;
//}

//��Ŀ����
//һ�������� N ��Ԫ�أ�����������������͡� ���磺[-1, 2, 1]������������������Ϊ[2, 1]�����Ϊ 3
//��������:
//����Ϊ���С� ��һ��һ������n(1 <= n <= 100000)����ʾһ����n��Ԫ�� �ڶ���Ϊn��������ÿ��Ԫ��, ÿ����������32λint��Χ�ڡ��Կո�ָ���
//������� :
//���������������к�����ֵ��
#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n = 0;
	vector<int> arr;
	cin >> n;
	arr.resize(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	int sum = 0;
	int ret = arr[0];
	for (int i = 0; i < n; ++i)
	{
		sum = sum < 0 ? arr[i] : sum + arr[i];
		if (sum > ret)
		{
			ret = sum;
		}
		if (sum < 0)
		{
			sum = 0;
		}
	}
	cout << ret << endl;
	return 0;
}