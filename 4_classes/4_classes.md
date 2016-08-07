## 1 classes(I)

### 1.1 Constructs
* This constructor function is declared just like a regular member function, but with a name that matches the class name and without any return type;not even ***void***
* Constructors cannot be called explicitly as if they were regular member functions

### 1.2 Overloading constructors
* The ***default constructor*** is the constructor that takes no parameters, and it is special because it is called when an object is declared but is not initialized with any arguments
  
### 1.3 Member initialization in constructors
 
### 1.4 Pointers to classes

## 2 classes(II)

### 2.1 Overloading operators
* C++ allows most operators to be overloaded so that their behavior can be defined for just about any type, inlcuding classes 
* Notice that some operators may be overloaded in two forms: either as a member function or as a non-member function 
* ` type operator sign(parameters) { /*...body...*/ }`

### 2.2 The keywords this
* The keyword ***this*** represents a pointer to the object whose member function is being executed

### 2.3 Static members
* A class can contain static members, either data or functions
* Static members cannot be initialized directly int the class, but need to be initialized somewhere outside it

### 2.4 Const member functions
* When an object of a calss is qualified as a ***const*** object:
` const Myclass myobject; `
* ***const*** objects are limited to access only member functions marked as ***const***, but ***no-const*** objects are not restricted and thus can access both ***const*** and ***no-const*** member functions alike
* Most functions taking classes as parameters actually take them by ***const*** reference, and thus, these functions can only access their ***const***

```
 int get() const {return x;}        // const member function
 const int& get() {return x;}       // member function returning a const&
 const int& get() const {return x;} // const member function returning a const&
```

### 2.5 Class templates

### 2.6 Templates specialization

## 3 Special members

### 3.1 Default constructor
### 3.2 Destructor
### 3.3 Copy constructor
### 3.4 Copy assignment
### 3.5 Move constructor and assignment 
