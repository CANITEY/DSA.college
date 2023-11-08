#include "List.h"

List::List()
{
    //ctor
}

List::~List()
{
    //dtor
}

template <class T>
bool List<T>::isEmpty() const {
    return (this.length == 0);
}

template <class T>
bool List<T>::isFull() const {
    return (this.length == this.maxSize);
}



/*
Insertion
*/
template <class T>
void List<T>::insert(int location, T insertItem) {
    // handle invalid locations
    if (location < 0 || location >= this.maxSize) {
        cerr << "Position specified is out of range" << endl;
        return;
    }

    // handle if the list is full
    if (this.isFull()) {
        cerr << "The list is full" << endl;
        return;
    }

    for (int i = length; i > location; i--) {
        this.list[i] = this.list[i - 1];
    }
    this.list[location] = insertItem;
    this.length++;
}

template <class T>
void List<T>::insert(T insertItem) {
    if (this.isFull()) {
        cerr << "List is full" << endl;
        return;
    }

    this.list[this.length] = insertItem;
    length++;
}



/*
Remove
*/

template <class T>
void List<T>::remove(int location) {
    if (location >= this.length || location < 0) {
        cerr << "Location is not ideal" << endl;
        return
    }

    if (this.isEmpty()) {
        cerr << "List is empty" << endl;
    }

    for (int i = location; i < length - 1; i++) {
        this.list[i] = this.list[i + 1];
    }
    this.length--;
}

template <class T>
void List<T>::remove() {
    if (this.isEmpty()) {
        cerr << "List is empty" << endl;
        return;
    }
    this.list[length - 1] = NULL;
    this.length--;
}


template <class T>
int List<T>::search(T element) {
    int loc = 0;
    bool found = false;
    for (;loc < length; loc++) {
        if (this.list[loc] == element) {
            found = true;
            break;
        }
    }

    if (found) return loc;
    else return -1;
}
