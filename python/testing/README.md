# Testing in Python

## Assert 
The assert statement tests the input and returns nothing if passed
```python
assert sum(1,2) == 3, 'Error message goes here'
```

If failed, an Assertation Error and the custom message will appear in REPL
```python
def add():
    return sum([2, 2])

assert add() == 5, "Custom Error Message"
```

```bash
Traceback (most recent call last):
  File "/Users/chnihy/Documents/programming/SANDBOX/learning/python/testing/main.py", line 4, in <module>
    assert add() == 5, "Custom Error Message"
AssertionError: Custom Error Message
```

## Creating a Seperate Test file
```bash
.
├── main.py
└── test.py
```

<p class="codeblock-title">test.py</p>

```python
from main import add

def test_add():
    assert add() == 4, "Error message goes here"

if __name__ == "__main__":
    test_add()
    print("Everything passed")
```

<p class="codeblock-title">main.py</p>

```python
def add():
    return sum([2, 2])
```


## Using <unittest> module
#### From <a href="https://realpython.com/python-testing/">Real Python</a>:
```
unittest has been built into the Python standard library since version 2.1. You’ll probably see it in commercial Python applications and open-source projects.

unittest contains both a testing framework and a test runner. unittest has some important requirements for writing and executing tests.

unittest requires that:

You put your tests into classes as methods
You use a series of special assertion methods in the unittest.TestCase class instead of the built-in assert statement
To convert the earlier example to a unittest test case, you would have to:

- Import unittest from the standard library
- Create a class called TestAdd that inherits from the TestCase class
- Convert the test functions into methods by adding self as the first argument
- Change the assertions to use the self.assertEqual() method on the TestCase class
- Change the command-line entry point to call unittest.main()
```

```bash
.
├── main.py
└── test_unit.py
```

<p class="codeblock-title">test_unit.py</p>

```python
from main import add
import unittest

class TestAdd(unittest.TestCase):

    def test_add(self):
        self.assertEqual(add(), 4, "Custom Error message goes here")

if __name__ == '__main__':
    unittest.main()
```

#### Successful Test Output:
```bash
chnihy@Mac-mini testing % python3 test_unit.py 
.
----------------------------------------------------------------------
Ran 1 test in 0.000s

OK
```

#### Failed Test Output
```bash
chnihy@Mac-mini testing % python3 test_unit.py
F
======================================================================
FAIL: test_add (__main__.TestAdd)
----------------------------------------------------------------------
Traceback (most recent call last):
  File "/Users/chnihy/Documents/programming/SANDBOX/learning/python/testing/test_unit.py", line 7, in test_add
    self.assertEqual(add(), 3, "Custom Error message goes here")
AssertionError: 4 != 3 : Custom Error message goes here

----------------------------------------------------------------------
Ran 1 test in 0.000s

FAILED (failures=1)
```

### Importing a Single Script with __import__

```python
target = __import__("main.py")
add = target.add
```

### Types of Asserts
<table>
    <tr>
        <th>Method</th>
        <th>Equivalent to</th></tr>
    <tr>
        <td>.assertEqual(a, b)	a == b</td></tr>
    <tr>
        <td>.assertTrue(x)	bool(x) is True</td></tr>
    <tr>
        <td>.assertFalse(x)	bool(x) is False</td></tr>
    <tr>
        <td>.assertIs(a, b)	a is b</td></tr>
    <tr>
        <td>.assertIsNone(x)	x is None</td></tr>
    <tr>
        <td>.assertIn(a, b)	a in b</td></tr>
    <tr>
        <td>.assertIsInstance(a, b)	isinstance(a, b)</td></tr>
</table>