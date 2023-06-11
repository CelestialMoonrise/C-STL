# Vector Basics
## Introduction
  To use vectors in C++, you will need to ```#include <vector>``` at the beginning of your code, as it is not in the C++ Standard Template Library (AKA STL). 
  Vectors are like a new and improved version of traditional arrays as their size can be automatically changed by the container 
  (this means you can add/delete things and there wouldn’t be issues or empty spaces). This, however, means that vectors consume more energy and storage than arrays. 
  Vectors are very good for accessing elements via element storage ‘addresses’ and you can easily add/delete elements to its end. Vectors support some, but not all, STL functions, 
  so it can get confusing what vectors can use and what they can’t use.

## How do Vectors Work?
(I’m not that good at explaining this, but I’ll try my best. I apologize if it isn’t accurate, and feel free to tell me what I did wrong!!)
Vectors are containers that use connected storage (contiguous is the word they use), which is why they support using storage ‘address’ (some people call it index, I think). 
The whole vector might need to be reallocated (simply speaking, it’s making parts of a hard drive ready for use. 
Check out the third link at the bottom for a comprehensive explanation.) if the space in storage doesn’t allow added elements to be connected with the rest of the vector. 
But don’t worry about the reallocation too much, as the process of resizing and reallocating is automatically done by the vector. 
As long as you use the right functions, you can always find where they are (we’ll get to that soon).

## How to Initiate a Vector
Note: 1 data type per vector. No exceptions.

```vector<data_type> vector_name;```

This initiates an empty vector named vector_name. You don’t have to worry about needing to assign the size or elements in it because you can change the size and add/delete elements later.

```vector<data_type> vector_name(amount, element);```

You can put repeating elements in a vector by specifying the amount upon initiating the vector.

```vector<data_type> vector_name(size);```

Initiate a vector and specifying the size. Note that the size can still be changed afterwards (~~this means this whole bullet point is kind of useless~~).

```vector<data_type> vector_name {element1, element2, element3…};```
You can also put in elements when you initiate a vector but remember to add these {}.

## Basic Functions and Operations for Vectors(and other things)

Note: To simplify things, the name of a vector would be as ‘v’ hereon.
  
![C++ Vector](https://github.com/CelestialMoonrise/CPP-STL/assets/103975296/12ff2c5e-31ae-4ae3-9f1b-944a7eb79cfe)

  
### Part 1 Iterator/Locating Operations
Iterators point to the memory address of STL (and other) containers. They can shorten the execution time and simplify the code.
These functions can be placed in the functions below when a position is required. If you want to specify a place after or before a simple +x or -x would do the trick.
  
- ```v.begin()```
  : Points iterator to the first element of the vector.
 
- ```v.rbegin()```
  : People who name C++ functions love to shorten things. This one means the reverse begin() of a vector. It points iterator to the last element of the vector.
  
- ```v.end()```
  : Points iterator to position “after” the last element of the vector. (There will be more functions that work on the end of vectors, trust me.)
  
- ```v.rend()```
  : Reverse end() of a function. Points iterator to the position “before” the first element of the vector. 
  
- ```v.at(address)```
  : Returns value of element at given address.

### Part 2 Change Elements
  
- ```v.push_back(element)```
  : Adding an element to the end of the vector. The name doesn’t seem to relate, but it might have to do with the vector needing to extend (push) the back of the vector itself another bit in the storage to accommodate the new element (remember that vectors need to be contiguous).

- ```v.pop_back()```
  : Remove last element of the vector. (Told you thereare plenty of functions about the end of a vector.)

- ```v.insert()```
  :``` v.insert(position, amount, element)```: Insert repeating element ‘amount’ times to ‘position’ in vector.
  
  : v.insert(position, v1_section_start, v1_section_end): Insert a section of v1(using storage address) to ‘postion’ in v.

- ```v.assign(amount, element)```
  : Be careful with this function as it writes over the original elements. It defaults to start at the beginning of the vector. 

- ``v.clear()``
  : Enough with adding stuff. This function removes everything from (AKA clears) the given vector and leaves its size at 0. Exactly what a function called clear() should do (you probably didn’t need this explanation, but do read the one on v.empty()).

- ``v.erase()``
  : Delete specific element/section of vector.

  :  ``v.erase(position)``: self explanatory.

  : ``v.erase(iterator_first, iterator_last)``: Note that it erases from the iterator_first position to the element “before” the iterator_last position.

- ``v.empty()``
  : From the name of the function it seems to be the same as v.clear(), but no, that is not the case. The person who named this function forgot (or maybe they wanted to but could’t use special characters. If they’re anything like me, they probably forgot.) to add a question mark. This function returns true if the vector length is 0. If false, it returns otherwise.

- ``v.size()``
  : Gives the amount of elements in the vector (NOT the capacity, that’s for the next function to do).

- ``v.capacity()``
  : If you read about ``v.size()`` you would know what this does. v.capacity() returns the size of the allocated storage the vector has. But because the vector can always reallocate when necessary, this function isn’t used much (at least to the extent of my limited knowledge).

- ``v.swap(v1)``
  : Exchange contents of the two vectors. They need to be of the same “type” but doesn’t need to be the same “size” (I repeat, vectors have flexible sizes).

## A Note(useful) and Weird Facts(not-so-useful)
- DIY vector_print()

  Yep, you read right. You can’t just use the traditional ‘cout’ to print out your vector. Of course, you can use a for-loop everytime you need to print a vector but you can also creat a void function to avoid that trouble (It also tidies your main() function which is really helpful for bigger projects, at least that’s what I’ve been told.). Here’s a code you can use: 

```
void vector_print(vector<int> v){
    vector<int> :: iterator it; //’it’ is now an iterator that points to the position of start of a vector
    for(it=v.begin(); it!=v.end(); it++){
        cout << *it << " ";     //'*' retrieves data from 'it' position in memory
    }
    cout << endl;
}
```

- The word ‘vector’ has different meanings in more than 7 different fields. Including: Aviation, aeronautics, and biology.
In physics, vectors have magnitude and position but not position. That’s surprisingly similar to C++ vectors as neither have a set position in the storage (vectors reallocate as I’ve no doubt repeated more than enough times).

- ‘Vector’ came from the Latin word ‘vector’ (surprise!) which means carrier (that’s what a vector is in the case of coding). 
- DOGS ARE THE BEST. This is a very subjective statement that should definitely appear on READMEs.

## Citations
These were such useful websites that helped me understand the concepts. Go check them out!
1. https://cplusplus.com/reference/vector/vector/ (SO useful for details)
2. https://www.geeksforgeeks.org/iterators-c-stl/  (Great explanation on iterators)
3. https://www.partitionwizard.com/resizepartition/how-to-allocate-a-hard-drive.html 
4. https://shengyu7697.github.io/std-vector/ (Wonderful image) 
5. And of course, https://www.google.com (in case you didn’t have the url). I used it for the etymology and definitions so I guess https://languages.oup.com too!
