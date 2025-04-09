#pragma once

template<typename T, int MAX = 5>
class Deque
{
    T container[MAX]{};
    int _front = -1;
    int _rear = -1;
    int _size = 0;

public:
    Deque() = default;

    void push_rear(T item)
    {
        if (isFull())
            throw "Deque is full";

        if (_rear == -1) {
            _front = 0;
            _rear = 0;
        }
        else {
            _rear = (_rear + 1) % MAX;
        }

        container[_rear] = item;
        _size++;
    }

    void push_front(T item)
    {
        if (isFull())
            throw "Deque is full";

        if (_front == -1) {
            _front = 0;
            _rear = 0;
        }
        else {
            _front = (_front - 1 + MAX) % MAX;
        }

        container[_front] = item;
        _size++;
    }

    void pop_front()
    {
        if (isEmpty())
            throw "Deque is empty";

        if (_front == _rear) {
            _front = -1;
            _rear = -1;
        }
        else {
            _front = (_front + 1) % MAX;
        }

        _size--;
    }

    void pop_rear()
    {
        if (isEmpty())
            throw "Deque is empty";

        if (_front == _rear) {
            _front = -1;
            _rear = -1;
        }
        else {
            _rear = (_rear - 1 + MAX) % MAX;
        }

        _size--;
    }

    bool isFull() const
    {
        return _size == MAX;
    }

    bool isEmpty() const
    {
        return _size == 0;
    }

    const T& front() const
    {
        if (isEmpty())
            throw "Deque is empty";

        return container[_front];
    }

    const T& rear() const
    {
        if (isEmpty())
            throw "Deque is empty";

        return container[_rear];
    }

    void display() const
    {
        if (isEmpty())
            throw "Deque is empty";

        cout << "Front -> " << _front << endl;
        cout << "Rear -> " << _rear << endl;
        cout << "Items -> ";

        int i = _front;
        for (int count = 0; count < _size; count++)
        {
            cout << container[i] << ' ';
            i = (i + 1) % MAX;
        }
        cout << endl;
    }
};

