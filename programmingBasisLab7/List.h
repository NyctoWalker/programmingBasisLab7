#pragma once
#include <iostream>
using namespace std;

class List
{
private:
	class Node
	{
	public:
		Node* pNext;
		int data;
		Node(int data = 0, Node* pNext = nullptr); //����������� �������� �������� ������
		//int NodeData() { return data; }
	};
	Node* head;
	int Size = 0;

public:
	List(int Size); //����������� ��������
	~List();
	int GetSize() { return Size; }

	void pop_front(); // �������� �������� � ������ ������
	void push_back(int data); // ���������� �������� � ����� ������
	void DeleteList();
	void CreateList(int Size);
	void PrintList();
	void DeleteByNum();
	//int GetData(Node Node) { Node.NodeData(); }
};