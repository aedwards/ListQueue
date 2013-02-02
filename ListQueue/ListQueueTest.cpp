//Test  for the ListQueue implementation
#include "ListQueue.h"

void main() {

	ListQueue myListQueue;

	try {
		if(myListQueue.isEmpty()) {
			cout << "Queue is empty." << endl;
		}

		//Enqueue elements
		myListQueue.Enqueue(234);
		myListQueue.Enqueue(4);
		myListQueue.Enqueue(667);
		cout << "Current size of queue: " << myListQueue.Size() << endl;

		cout << "\nFront of queue: " << myListQueue.Front() << endl;
		cout << "Rear of queue: " << myListQueue.Rear() << endl;

		cout << "\nDequeuing " << myListQueue.Dequeue() << endl;
		cout << "Current size of queue: " << myListQueue.Size() << endl;

	}
	catch(exception ex) {
		cout << "Some exception occurred." << endl;
	}

	getchar();
}