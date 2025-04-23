#include<iostream>
#include<stdlib.h>  // for system("cls")
#include<conio.h>   // for getch()
using namespace std;

class Queue {
    int *data;
    int maxq, front, rear;

public:
    Queue() {
        maxq = 5;
        data = new int[maxq];
        front = rear = -1;
    }

    Queue(int maxq) {
        this->maxq = maxq;
        data = new int[maxq];
        front = rear = -1;
    }

    ~Queue() {
        delete[] data;
    }

    void enque(int item) {
        if (rear == maxq - 1) {
            cout << "OVERFLOW" << endl;
            return;
        }
        if (front == -1) {
            front = rear = 0;
        } else {
            rear++;
        }
        data[rear] = item;
    }

    int deque() {
        if (front == -1) {
            cout << "UNDERFLOW" << endl;
            return -1;
        }
        int item = data[front];
        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
        return item;
    }

    bool isEmpty() {
        return front == -1;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is Empty" << endl;
            return;
        }
        cout << "Queue is: ";
        for (int i = front; i <= rear; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q1;
    int ch, item;

    do {
        system("cls");  // Clear screen (Windows)
        cout << "-------- Queue Menu --------" << endl;
        cout << "1. Add\n2. Delete\n3. Display\n4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) {
        case 1:
            cout << "Enter element to add: ";
            cin >> item;
            q1.enque(item);
            break;

        case 2:
            if (!q1.isEmpty())
                cout << "Item deleted is: " << q1.deque() << endl;
            else
                cout << "UNDERFLOW" << endl;
            break;

        case 3:
            q1.display();
            break;

        case 4:
            cout << "Exiting program..." << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }

        cout << "\nPress any key to continue...";
        getch();  // Wait for user to press any key

    } while (ch != 4);

    return 0;
}
