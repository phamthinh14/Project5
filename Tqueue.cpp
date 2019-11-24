#ifndef TQUEUE_CPP
#define TQUEUE_CPP

#include <iostream>
#include <cstdlib>

using namespace std;

template<class T, int N>
class Tqueue {
public:
    //Name: Tqueue - Default Constructor
    //Precondition: None (Must be templated)
    //Postcondition: Creates a queue using dynamic array
    Tqueue(); //Default Constructor
    //Name: Copy Constructor
    //Precondition: Existing Tqueue
    //Postcondition: Copies an existing Tqueue
    Tqueue(const Tqueue<T, N> &x); //Copy Constructor
    //Name: Destructor
    //Desc: Empties m_data
    //Precondition: Existing Tqueue
    //Postcondition: Destructs existing Tqueue
    ~Tqueue(); //Destructor
    //Name: ClearData
    //Desc: Empties m_data
    //Precondition: Existing Tqueue
    //Postcondition: Empty m_data
    void ClearData();

    //Name: Enqueue
    //Desc: Adds item to the back of queue
    //Precondition: Existing Tqueue
    //Postcondition: Returns true if successful else false
    void Enqueue(T data); //Adds item to queue (to back)
    //Name: Dequeue
    //Desc: Removes item from queue (from front)
    //Precondition: Existing Tqueue
    //Postcondition: Returns true if successful else false
    void Dequeue();

    //Name: Sort
    //Desc: Sorts the contents of the Tqueue
    //NOTE: You may implement to only deal with dereferenced pointers
    //Precondition: Existing Tqueue
    //Postcondition: Contents of Tqueue is sorted (ascending)
    void Sort();

    //Name: IsEmpty
    //Precondition: Existing Tqueue
    //Postcondition: Returns 1 if queue is empty else 0
    int IsEmpty(); //Returns 1 if queue is empty else 0
    //Name: IsFull
    //Precondition: Existing Tqueue
    //Postcondition: Returns 1 if queue is full else 0
    int IsFull(); //Returns 1 if queue is full else 0
    //Name: Size
    //Desc: Returns size of queue
    //Precondition: Existing Tqueue
    //Postcondition: Returns size of queue
    int Size();

    //Name: Overloaded assignment operator
    //Precondition: Existing Tqueue
    //Postcondition: Sets one Tqueue to same as a second Tqueue using =
    Tqueue<T, N> &operator=(Tqueue<T, N> y); //Overloaded assignment operator for queue
    //Name: Overloaded [] operator
    //Precondition: Existing Tqueue
    //Postcondition: Returns object from Tqueue using []
    T &operator[](int x);//Overloaded [] operator to pull data from queue

private:
    T *m_data; //Data of the queue (Must be dynamically allocated array)
    int m_front; //Front of the queue
    int m_back; //Back of the queue
};

//**** Add class definition below ****
//Name: Tqueue - Default Constructor
//Precondition: None (Must be templated)
//Postcondition: Creates a queue using dynamic array
template<class T, int N>
Tqueue<T, N>::Tqueue() {
    m_data = new T[N];
    m_front = 0;
    m_back = 0;
}

template<class T, int N>
Tqueue<T, N>::Tqueue(const Tqueue<T, N> &x) {
    m_front = x.m_front;
    m_back = x.m_back;
    m_data = new T[N];
    for (int i = 0; i < x.m_back; ++i) {
        m_data[i] = x.m_data[i];
    }
}

template<class T, int N>
Tqueue<T, N>::~Tqueue() {
    delete[] m_data;
    m_data = nullptr;
}

template<class T, int N>
void Tqueue<T, N>::ClearData() {
    // IsEmpty() == 0 means the Queue is not empty
    if (IsEmpty() == 0) {
        m_back = 0;
        m_front = 0;
    }
}

//Name: Enqueue
//Desc: Adds item to the back of queue
//Precondition: Existing Tqueue
//Postcondition: Returns true if successful else false
template<class T, int N>
void Tqueue<T, N>::Enqueue(T data) {

    if (IsFull() == 0) {
        m_data[m_back] = data;
        ++m_back;
    }
}

//Name: Dequeue
//Desc: Removes item from queue (from front)
//Precondition: Existing Tqueue
//Postcondition: Returns true if successful else false
template<class T, int N>
void Tqueue<T, N>::Dequeue() {
    if (IsEmpty() == 0) {
        // Shifts the indices
        for (int i = 0; i < m_back; i++) {
            m_data[i] = m_data[i + 1];
        }
        --m_back;
    }
}

template<class T, int N>
void Tqueue<T, N>::Sort() {
    T temp;
    for (int i = 0, j, least; i < m_back - 1; i++) {
        for (j = i + 1, least = i; j < m_back; j++) {
            // if (m_data[j] < m_data[least]) {  // for comparable T
            if (*m_data[j] < *m_data[least]) {  // for comparable *T (T is pointer to the comparable data type)
                least = j;
            }
        }
        temp = m_data[least];
        m_data[least] = m_data[i];
        m_data[i] = temp;
    }
}

