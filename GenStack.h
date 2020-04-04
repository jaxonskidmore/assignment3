#include <iostream>

using namespace std;

template <class T>

class GenStack
{
public:
  T*myArray;
  ///pointer to array
  int top;
  int size;
  //initializing variables

  GenStack()
  {
    myArray = new T[10];
    //heap because it is new
    size = 128;
    top = -1;
    //constructor
  }

  GenStack(int maxSize)
  {
    myArray = new T[maxSize];
    size = maxSize;
    top = -1;
  }
  //overloading constructor

  ~GenStack()
  {
    //delete?
    //myArray.delete();
  }

  void push(T data)
  {
    //check if full before attempting to push/insert
    if (!isFull()) {
      myArray[++top] = data;
    //incrementing top, represents the correct index
    }
    else{
      cout << "Array is full. Resizing." << endl;
      //resizeArray();
      //call resizeArray func
      push(data);
    }
  }

  T pop()
  {
    //check if empty before attempting to remove
    if (isEmpty())
    {
      throw runtime_error("Your stack is empty, cannot remove");
    }
    return myArray[top--];
  }

  T peek()
  {
    ///check if empty before attempting peek
    if (isEmpty())
    {
      throw runtime_error("Your stack is empty, cannot peek");
    }
    return myArray[top];
  }

  bool isFull()
  //function to check if array is full
  {
    return (top == size -1);
  }

  bool isEmpty()
  //fucntion to check if array is empty
  {
    return (top == -1);
  }
};
