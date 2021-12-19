#pragma once
#pragma once
#ifndef __SQ_LIST_H__
#define __SQ_LIST_H__
#include "Assistance.h"	// 辅助软件包
#include"Point2D.h"
// 顺序表模板类的申明 
template <class ElemType>
class SeqList
{
protected:
	// 顺序表的数据成员
	int length;					// 顺序表的当前长度 
	int maxLength;				// 顺序表的最大容量
	ElemType* elems;			// 元素存储空间的首地址 

public:
	// 顺序表的函数成员
	SeqList(int size = DEFAULT_SIZE);	// 构造一个空表 
	SeqList(ElemType v[], int n, int size = DEFAULT_SIZE);	// 根据数组v的内容构造顺序表 
	virtual ~SeqList();			// 析构函数
	int GetLength() const;		// 取顺序表长度			 
	bool IsEmpty() const;		// 判断顺序表是否为空
	void Clear();				// 将顺序表清空
	void Traverse(void (*Visit)(const ElemType&)) const;	// 遍历顺序表
	int LocateElem(const ElemType& e) const;	// 元素定位，求指定元素在顺序表中的位置
	Status GetElem(int i, ElemType& e) const;	// 取顺序表中第i个元素的值	
	Status SetElem(int i, const ElemType& e);	// 修改顺序表中第i个元素的值
	Status DeleteElem(int i, ElemType& e);      // 删除顺序表中第i个元素		
	Status InsertElem(int i, const ElemType& e); // 在顺序表第i个位置插入元素
	Status InsertElem(const ElemType& e);        // 在顺序表表尾插入元素
	SeqList(const SeqList<ElemType>& sa);        // 复制构造函数
	SeqList<ElemType>& operator =(const SeqList<ElemType>& sa); // 赋值语句重载
	Status DelSameItem( ElemType& e);              //删除所有相同元素
	Status Reverse();                           //倒置顺序表
	void ShowSeqList();                         //展示线性表
};


// 顺序表函数成员的实现部分

#endif

