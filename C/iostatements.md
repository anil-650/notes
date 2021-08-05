# C Input Output statements :

```c
i/o statements
├── formatted i/o
│   ├── printf()
│   └── scanf()
└── un-formatted i/o
    ├── string i/o
    │   ├── gets()
    │   └── puts()
    └── char i/o
        ├── getch()
        ├── getche()
        ├── getchar()
        ├── putch()
        └── putchar()

```

> scanf() doesn't register input after space but gets() does

### Format specifiers

```c
%d - int
%f - float
%c - char
%s - string
%u - unsinged
%x - hexa
%ld - long
%lf - double
```

### Structure of formatted i/o

```c
    printf("control_string",prameter_string);
            |               |
        // string msg   // parameter_string is not always requried
        //  +
        // format specifier
        
    printf("enter 2 numbers");
            |
        // str msg


    printf("the sum of %d+%d=%d",a,b,a+b);
            |           |        |
        // str msg      |        |
                    // format    |
                    //specifier  |
                                 |
                            // parameter_string



    scanf("control_string",parameter_string);
            
    scanf("%d%d",&a,&b);    // & is used to bind the value
                            // both control_string & parameter_string requried

    // exception
    scanf("%s",a);          // %s doesn't need '&'
```


### Structure of un-formatted i/o
- char func()
- string func()

### char func() ( 1 char at a time)

- getchar()
- getch()
- getche()
- putchar
- putch()

##### getche() // instant result 
i.e. input console : a a

##### getch() // needed to be paired with putch()
i.e. getch : (no input display)
     putch : a

##### getchar() // results after enter key
i.e. input console : a (enter key)
                     a

##### putch() & putchar() // both work the same ,nothing much to know


### string func() 
- gets()
- puts()

```c
    char name[20]
    puts("Enter the name");
    gets(name);
    puts("The name is ");
    puts(name);

    // puts needs multipule statements 
    // you can't write both control_string & parameter_string togather
```
