# References and Pointers

A reference is a reference to an existing variable, it is created using the & sign
```cpp
string foo = "Foo";
string &bar = foo;
```

Calling a reference on an existing var will result in the memory address in hexcode format
```cpp
string foo = "Foo";
cout << &foo; //will output something like 0x6dfed4
```

### Pointers
Pointers (declared with *) are variables that store the memory address of another var
```cpp
string foo = "Foo";
string* fooPointer = &foo; //fooPointer is something like 0x6dfed4
```

To 'dereference' a pointer aka show its var value instead of hex, use *
```cpp
string foo = "Foo"; //var
string* fooPointer = &foo; //pointer, value = 0x6dfed4

cout << fooPointer; //will output 0x6dfed4
cout << *fooPointer; //will output "Foo"
```

<bold>Changing the value of a pointer will change the var it points to as well!</bold>


