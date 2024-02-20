/*	Copyright(C)
	Author: 479764650@qq.com
	Description: Ԫ��̵��Թ���
	History: 2023/2/14
*/

#ifndef DEBUG_TOOLS_H
#define DEBUG_TOOLS_H

#include <iostream>

// �������ڲ鿴������Ϣ
template<typename, typename ...> struct Dump;

// ����ʱ��ӡ.����ͨ������ʱ��ֵ���㣬���ַ������к�����������һЩ�м�ֵ��Ӧ��
#if __GNUC__
template<typename ...Ts>
void PrintType()
{
	std::cout << _PRETTY_FUNCTION_ << std::endl;
}
#elif _MSC_VER
template<typename ...Ts>
void PrintType()
{
	std::cout << __FUNCSIG__ << std::endl;
}
#else
template<typename ...Ts>
void PrintType() {}
#endif

#endif // !DEBUG_TOOLS_H


