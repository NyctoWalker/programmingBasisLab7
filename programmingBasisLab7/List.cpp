#include "List.h"

List::List(int Size)
{
	Size = 0;
	head = nullptr;
	cout << "����������� ��� " << this << endl;
}

List::Node::Node(int data, Node* pNext)
{
	this->data = data;
	this->pNext = pNext;
}

List::~List()
{
	cout << "���������� ��� " << this << endl;
	DeleteList();
};

void List::push_back(int data)
{
	if (head == nullptr)
	{
		head = new Node(data);
	}
	else
	{
		Node* current = this->head;
		while (current->pNext != nullptr)
		{
			current = current->pNext;
		}
		current->pNext = new Node(data);
	}
	Size++;
}

void List::pop_front()
{
	Node* temp = head;
	head = head->pNext;
	delete temp;
	Size--;
}

void List::PrintList()
{
	Node* p = head;
	if (Size > 0)
	{
		for (int i = 0; i < Size; i++)
		{
			cout << "������� � " << i + 1 << " = " << p->data << endl;
			p = p->pNext;
		}
	}
	else
	{
		cout << "������ ��� �� ����� ��� ���������� ��� ��������� ����� ����." << endl << endl;
	}
	delete p;
}

void List::DeleteList()
{
	while (Size > 0)
	{
		pop_front();
	}
}

void List::CreateList(int Size)
{
	DeleteList();
	while (this->Size < Size)
	{
		push_back(this->Size * this->Size);
	}
}

void List::DeleteByNum()
{
	Node* previous = head;
	int j;
	cout << "������� ����� �������� ��� ��������: " << endl;
	cin >> j;
	cout << endl;

	if (j > 0 && j <= Size)
	{
		if (Size > 0)
		{
			if (j == 1)
			{
				pop_front();
			}
			else
			{
				for (int i = 0; i < j - 2; i++)
				{
					previous = previous->pNext;
				}
				Node* toDelete = previous->pNext;
				previous->pNext = toDelete->pNext;
				delete toDelete;
				Size--;
			}
		}
		else
		{
			cout << "������ �������." << endl;
			cout << endl;
		}
	}
	else
	{
		cout << "������� ������������ �������� ������ �������� ��� ��������." << endl;
		cout << endl;
	}

}