# Arrays

## Declare an array
```cpp
//datatype/name/size/values
char myarray[4] = {"A","B","C","D"}
```

## Accessing/Changing Elements
```cpp
cout << myarray[0]; //print first index of array (zero indexing)
myarray[1] = "E"; //second element will be changed
```

## Multi-Dimensional Arrays
```cpp
string letters[2][4] = { //2 arrays of 4 elements
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};
```

```cpp
string letters[2][2][2] = { //2 arrays, of 2 arrays of 2 elements
  {
    { "A", "B" },
    { "C", "D" }
  },
  {
    { "E", "F" },
    { "G", "H" }
  }
};
```

## Access elements
```cpp
string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};

cout << letters[0][2];  // Outputs "C"
```

## Looping through arrays
```cpp
// create array
string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};

// loop through array
// first forloop is num of arrays
for (int i = 0; i<=2, i++){
	// second forloop is num of elem/sub arrays
	for (int j=0; j<=2, j++)
		cout << letters[i][j] >> endl;
}
```