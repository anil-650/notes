# Measurement of Central Tendency
- Mean
- Mode
- Median
  
## Mean:
- A.M (*Arithmetic*)
- G.M (*Geometric*)
- H.M (*Harmonic*)
- W.M (*Weighted*)
  
### A.M:
> *Case -1:* RAW Type data :-

let <var>x<sub>1</sub> ,x<sub>2</sub> ...........x<sub>n</sub></var> are the *n* number of data.

then 

*figure-1*

<!--     Latex formule for it
$$
\bar{x} = \frac{x_1 + x_2 + ......+x_n}{n}
$$
-->

![](./img/formula-am-mean1.svg)

> OR

*figure-1.1*



<!--   Latex formule for it
$$
\bar{x} = \frac{\sum^{n}_{i=1}}{n}
$$
-->

![](./img/formula-am-mean2.svg)

    example:
        5,7,9,10,15 find mean

*figure-1.1*

$$
\bar{x} = \frac{5+7+9+10+15}{5}= \frac{45}{5} = 9.2
$$

---

> *Case -2:* Frequency type data

- Frequency = no. of times

let <var>x<sub>1</sub> ,x<sub>2</sub> ...........x<sub>n</sub> numbers having f<sub>1</sub> ,f<sub>2</sub> ...........f<sub>n</sub></var> be coresponding frequencies

*figure-2*


| $x$             | $f$             | $xf$             |
|-----------------|-----------------|------------------|
|      $x_1$      |      $f_1$      |     $x_1 f_1$    |
|      $x_2$      |      $f_2$      |     $x_2 f_2$    |
|      $x_3$      |      $f_3$      |     $x_3 f_3$    |
|       $.$       |       $.$       |        $..$      |
|       $.$       |       $.$       |        $..$      |
|      $x_n$      |      $f_n$      |     $x_n f_n$    |

> *formula* :

*figure-2.1*


$$
\bar{x} = \frac{x_1 f_1+ x_2 f_2+ ......+x_n f_n}{n}
$$

> OR

*figure-2.2*

$$
\bar{x} = \frac{\sum^{n}_{i=1} fi xi}{\sum^{n}_{i=1} fi}
$$

<br><br>

    example:
        find x bar in following data

<br><br>

| x   | f | xf |
|-----|---|----|
| 5   | 3 | 15 |
| 7   | 4 | 28 |
| 8   | 5 | 40 |
| 9   | 2 | 18 |
| 10  | 1 | 10 |
| 15  | 2 | 30 |
|-----|---|----|
|total|17 | 141|

<br><br>

*figure-2.3 *

$$
\bar{x}=\frac{\sum fx}{\sum f}=\frac{141}{17}=8.29
$$

<br><br>

> *Case -3*: Interval / Group type data

- 2 types

    - **Continuous type of data**
    - **Discontinuous type of data**

### Continuous type of data

x<sub>1</sub>---x<sub>2</sub> 1st interval  
x<sub>2</sub>---x<sub>3</sub> 2nd interval  
x<sub>3</sub>---x<sub>4</sub> 3rd interval  
x<sub>4</sub>---x<sub>5</sub> 4th interval  
.......................................  
.......................................  
x<sub>n-1</sub>---x<sub>n</sub> n th interval  

<br><br>

> example :

| x     |
|-------|
|5---10 |
|10---15|
|15---20|
|20---25|

***Here x<sub>n</sub> -> upper limit of the 1st interval = lower limit of the 2nd interval***

> ***size of class  x<sub>2</sub> - x<sub>1</sub>***

here class size = 10 - 5 = 5

Let <var>x<sub>1</sub>-x<sub>2</sub>,
x<sub>2</sub>-x<sub>3</sub> --- x<sub>n-1</sub> - x<sub>n</sub></var> be the interval type of data having <var>f<sub>1</sub>, f<sub>2</sub>, f<sub>3</sub>, f<sub>4</sub>--- f<sub>n</sub> </var>

<br><br>

> formule:

*figure-3.0*


