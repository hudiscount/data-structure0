#pragma once
#ifndef __NODE_H__
#define __NODE_H__

// �����
template <class ElemType>
struct Node
{
	// ���ݳ�Ա:
	ElemType data;				// ������
	Node<ElemType>* next;		// ָ����

// ���캯��:
	Node();						// �޲����Ĺ��캯��
	Node(ElemType e, Node<ElemType>* link = NULL);	// ��֪������Ԫ��ֵ��ָ�뽨���ṹ
};

// ������ʵ�ֲ���

#endif
