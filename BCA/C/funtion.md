# Function
Function uses divide & conquer rule. Complicated task are successfully divide into simpler and more manageable tasks which can be easily handled.

- ***It is a block of self-contained sub program that is doing some specific well defined task.***
- A big program can be decomposed into small functions.
- Function increase readability
- A C program must have a main()

## Function types: (2)
1. Library function
    Function which are alreay avalibale in compliler
    i.e. printf(), scanf(), strlen(), pow(), sqrt()

1. User defined function

### User defined functions:
1. function Declaration (Prototype)
1. function Definition
    - Header
    - Body
1. function Calling
1. function Return type

#### function Definition
- Consist of the whole description and code of the function.
- Has 2 parts = function Header , function Body


```
Header ->   [data type] function_name( arguments list )
            {
Body ->        local_variable_declaration;
                statements;
                [return expession] //optional
            }
```

```c
// Header
float sum(int x, int y)

// Body
{
    float z;
    z = x + y;
    return (z);
}
```

#### function Declaration (Prototype)
- Also known as function Prototype declaration
- Here calling function needs info of called function
- If **(function)Definition** of called function is placed before calling function then **Declaration** ain't needed

^ means if function() is put before main() then declaration not needed

```c
// Here it's not needed as it's defined before the main()

int function(int a, int b)      // Called function
{...}

int main()
{
    int x,y,z;
    int function(int,int);      // Prototype declaration
    ...;
    z = function(x,y)           // Calling function
    
    return 0;
}
```

#### function Calling
- When the function is used inside main() it's called *function calling*
- **The function Definition** is the *called function*
> watch the example in above one

```c
// variable_name = function_name( arguments_list )

    z = sum(x,y)
```

#### function Return type
- Used for a function() to return a value to the *Calling function*

## Function Arguments: 2 types
1. Actual arguments - arguments in Calling function ,inside the main()
1. Formal arguments - arguments in Called function ,outside the main()

- Actual arguments send the values to Formal arguments of the Called function()

# Category of Function: 4 types
- Depends on arguments(arg) & return type values(rtv)

1. function with no arg no rtv
1. function with no arg but rtv
1. function with arg but no rtv
1. function with arg & rtv


## Function Recursion :
- Recursion is when a func() calls itself again and again
- In Recursion called & calling function are the same
- A **Termination** condition must be written to stop it

- Works in 2 Phases
    - Winding   // when the func() calls itself again and again
    - Unwinding // Stops when Termination condition arrives & returns value in reverse order

- All Recursive programs can be done with loops but not the other way around