| x               | f         | M(middle value)               | fM          |
|-----------------|-----------|-------------------------------|-------------|
| $x_1 - x_2$     | $f_1$     | $\frac{x_1 + x_2}{2} = m_1 $  | $f_1 m_1$   |
| $x_2 - x_3$     | $f_2$     | $\frac{x_2 + x_3}{2} = m_2 $  | $f_2 m_2$   |
| $x_3 - x_4$     | $f_3$     | $\frac{x_3 + x_4}{2} = m_3 $  | $f_3 m_3$   |
| $x_{n-1} - x_n$ | $f_n$     | $\frac{x_{n-1} +x_n}{2}=m_n $ | $f_n m_n$   |
|                 | $\sum fi$ |                               | $\sum fiMi$ |

<br><br>

*figure-3.1*

$$
\bar{x}=\frac{f_1 M_1+f_2 M_2+f_3 M_3...+f_n M_n}{f_1+f_2+f_3...+f_n}
$$

<br>

*figure-3.2*

$$
\bar{x}=\frac{\sum fiMi}{\sum fi}
$$

> example:

| x       | f |
|---------|---|
| 5---10  | 2 |
| 10---15 | 3 |
| 15---20 | 2 |
| 20---25 | 4 |
| 25---30 | 1 |

> ans:

| x       | f |         M         | fM    |
|---------|---|-------------------|-------|
| 5---10  | 2 | (5+10)/2  = 7.5   | 13    |
| 10---15 | 3 | (10+15)/2 = 12.5  | 37.5  |
| 15---20 | 2 | (15+20)/2 = 17.5  | 35    |
| 20---25 | 4 | (20+25)/2 = 22.5  | 90    |
| 25---30 | 1 | (25+30)/2 = 25.5  | 25.5  |
|       |12 |                   | 205.0 |

*figure-4.3*

$$
\bar{x}=\frac{\sum fM }{\sum f} = \frac{ 205 }{12} =17.083 
$$

- try keeping precision to 3

### Discontinuous type of data

*figure-4*

| x               | f      |
|-----------------|--------|
| $x_1 - x_2$     | $f_1$  |
| $x_2 - x_3$     | $f_2$  |
| $x_5 - x_6$     | $f_3$  |
| $x_{n-1} - x_n$ | $f_n$  |

> Discontinuous type data must be converted to continuous type  
> which means to introduce an ***Adjusting Factor***  
> Then it should subtract from **lower** limit and add to the **upper** limit

*figure-4.2*

$$
AF = \frac{x_3 - x_2}{2}
$$


> example: 

| x     | f |
|-------|---|
| 6---10  | 2 |
| 11---15 | 3 |
| 16---20 | 1 |
| 21---25 | 2 |
| 26---30 | 3 |

> Af = (11-10)/2 = 0.5 // (lower limit of the 2nd interval - upper limit of the 1st interval)/2


| x     | f | x         |         M          | fM  |
|-------|---|-----------|--------------------|-----|
| 6---10  | 2 | 5.5-10.5  | (5.5+10.5)/2  = 8  | 16  |
| 11---15 | 3 | 10.5-15.5 | (10.5+15.5)/2 = 13 | 39  |
| 16---20 | 1 | 15.5-20.5 | (15.5+20.5)/2 = 18 | 18  |
| 21---25 | 2 | 20.5-25.5 | (20.5+25.5)/2 = 23 | 46  |
| 26---30 | 3 | 25.5-30.5 | (25.5+30.5)/2 = 28 | 84  |
|         |11 |           |                    | 203 |


*figure-4.4*

$\bar{x}= \frac{203}{11}= 18.454$


## Shortcut Method :

> RAW Type Data :

x<sub>1</sub>, x<sub>2</sub>, x<sub>3</sub>...........x<sub>n</sub> with n no. of data

> a = assumed mean
> d = x<sub>i</sub> - a

*figure-5*

$$\bar{x}= a + \frac{\sum d}{n}$$

    example:
        5, 7, 9, 11, 13, 15 find x bar with shortcut method

> Ans:

5, 7, 9, 11, 13, 15 // take an assumption of the minimum average

