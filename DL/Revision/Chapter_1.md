# Character Code
+ ASCII is used
	+ is an Alpha numeric code
	+ is coded with 7 bits

***Divided into 4 categories***
### Control	Character
+ Are non printable characters
+ used to send commands to the computer
i.e `printf`,`scanf`

### Special	Character
+ Are printable characters except numbers and letters
+ Have special functions i.e `+`,`*` etc

### Number	Character
+ Are printable numbers i.e 0-9

### Letter	Character
+ Are Letters both small and big i.e a-z & A-Z

# Encoding
+ When some specific group of symbols are used to represent a letter or
  numbers ; it's called ***Encoding***.
+ The value of said symbols are called the ***Encoding value*** 
+ Everything is stored in bits
+ When ever you use binary to store ,transfer ,represent data it's
  called binary encoding.

## Advantages
+ Binary is compatible
+ All digital systems use binary
+ **Digital** circuit is used to implement 0,1 thus easy to implement

# Classification of Binary code
1. Weighted code
1. Non-Weighted code
1. BCD (Binary Coded Decimal)
1. Alphanumeric code

## Weighted Codes

+ Weighted binary codes are those binary codes which obey the positional
  weight principle.
+ Each position of the number represents a specific weight.
+ Several systems of the codes are used to express the decimal digits 0
  through 9.
+ In these codes each decimal digit is represented by a group of four
  bits.

```
ex:24

Decimal	----------->	2  4
					   /    \
Position--->	8+4+2+1      8+4+2+1
weight			   v			v
code	---->	0 0 1 0      0 1 0 0

```

## Non-Weighted Code

+ In this type of binary codes, the positional weights are not assigned.
+ The example of non-weighted codes are *Excess-3* code and *Gray* code.

### Excess-3 code

+ The Excess-3 code is also called as XS-3 code. 
+ It is non weighted code used to express decimal numbers. 
+ The Excess-3 code words are derived from the 8421 BCD code words
  adding (0011)2 or (3)10 to each code word in 8421.

  The excess-3 codes are obtained as follows -

```
								  ADD
  Decimal Number------>8421 BCD---0011--------> Excess-3
								  
```

