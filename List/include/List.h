#ifndef LIST_H
#define LIST_H

template <class T>
class List
{
    public:
        List();
        ~List();

        // get info about emptyness of fullness of the list
        bool isEmpty();
        bool isFull();

        // insertion
        void insert(int, T);
        void insert(T);

        // remove
        void remove(int);
        void remove();

        // search
        int search(T);

    protected:

    private:
        T *list;
        int length;
        int maxSize;
};

#endif // LIST_H
