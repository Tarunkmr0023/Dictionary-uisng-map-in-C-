PROJECT DESCRIPTION
Objective: To implement dictionary in C++ using map STL.
Theory: 
	The Standard Template Library (STL) is a software library for the C++ programming language that influenced many parts of the C++ Standard Library. It provides four components called algorithms, containers, functions, and iterators. The STL provides a set of common classes for C++, such as containers and associative arrays, that can be used with any built-in type and with any user-defined type that supports some elementary operations (such as copying and assignment). STL algorithms are independent of containers, which significantly reduces the complexity of the library.
STL has four components

1.	Algorithms
2.	Containers
3.	Functions
4.	Iterators
Algorithms
The header algorithm defines a collection of functions especially designed to be used on ranges of elements. They act on containers and provide means for various operations for the contents of the containers.
Algorithm
•	Sorting
•	Searching
•	Important STL Algorithms
•	Useful Array algorithms
•	Partition Operations
Containers
Containers or container classes store objects and data. There are in total seven standard “first-class” container classes and three container adaptor classes and only seven header files that provide access to these containers or container adaptors.
Some of container are as follows:
•	vector
•	list
•	deque
•	arrays set
•	multiset
•	map
•	multimap
•	set
•	multiset
•	map
•	multimap
Functions
The STL includes classes that overload the function call operator. Instances of such classes are called function objects or functors. Functors allow the working of the associated function to be customized with the help of parameters to be passed.
•	Functors
Iterators
As the name suggests, iterators are used for working upon a sequence of values. They are the major feature that allow generality in STL.
•	Iterators

Map in C++ Standard Template Library (STL)
Maps are associative containers that store elements in a mapped fashion. Each element has a key value and a mapped value. No two mapped values can have same key values.
Some basic functions associated with Map:
Function	Description
begin()	Returns an iterator to the first element in the map
end()	Returns an iterator to the theoretical element that follows last element in the map
size()	Returns the number of elements in the map
max_size()	Returns the maximum number of elements that the map can hold
empty()	Returns whether the map is empty
pair insert(keyvalue, mapvalue)	Adds a new element to the map
erase(iterator position)	Removes the element at the position pointed by the iterator
erase(const g)	Removes the key value ‘g’ from the map
clear()	Removes all the elements from the map
Insert()	Extends container by inserting new element in map
find()	Finds an element associated with key k
rbegin()	Returns a reverse iterator which points to the last element of the map.
rend()	Returns a reverse iterator which points to the reverse end of the map
size()	Returns the number of elements present in the map
Table 1 – Functions on map
String class in C++
C++ has in its definition a way to represent sequence of characters as an object of class. This class is called std:: string. String class stores the characters as a sequence of bytes with a functionality of allowing access to single byte character.
Some basic functions associated with string:
Functions	Description
getline()	store a stream of characters as entered by the user
push_back()	input a character at the end of the string
pop_back()	delete the last character from the string
length()	finds the length of the string
begin()	returns an iterator to beginning of the string
end()	returns an iterator to end of the string
rbegin()	returns a reverse iterator pointing at the end of string
rend()	reverse iterator pointing at beginning of string
Table 2 – Functions on string


Implementation :-
	In this project I have implemented dictionary using map STL in C++. std::map is the C++ standard library implementation of  a dictionary. It contains key-value pairs where the keys are all unique and the key values are used to find the associated values, much like a real-world dictionary. The map is, just like most of the standard library, implemented using templates and the types of the keys and the values are given when you create the map. Map ensures unique key value(word), each key refers to a value i.e., meaning of word. In this Project, We have used only lower case letter so we used tolower() function to convert uppercase letter to lowercase letter. I have implemented following functions: -
1.	Search
2.	Insert
3.	View in alphabetical order
4.	View in reverse alphabetic order
5.	Delete
6.	Modify
Search :-
	To search we use find() function of map STL. The map::find() is a built-in function in C++ STL which returns an iterator or a constant iterator that refers to the position where the key is present in the map. If the key is not present in the map container, it returns an iterator or a constant iterator which refers to map.end(). The function accepts one mandatory parameter key which specifies the key to be searched in the map container.
	Time complexity for searching elements in std::map is O(log n). Even in worst case it will be O(log n) because elements are stored internally as Balanced Binary Search tree (BST).
