#pragma once
#pragma once
#ifndef __SQ_LIST_H__
#define __SQ_LIST_H__
#include "Assistance.h"	// ���������
#include"Point2D.h"
// ˳���ģ��������� 
template <class ElemType>
class SeqList
{
protected:
	// ˳�������ݳ�Ա
	int length;					// ˳���ĵ�ǰ���� 
	int maxLength;				// ˳�����������
	ElemType* elems;			// Ԫ�ش洢�ռ���׵�ַ 

public:
	// ˳���ĺ�����Ա
	SeqList(int size = DEFAULT_SIZE);	// ����һ���ձ� 
	SeqList(ElemType v[], int n, int size = DEFAULT_SIZE);	// ��������v�����ݹ���˳��� 
	virtual ~SeqList();			// ��������
	int GetLength() const;		// ȡ˳�����			 
	bool IsEmpty() const;		// �ж�˳����Ƿ�Ϊ��
	void Clear();				// ��˳������
	void Traverse(void (*Visit)(const ElemType&)) const;	// ����˳���
	int LocateElem(const ElemType& e) const;	// Ԫ�ض�λ����ָ��Ԫ����˳����е�λ��
	Status GetElem(int i, ElemType& e) const;	// ȡ˳����е�i��Ԫ�ص�ֵ	
	Status SetElem(int i, const ElemType& e);	// �޸�˳����е�i��Ԫ�ص�ֵ
	Status DeleteElem(int i, ElemType& e);      // ɾ��˳����е�i��Ԫ��		
	Status InsertElem(int i, const ElemType& e); // ��˳����i��λ�ò���Ԫ��
	Status InsertElem(const ElemType& e);        // ��˳����β����Ԫ��
	SeqList(const SeqList<ElemType>& sa);        // ���ƹ��캯��
	SeqList<ElemType>& operator =(const SeqList<ElemType>& sa); // ��ֵ�������
	Status DelSameItem( ElemType& e);              //ɾ��������ͬԪ��
	Status Reverse();                           //����˳���
	void ShowSeqList();                         //չʾ���Ա�
};


// ˳�������Ա��ʵ�ֲ���

#endif

