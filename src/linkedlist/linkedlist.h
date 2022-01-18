#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <string>
#include <iostream>

namespace LinkedList 
{
	template <typename T> class Node;
	template <typename T> class SinglyLinkedList;

	template <typename T>
	class Node 
	{
	public:
		explicit Node(T data) : m_data(data), m_next(nullptr) {}

	private:
		T m_data;
		Node<T>* m_next;
		friend class SinglyLinkedList<T>;
	};

	template <typename T>
	class SinglyLinkedList
	{
	public:
		SinglyLinkedList() :
			m_head(nullptr) {};

		~SinglyLinkedList()
		{
			clear();
		}

		bool empty() const
		{
			return (m_head == nullptr);
		}

		const T& front()
		{
			return m_head->m_data;
		}

		void addFront(const T& data)
		{
			Node<T>* newNode = new Node<T>(data);
			newNode->m_next = m_head;

			m_head = newNode;
		}

		void removeFront()
		{
			if (!empty())
			{
				Node<T>* temp = m_head;
				m_head = m_head->m_next;

				delete temp;
			}
		}

		void clear()
		{
			while (!empty())
				removeFront();
		}

		void printList() const
		{
			int index{ 0 };
			Node<T>* temp = m_head;

			while (temp != nullptr)
			{
				std::cout << "Element at " << index++ << " " << temp->m_data << std::endl;
				temp = temp->m_next;
			}
		}

	private:
		Node<T>* m_head;
	};
}

#endif // !LINKEDLIST_H
