#include"Node.h"
template<class ElemType>
Node<ElemType>::Node()
// �������������ָ����Ϊ�յĽ��
{
	next = nullptr;
}

template<class ElemType>
Node<ElemType>::Node(ElemType e, Node<ElemType>* link)
// �������������һ��������Ϊe��ָ����Ϊlink�Ľ��
{
	data = e;
	next = link;
}
