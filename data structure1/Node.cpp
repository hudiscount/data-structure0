#include"Node.h"
template<class ElemType>
Node<ElemType>::Node()
// 操作结果：构造指针域为空的结点
{
	next = nullptr;
}

template<class ElemType>
Node<ElemType>::Node(ElemType e, Node<ElemType>* link)
// 操作结果：构造一个数据域为e和指针域为link的结点
{
	data = e;
	next = link;
}
