# PYTHON LOGGING MODULE

<a href="https://realpython.com/python-logging/#the-logging-module">Real Python</a> Logging tutorial is very good

<a href="https://www.youtube.com/watch?v=-ARI4Cz-awo">Corey Schaefer</a> has a two part tutorial on YouTube.

```python
import logging
# DEBUG: Detailed information, typically of interest only when diagnosing problems.

# INFO: Confirmation that things are working as expected.

# WARNING: An indication that something unexpected happened, or indicative of some problem in the near future (e.g. ‘disk space low’). The software is still working as expected.

# ERROR: Due to a more serious problem, the software has not been able to perform some function.

# CRITICAL: A serious error, indicating that the program itself may be unable to continue running.

logging.basicConfig(filename='test.log', level=logging.DEBUG,
	format='%(asctime)s:%(levelname)s:%(message)s')

def add(x, y):
    """Add Function"""
    return x + y


def subtract(x, y):
    """Subtract Function"""
    return x - y


def multiply(x, y):
    """Multiply Function"""
    return x * y


def divide(x, y):
    """Divide Function"""
    return x / y


num_1 = 20
num_2 = 10

add_result = add(num_1, num_2)
logging.debug('Add: {} + {} = {}'.format(num_1, num_2, add_result))

sub_result = subtract(num_1, num_2)
logging.debug('Sub: {} - {} = {}'.format(num_1, num_2, sub_result))

mul_result = multiply(num_1, num_2)
logging.debug('Mul: {} * {} = {}'.format(num_1, num_2, mul_result))

div_result = divide(num_1, num_2)
logging.debug('Div: {} / {} = {}'.format(num_1, num_2, div_result))

```

## Logging Levels
- DEBUG: Detailed information, typically of interest only when diagnosing problems.

- INFO: Confirmation that things are working as expected.

- WARNING: An indication that something unexpected happened, or indicative of some problem in the near future (e.g. ‘disk space low’). The software is still working as expected.

- ERROR: Due to a more serious problem, the software has not been able to perform some function.

- CRITICAL: A serious error, indicating that the program itself may be unable to continue running.


## Using Seperate Loggers 
In case of multiple loggers, avoid using root.  Instead create individual logs with FileHandler and config with Formatter.

```python
logger = logging.getLogger(__name__)

logger.setLevel(logging.DEBUG)

formatter = logging.Formatter('%(asctime)s:%(levelname)s:%(message)s')

file_handler = logging.FileHandler('test.log')
file_handler.setFormatter(formatter)

logger.addHandler(file_handler)
```

## Use Try/Except loops logging.exception to traceback errors
```python
def divide(x, y):
    """Divide Function"""
    try:
        result = x / y
    except ZeroDivisionError:
        logger.exception('Tried to divide by zero')
    else:
        return result
```
returns
```
2022-05-13 15:54:04,709:ERROR:Tried to divide by zero
Traceback (most recent call last):
  File "/Users/chnihy/Documents/programming/sandbox/logging/logg.py", line 42, in divide
    result = x / y
ZeroDivisionError: division by zero
```

## Print logs to console with StreamHandler
```python
stream_handler = logging.StreamHandler()
logging.addHandler(stream_handler)
```