//Name: IsEmpty
//Precondition: Existing Tqueue
//Postcondition: Returns 1 if queue is empty else 0
template<class T, int N>
int Tqueue<T, N>::IsEmpty() {
    if (m_back == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

//Name: IsFull
//Precondition: Existing Tqueue
//Postcondition: Returns 1 if queue is full else 0
template<class T, int N>
int Tqueue<T, N>::IsFull() {
    if (m_back == N) {
        return 1;
    }
    else {
        return 0;
    }
}


template<class T, int N>
int Tqueue<T, N>::Size() {
    return m_back - m_front;
}

template<class T, int N>
T &Tqueue<T, N>::operator[](int x) {
    return m_data[x];
}

template<class T, int N>
Tqueue<T, N> &Tqueue<T, N>::operator=(Tqueue<T, N> y) {
    //Kinda like Java this means this particular object that we previously created
    if (this != &y) {
        // Creates a deep copy of object
        m_front = y.m_front;
        m_back = y.m_back;
        // Traverses through array and copies array contents
        for (int i = y.m_front; i < y.m_back; i++) {
            m_data[i] = y.m_data[i];
        }
    }
    return *this;
}

//template<class T, int N>
//ostream &operator<<(ostream &os, Tqueue<T, N> fm) {
//    os << "The test has the following:" << endl << " | ";
//    for (int i = 0; i < fm.Size(); i++) {
//        os << fm[i] << endl;
//    }
//    return *this;
//}

// To test just Lqueue follow these instructions:
//   1.  Uncomment out int main below
//   2.  make Tqueue
//   3.  ./Tqueue (try valgrind too!)

/*
int main() {
    //Test 1 - Default Constructor and Push
    cout << "Test 1 - Default Constructor and Push Running" << endl;
    //Test Default Constructor
    Tqueue<int, 10> newTQ1;
    //Push 3 nodes into Lqueue
    newTQ1.Enqueue(40);
    newTQ1.Enqueue(70);
    newTQ1.Enqueue(90);
    newTQ1.Enqueue(10);
    newTQ1.Enqueue(60);
    newTQ1.Enqueue(70);
    newTQ1.Enqueue(30);
    newTQ1.Enqueue(190);
    newTQ1.Enqueue(120);
    newTQ1.Enqueue(20);
    newTQ1.Enqueue(120);
    for (int i = 0; i < newTQ1.Size(); ++i) {
        cout << i << "/ " << newTQ1[i] << endl;
    }
    cout << "Size of newTQ1 after the Enqueue " << newTQ1.Size();
    cout << endl;
//=====================================================================================================================
    //Test 2 - Copy Constructor and Assignment Operator
    cout << "Test 2 - Copy Constructor and Assignment Operator Running" << endl;
    //Test Copy constructor
    Tqueue<int, 10> newTQ2(newTQ1);
    cout << "Data for newTQ2(//Test Copy constructor): " << endl;
    for (int i = 0; i < newTQ2.Size(); ++i) {
        cout << newTQ2[i] << endl;
    }
    //Test Overloaded Assignment Operator
    Tqueue<int, 10> newTQ3;
    cout << "Data for newTQ3(//Test Overloaded Assignment Operator): " << endl;
    newTQ3 = newTQ1;
    for (int i = 0; i < newTQ3.Size(); ++i) {
        cout << newTQ3[i] << endl;
    }
    cout << endl;
//=====================================================================================================================
    //Test 3 - Test Dequeue
    cout << "Test 3 - Dequeue" << endl;
    newTQ1.Dequeue();
    for (int i = 0; i < newTQ1.Size(); ++i) {
        cout << newTQ1[i] << endl;
    }
    cout << "Size of newTQ1 after the Dequeue: " << newTQ1.Size() << endl;
    cout << "Data for newTQ2(//Test Copy constructor): " << endl;
    for (int i = 0; i < newTQ2.Size(); ++i) {
        cout << newTQ2[i] << endl;
    }
    cout << "Data for newTQ3(//Test Overloaded Assignment Operator): " << endl;
    for (int i = 0; i < newTQ3.Size(); ++i) {
        cout << newTQ3[i] << endl;
    }
    cout << endl;
//=====================================================================================================================
    //Test 4 - Test Overloaded []
    cout << "Test 4 - Test Overloaded []" << endl;
    for (int i = 0; i < newTQ1.Size(); i++) {
        cout << newTQ1[i] << endl;
    }
//=====================================================================================================================
    //Test 5 - Test Size and ClearData
    cout << "Test 5 - Size, ClearData, and Sort" << endl;
    //Test GetSize()
    cout << "Outputting the size of newTQ1" << endl;
    cout << newTQ1.Size() << endl;
    cout << "Outputting the sort of newTQ1" << endl;
    newTQ1.Sort();
    for (int i = 0; i < newTQ1.Size(); ++i) {
        cout << i << "/ " << newTQ1[i] << endl;
    }
    cout << "Size of newTQ1 after the Enqueue " << newTQ1.Size();
    cout << endl;
    //Test Clear()
    cout << "Clearing all nodes" << endl;
    newTQ1.ClearData();
    cout << "Outputting the size of newTQ1" << endl;
    cout << newTQ1.Size() << endl;
    cout << endl;


    return 0;
}
*/

#endif
