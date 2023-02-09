//make a simple example of a bool statement, with documentation
// Primitive Data Types

// Integer Types
int: Stores whole numbers, both positive and negative. 
unsigned int: Stores only positive whole numbers. 
short: Stores smaller whole numbers. 
long: Stores larger whole numbers. 
long long: Stores very large whole numbers. 

// Floating Point Types 
float: Stores fractional numbers with single precision (7 digits). 
double: Stores fractional numbers with double precision (15 digits). 
long double: Stores fractional numbers with extended precision (19 digits). 

// Character Types 
char: Stores a single character/letter/number. 
wchar_t: Stores a wide character set, usually used for non-English languages.  

 // Boolean Type  
bool: Stores true or false values.

//------------------------------------------------//
// Abstract Data Types Cheat Sheet

// Arrays 
// Arrays are a data structure that stores a collection of elements, all of which are the same type. 
// They are indexed by a numerical value, starting at 0. 
// Arrays can be declared in C++ using the following syntax: 
type arrayName[size]; 
// For example: 
int myArray[10]; // Creates an array of 10 integers. 

// Linked Lists 
// Linked lists are a data structure that stores a collection of elements, all of which are the same type. 
// They are linked together using pointers, and each element contains a pointer to the next element in the list. 
// Linked lists can be declared in C++ using the following syntax: 
struct node {   // Declare a node structure  
    type data;   // Data stored in each node  
    node *next;  // Pointer to next node  
};  
node *head;     // Declare head pointer to first node in list  

 // Stacks 
 // Stacks are a data structure that stores elements in Last In First Out (LIFO) order. The last element added is always the first one removed.  
 // Stacks can be declared in C++ using the following syntax:  

 struct stack {   // Declare stack structure   												    type data[size];      // Data stored in each stack     int top;              // Index of top element on stack };   

 stack myStack;    // Declare myStack as an instance of stack

 // Queues 
 // Queues are a data structure that stores elements in First In First Out (FIFO) order. The first element added is always the first one removed.  

 struct queue {    // Declare queue structure     type data[size];      // Data stored in each queue     int front;            // Index of front element on queue     int rear;             // Index of rear element on queue };   

 queue myQueue;    // Declare myQueue as an instance of queue

 // Trees 
 Trees are a hierarchical data structure that store elements according to their relationships with other elements. Each tree has one root node and may have multiple branches and leaves. Trees can be declared
//-----------------------------------------------//
// Derived Data Types 
// A derived data type is a data type that is derived from one or more primitive data types. 

// Arrays: 
// An array is a collection of elements of the same type stored in contiguous memory locations. 
// Syntax: datatype arrayName[size]; 
int arr[5]; // declaring an array of size 5 with integer elements 
// Accessing array elements: arr[index] 
arr[0] = 10; // assigning value 10 to the first element of the array 
cout << arr[0]; // prints 10, which is the value assigned to the first element of the array  

  
// Pointers: 
// A pointer is a variable that stores the address of another variable. It can be used to access and manipulate data stored at a particular memory address.  
// Syntax: datatype *pointerName;  													   
int *ptr; // declaring an integer pointer  

  
// Strings:  
// A string is an array of characters terminated by a null character ('\0'). It can be used to store and manipulate text-based data.   
char str[] = "Hello World!"; // declaring and initializing a string  

  
// Structures: 
// A structure is a user-defined data type that can store multiple variables of different types in one unit.   
struct Student {     // defining structure Student   	   	   	   	   	   	        int rollNo;     char name[20]; };      Student s1; // declaring structure variable s1      s1.rollNo = 101; // assigning value 101 to rollNo member of s1      strcpy(s1.name, "John"); // assigning name "John" to name member of s1