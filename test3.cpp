//1. 标题：字符串中找出连续最长的数字串 | 时间限制：1秒 | 内存限制：32768K
//读入一个字符串str，输出字符串str中的连续最长的数字串
//输入描述：
//个测试输入包含1个测试用例，一个字符串str，长度不超过255。
//输出描述：
//在一行内输出str中里连续最长的数字串。
//示例1 :
//输入
//abcd12345ed125ss123456789
//输出
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