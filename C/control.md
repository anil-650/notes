# Control statements :
- Control statements enable us to specify the flow of program control; i.e, the order in which the instructions in a program must be executed. 
- They make it possible to make decisions, to perform tasks repeatedly or to jump from one section of code to another.

# Types of Control statements

```bash
Control statements
├── Selection / Sequence
│   ├── if
│   └── switch
├── Iteration / Loops
│   ├── for
│   ├── while
│   └── do while;
└── Jumping
    ├── break;
    ├── continue;
    └── goto;
```

## Selection / Sequence statements
- **if** - single branching statement check only one condition
- **switch** - multi currency statement check multiple conditions

### if
- simple if
- common if
- nested if 
- else if ladder

#### simple if
syntax:
```c
if(condition)       // no false statement
{true statement}

// OR
if(condition)       // if only one statement you may ommit {}
    true statement  // indentation nessary

```
#### simple if
syntax:
```c
if(condition)       // no false statement
{true statement}

// OR
if(condition)       // if only one statement you may ommit {}
    true statement  // indentation nessary

```

#### common if
syntax:
```c
if(condition)       
{true statement}
else
{false statement}

// OR
if(condition)       // if only one statement you may ommit {}
    true statement  // indentation nessary
else
    false statement

```
#### nested if
syntax:
```c
if(condition)       
{
    if(condition){
        true action
    }
    else{
        false action
    }
}
else
{
    if(condition){
        true action
    }
    else{
        false action
    }
}

```