Insert :-
	To insert element in map we use insert() function of map STL. The map::insert() is a built-in function in C++ STL which is used to insert elements with a particular key in the map container. The function accepts a pair that consists of a key and element which is to be inserted into the map container. The function does not insert the key and element in the map if the key already exists in the map.
Time complexity for inserting elements in std::map is O(log n). Even in worst case it will be O(log n).
View :-
	To view or display list of words present in dictionary. We use iterator to iterate over the whole map. Initialize iterator with map.begin()  and iterate map till map.end() and for reverse iterating, initialize iterator with map.rbegin()  and iterate map till map.rend() and each iteration we print the key-value pair.
	std::map::begin() function is used to return an iterator pointing to the first element of the map container. begin() function returns a bidirectional iterator to the first element of the container. std::map::end() function is used to return an iterator pointing to past the last element of the map container. Since it does not refer to a valid element, it cannot de-referenced end() function returns a bidirectional iterator. The std::map::rbegin() is a function in C++ STL. It returns a reverse iterator which points to the last element of the map. The reverse iterator iterates in reverse order and incrementing it means moving towards beginning of map. The rend() function is an inbuilt function in C++ STL which returns a reverse iterator pointing to the theoretical element right before the first key-value pair in the map.
	Time complexity for iteration over a HashMap is O(n + s), where n is the number of mappings and s is the size. It must iterate linearly over all s buckets and linearly over all n entries.
Delete: -
To delete an element from map we use erase() function of map STL. map::erase() is a built-in function in C++ STL which is used to erase element from the container. It can be used to erase keys, elements at any specified position or a given range. Time complexity for inserting elements in std::map is O(log n). Even in worst case it will be O(log n).
Modify: -
	To modify an element in map we first have to delete element from map using erase() function and then again insert it with modified value using insert() function. Again the time complexity for modifying element in map would be O(log n).
Some other functions used in program: -
	The transform function is present in the C++ STL. To use it, we have to include the algorithm header file. This is used to perform an operation on all elements. For an example if we want to perform square of each element of an array, and store it into other, then we can use the transform() function.
The transform function works in two modes. These modes are :
1.	Unary operation mode
2.	Binary operation mode
In unary mode the function takes only one operator (or function) and convert into output. In binary mode it can perform binary operation on the given data. For e.g., if we want to add elements of two different array, then we have to use binary operator mode.
	In C++, std::substr() is a predefined function used for string handling. string.h is the header file required for string functions.
This function takes two values pos and len as an argument and returns a newly constructed string object with its value initialized to a copy of a sub-string of this object. Copying of string start from pos and done till pos+len means [pos, pos+len).
	In our code we use transform() function to convert string uppercase to lowercase, and substr() function to separate key value from meaning while loading data from file to map every time code execute.
	For permanent storage of data we use File handling function provided by C++. We store Dictionary data in a text file. Every time we run our code data is loaded into the map from the text file.
In C++, files are mainly dealt by using three classes fstream, ifstream, ofstream available in fstream headerfile.
1.	ofstream: Stream class to write on files
2.	ifstream: Stream class to read from files
3.	fstream: Stream class to both read and write from/to files.
Ifstream:-
Input stream class to operate on files.  Objects of this class maintain a filebuf object as their internal stream buffer, which performs input/output operations on the file they are associated with . Ifstream is used to read data from file.
Ofstream:-
Output stream class to operate on files. Objects of this class maintain a filebuf object as their internal stream buffer, which performs input/output operations on the file they are associated with. Ofsteam is used to write data on file.
There are different open method to read or write on data file. Different open mode are listed below:
MEMBER
CONSTANT	STANDS
FOR	
ACCESS
in	input	File open for reading: the internal stream buffer supports input operations.
out	output	File open for writing: the internal stream buffer supports output operations.
binary	binary	Operations are performed in binary mode rather than text.
ate	at end	The output position starts at the end of the file.
app	append	All output operations happen at the end of the file, appending to its existing contents.
trunc	truncate	Any contents that existed in the file before it is open are discarded.
TABLE 3 – Open modes in file handling
There are default mode that are applied if we don’t provide any open mode. For ifsream default mode is ios::in , for ofstream ios::out and for fstream ios::in | ios::out.
	For using various function in C++ we have to include different header file. To minimize the potential for errors, C++ has adopted the convention of using header files to contain declarations. You make the declarations in a header file, then use the #include directive in every .cpp file or other header file that requires that declaration. The #include directive inserts a copy of the header file directly into the .cpp file prior to compilation.
