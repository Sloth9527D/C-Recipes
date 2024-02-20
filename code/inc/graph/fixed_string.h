/*	Copyright(C)
	Author: 479764650@qq.com
	Description: ��ַ�̶���������,���C++20������ģ��������ַ�����֧��
	History: 2023/2/26
*/

#ifndef FIXED_STRING_H
#define FIXED_STRING_H

#include <algorithm>

template<size_t N>
struct FixedString
{
	char str[N];
	// FixString����ӵ�о�̬�洢��,ͬһ����������ڳ����н���һ��ʵ��
	constexpr FixedString(const char(&s)[N]) { std::copy_n(s, N, str); }
};

template<FixedString STR>
constexpr decltype(STR) operator""_fs() { return STR; }

#endif // !FIXED_STRING_H

