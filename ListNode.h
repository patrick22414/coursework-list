#ifndef LISTNODE_H
#define LISTNODE_H

#include "ListLinked.h"

template< typename Node_T >
class ListNode
{
public:
	ListNode();
	ListNode(const Node_T& xdata);
	friend class ListLinked;
private:
	Node_T data;
	ListNode* next;
};

template< typename Node_T >
ListNode::ListNode()
{
	next = NULL;
}

template< typename Node_T >
ListNode::ListNode(const Node_T& xdata)
{
	data = xdata;
	next = NULL;
}

#endif // LISTNODE_H
