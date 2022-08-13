# Sizeof 

Using sizeof() is extremely handy for many things - sizeof() returns the size of data type in bytes
```cpp
#include <iostream>
using namespace std;  

int main()  
{  
  // Determining the space in bytes occupied by each data type.  
  std::cout << "Size of integer data type : " <<sizeof(int)<< std::endl;  
  std::cout << "Size of float data type : " <<sizeof(float)<< std::endl;  
  std::cout << "Size of double data type : " <<sizeof(double)<< std::endl;  
  std::cout << "Size of char data type : " <<sizeof(char)<< std::endl;  
  std::cout << "Size of char data type : " <<sizeof(string)<< std::endl;  
  return 0;  
}  
```

Returns:
```bash
Size of integer data type : 4
Size of float data type : 4
Size of double data type : 8
Size of char data type : 1
Size of char data type : 24
```