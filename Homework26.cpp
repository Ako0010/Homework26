#include <iostream>
using namespace std;
#include "myQueuee.h"

void main()
{
	Deque<int, 5> deque;
	deque.push_front(11);
	deque.display();
	deque.push_rear(22);
	deque.display();
	deque.push_front(33);
	deque.display();
	deque.push_rear(44);
	deque.display();
	deque.push_rear(55);
	deque.display();
	deque.pop_rear();
	deque.display();
	deque.pop_front();
	deque.display();




	cout << endl;

	cout << deque.front() << endl;
	cout << deque.rear() << endl;

	cout << endl;

	cout << "IsFull -> " << (deque.isFull() ? "Full" : "Not full") << endl;
	cout << "IsEmpty -> " << (deque.isEmpty() ? "Empty" : "Not empty") << endl;


}
