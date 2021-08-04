# Scope of the variable:
- Basically refers to what's the life time of the variable once it's declared 

1. Local        
    - only available inside functions
    - initiated to *Garbage*

1. Global       
    - available inside the program 
    - initiated to 0

1. Static       
    - initiated only once 
    - visible to the function
    - initiated to 0
    - value increments over the programs execution
    - syntax : static int var; int static var;

# Storage :
- All the variables in C are stored in a physical location; in CPU registers & RAM (main memory)

#### 4 types of Storage Class :

Storage class   keywords

1. Automatic    auto
1. Static       static
1. Register     register
1. External     extrn

### Automatic Storage Class
> p.s. init = initiated

- By default Automatic S.C is assigned if not specified

> life             : as long as the code block exist
> storage location : RAM      keyword : auto
> scope            : Local    init    : garbage

### Static Storage Class
- Can be used within a func() or a file
- C only allows it's use only on inside of func()
- C++ allows both outside and inside usage
- While having permanent values it's only visible to the fucn()

> life             : as long as the code block exist
> storage location : RAM      keyword : static
> scope            : Local    init    : 0

### Register Storage Class
- *'register'* stores values in CPU registers
- faster than RAM
- Not all values are eligible for storing in CPU registers
- If CPU is out of *register space* it will move into **auto** class

> life             : as long as the code block exist
> storage location : CPU register      keyword : register
> scope            : Local    init    : garbage

### External Storage Class
- variable outside of the func() is taken as External 

> life             : as long as the program exist
> storage location : RAM      keyword : extrn
> scope            : Global    init    : 0