let a = 11


|  x | a  | d=x-a |
|----|----|-------|
| 5  | 11 |  -6   |
| 7  | 11 |  -4   |
| 9  | 11 |  -2   |
| 11 | 11 |   0   |
| 13 | 11 |   2   |
| 15 | 11 |   4   |

<br><br>

*figure-5.1*

$\sum d = -6$

<br>

*figure-5.2*

$\bar{x} = a + \frac{\sum d}{n}$

   $= 11 + \frac{-6}{6}$

   $= \frac{66-6}{6}$

   $= \frac{60}{6}$

   $= 10$

$\bar{x} = 10$

## Shortcut Method : Frequency type data

let <var>x<sub>1</sub> ,x<sub>2</sub> ...........x<sub>n</sub> numbers having f<sub>1</sub> ,f<sub>2</sub> ...........f<sub>n</sub></var> be respective frequencies

> then a = assumed mean

*figure-6*

$$
\bar{x} = \frac{\sum fd}{\sum f}
$$

${\footnotesize f = frequency }\\ {\footnotesize d = x-a }\\{\footnotesize a = assumed\ mean}$

> Ans: Let a = 11

| x  | f  | d = x-a | fd  |
|----|----|---------|-----|
| 5  | 3  | -6      | -18 |
| 7  | 4  | -4      | -16 |
| 9  | 1  | -2      | -2  |
| 11 | 3  |  0      |  0  |
| 12 | 2  |  1      |  2  |
| 15 | 1  |  2      |  2  |
|    | 14 |         | -32  |

*figure-6.1*

$$
\bar{x} = \frac{\sum fd}{\sum f}

= 11+\frac{-32}{14} \ 
= \frac{154-32}{14} \\ \ \\
= \frac{122}{14}    \\ \ \\
= 8.714
$$

## Shortcut Method : Group type data

*figure-7*

$$
\bar{x} = \frac{\sum fd}{\sum f} \, \times \, i {\footnotesize \qquad i=class\,size}
$$

| x       | f  | M                    | d _ M-a   | fd  |
|---------|----|----------------------|-----------|-----|
| 5---10  | 3  | (5+10)/2 = 7.5       | 7.5-12.5  | -15 |
| 10---15 | 4  | (10+15)/2 = 12.5 (A) | 12.5-12.5 | 0   |
| 15---20 | 2  | (15+20)/2 = 17.5     | 17.5-12.5 | 10  |
| 20---25 | 1  | (20+25)/2 = 22.5     | 22.5-12.5 | 10  |
|         | 10 |                      |           | 5   |

let 12.5 be assumed mean

*figure-7.1*

$$
\bar{x} = a +\frac{\sum fd}{\sum f} \, \times i \\ \ \\
= 12.5+\frac{5}{10} \times 5 \\ \ \\
= \frac{125+5}{10} \times 5 \\ \ \\
= \frac{13\cancel 0}{1\cancel 0} \times 5 \\ \ \\
= 65
$$


## Median :

***Median is the middle most value of the obervation***

suppose *n = no. of data*

<br><br>

*figure-8*

$if \quad n = odd$
$$
middle\ value =\frac{n+1^{th}}{2} \\ \ \\
M = \bigg(\frac{n+1}{2}\bigg)^{th}
$$

*figure-8.1*

$if \quad n = even$
$$
middle\ value =\frac{n^{th}}{2} \\ \ \\
m_1 = \frac{n}{2}^{th}          \\ \ \\
m_2 = \frac{n}{2}^{th} +1       \\ \ \\
M = \frac{m_1 + m_2}{2}^{th}
$$

    example:
        5, 3, 2, 6, 7, 8, 9

> Ans :

first sort them in either accending or decending order

2, 3, 5. 6, 7, 8, 9

n = 7

$$
M = \bigg(\frac{n+1}{2} \bigg)^{th}
= \bigg(\frac{7+1}{2} \bigg)^{th}
= \bigg(\frac{8}{2} \bigg)^{th}
= 4^{th} \\ \ \\
Md = 6
$$
