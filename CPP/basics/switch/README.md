# Switches

A switch is a set of outcomes aka CASES based on an evaluation 
```cpp
int expression = 1; // All cases will be evaluated against this 
switch(expression){
	case(x): // If x == expression...
		// Code block executes
		break; // then break the process, don't execute any other cases
	// If it's not a match, then we go to the next case
	case(y):
		// code block
		break;
	default: // Default is optional, as a last execution is no caess are matched
		// code block
}
```