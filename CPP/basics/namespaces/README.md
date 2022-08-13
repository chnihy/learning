# Namespaces

To import the standard library, containing many common namespaces:
```cpp
using namespace std; 
```

To avoid <a href="https://stackoverflow.com/questions/22903542/what-is-namespace-pollution">Namespace Pollution</a>, it is recommended
to instead declare namespaces before each var

```cpp
std::string b = "my string"; 
```