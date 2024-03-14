# C

## C Data Types

### int

- The int data type is used for variables that will store integers.
- Integers always take up 4 bytes of memory (32 bits). This means the range of values they can store is necessarily limited to 32 bits worth of information.

**Integer Range**
-32,768 32,767

### unsigned int

- unsigned is a qualifier that can be applied to certain types (including int), which effectively doubles the positive range of variables of that type, at the cost of disallowing any negative values.
- You’ll occasionally have use for unsigned variables in CS50.

**Unsigned Integer Range**
0 65,535

### char

- The char data type is used for variables that will store single characters.
- Characters always take up 1 byte of memory (8 bits). This means the range of values they can store is necessarily limited to 8 bits worth of information.
- Thanks to ASCII, we’ve developed a mapping of characters like A, B, C, etc… to numeric values in the positive side of this range.

**Character Range**
-128 127

### float

- The float data type is used for variables that will store floating-point values, also known as real numbers.
- Floating points values always take up 4 bytes of memory (32 bits).
- It’s a little complicated to describe the range of a float, but suffice it to say with 32 bits of precision, some of which might be used for an integer part, we are limited in how precise we can be.

**Float Range**
1.2E-38 3.4E+38(6 decimal places)

### double

- The double data type is used for variables that will store floating-point values, also known as real numbers.
- The difference is that doubles are double precision. They always take up 8 bytes of memory (64 bits).
- With an additional 32 bits of precision relative to a float, doubles allow us to be specify much more precise real numbers.

**Double Range**
2.3E-308 1.7E+308 (15 decimal places)

### void

- Is a type, but not a data type.
- Functions can have a void return type, which just means they don’t return a value.
- The parameter list of a function can also be void. It simply means the function takes no parameters.
- For now, think of void more as a placeholder for “nothing”. It’s more complex than that, but this should suffice for the better part of the course.

### bool

- The bool data type is used for variables that will store a Boolean value. More precisely, they are capable only of storing one of two values: true and false.

### string

- The string data type is used for variables that will store a series of characters, which programmers typically call a string.
- Strings include things such as words, sentences, paragraphs, and the like.

## Data types and size

| Data Type | Size (Bytes) |
| --------- | ------------ |
| bool      | 1            |
| int       | 4            |
| long      | 8            |
| float     | 4            |
| double    | 8            |
| char      | 1            |
| string    | ?            |

## Creating a variable

- To bring a variable into existence, you need simply specify the data type of the variable and give it a name.

```c
int number;
char letter;
```

- If you wish to create multiple variables of the same type, you specify the type name once, and then list as many variables of that type as you want.

```c
int height, width;
float sqrt2, sqrt3, pi;
```

- In general, it’s good practice to only declare variables when you need them.

## Using a variable

- After a variable has been declared, it’s no longer necessary to specify that variable’s type. (In fact, doing so has some unintended consequences!)

```c
int number;     // declaration
number = 17;  // assignment
char letter;     // declaration
letter = 'H';     // assignment
```

- If you are simultaneously declaring and setting the value of a variable (sometimes called initializing), you can consolidate this to one step.

```cpp
int number = 17;   // initializing
char letter = 'H';   // initializing
```

## C Operators:

Arithmetic Operators

- In order to manipulate and work with variables and values in C, we have a number of operators.
- In C, we can add (+), subtract (-), multiply (\*), and divide (/) numbers, as expected.

```c
int x = y + 1;
x = x * 5;
```

- We also have the modulus operator, ( % ) which gives us the remainder when the number on the left of the operator is divided by the number on the right.

```c
int m = 13 % 4;  // m is now 1
```

- C also provides a shorthand way to apply an arithmetic operator to a single variable.

```c
x = x * 5;
x *= 5;
```

- This trick works with all five basic arithmetic operators. C provides a further shorthand for incrementing or decrementing a variable by 1.

```c
x++;
x--;
```

## Boolean Expressions

- Boolean expressions are used in C for comparing values.
- All Boolean expressions in C evaluate to one of two possible values - true or false.
- We can use the result of evaluating a Boolean expression in other programming constructs such as deciding which branch in a conditional to take, or determining whether a loop should continue to run.
- Sometimes when working with Boolean expressions, we will use variables of type bool, but we don’t have to.
- In C, every nonzero value is equivalent to true, and zero is false.
- Two main types of Boolean expressions: logical operators and relational operators.

## Logical Operators

- Logical AND (&&) is true if and only if both operands are true, otherwise false.

| x     | y     | (x && y) |
| ----- | ----- | -------- |
| true  | true  | true     |
| true  | false | false    |
| false | true  | false    |
| false | false | false    |

- Logical OR (\|\|) is true if and only if at least one operand is true, otherwise false.

| x     | y     | (x \|\| y) |
| ----- | ----- | ---------- |
| true  | true  | true       |
| true  | false | true       |
| false | true  | true       |
| false | false | false      |

- Logical NOT (!) inverts the value of its operand.

| x     | !x    |
| ----- | ----- |
| true  | false |
| false | true  |

## Relational Operators

- These behave as you would expect them to, and appear syntactically similar to how you may recall them from elementary school.
  - Less than (x < y)
  - Less than or equal to (x <= y)
  - Greater than (x > y)
  - Greater than or equal to (x >= y)
- C also can test two variables for equality and inequality.
  - Equality (x == y)
  - Inequality (x != y)
- Be careful! It’s a common mistake to use the assignment operator ( = ) when you intend to use the equality operator ( == ).

## C Conditionals:

- Conditional expressions allow your programs to make decisions and take different forks in the road, depending on the values of variables or user input.
- C provides a few different ways to implement conditional expressions (also known as branches) in your programs, some of which likely look familiar from Scratch.

```c
if (boolean-expression)
{
    // Code to execute if the boolean-expression is true
}
```

- If the boolean-expression evaluates to true, all lines of code between the curly braces will execute in order from top-to-bottom.
- If the boolean-expression evaluates to false, those lines of code will not execute.

```c
if (boolean-expression)
{
    // Code to execute if the boolean-expression is true
}
else
{
    // Code to execute if the boolean-expression is false
}
```

- If the boolean-expression evaluates to true, all lines of code between the first set of curly braces will execute in order from top-to-bottom.
- If the boolean-expression evaluates to false, all lines of code between the second set of curly braces will execute in order from top-to-bottom.

```c
if (boolean-expression)
{
    // first branch
}
else if (boolean-expr2)
{
    // second branch
}
else if (boolean-expr3)
{
    // third branch
}
else
{
    // fourth branch
}
```

- In C, it is possible to create an if-else if-else chain.
- In Scratch, this required nesting blocks.
- As you would expect, each branch is mutually exclusive.

```c
if (boolean-expr1)
{
    // first branch
}
if (boolean-expr2)
{
    // second branch
}
if (boolean-expr3)
{
    // third branch
}
else
{
    // fourth branch
}
```

- It is also possible to create a chain of non-mutually exclusive branches.
- In this example, only the third and fourth branches are mutually exclusive. The else binds to the nearest if only.

```c
int x;
scanf("%u", &x);
switch(x)
{
    case 1:
        printf("One!\n");
        break;
    case 2:
        printf("Two!\n");
        break;
    case 3:
        printf("Three!\n");
        break;
    default:
        printf("Sorry!\n");
}
```

- C’s switch() statement is a conditional statement that permits enumeration of discrete cases, instead of relying on Boolean expressions.
- It’s important to `break;` between each case, or you will “fall through” each case (unless that is desired behavior).

```c
int x;
scanf(“%u”, &x);
switch(x)
{
	case 5:
		printf(“Five, ”);
	case 4:
		printf(“Four, ”);
	case 3:
		printf(“Three, ”);
	case 2:
		printf(“Two, “);
	case 1:
		printf(“One, “);
	default:
		printf(“Blast-off!\n”);
}
```

```c
int x;
if(expr)
{
	x = 5;
}
else
{
	x = 6;
}

int x = (expr) ? 5 : 6;
```

- These two snippets of code act identically.
- The ternary operator (`? :`) is mostly a cute trick, but is useful for writing trivially short conditional branches. Be familiar with it, but know that you won’t need to write it if you don’t want.

## C Loops:

```c
while(true)
{

}
```

- This is what we call an infinite loop. The lines of code between the curly braces will execute repeatedly from top to bottom until and unless we break out of it (as with a `break;` statement) or otherwise kill our program.

```c
while(boolean-expr)
{

}

```

- If the boolean-expr evaluates to true, all lines of code between the curly braces will execute repeatedly, in order from top-to-bottom, until boolean-expr evaluates to false.
- Somewhat confusingly, the behavior of the Scratch block is reversed, but it is the closest analog.

```c
do
{

}
while(boolean-expr);
```

- This loop will execute all lines of code between the curly braces once, and then, if the boolean-expr evaluates to true, will go back and repeat the process until boolean-expr evaluates to false.

```c
for (int i = 0; i < 10; i++)
{

}

```

- Syntactically unattractive, but for loops are used to repeat the body of a loop a specified number of times, in this example 10.
- The process undertaken in a for loop is:
  - The counter variable(s) (here, i) is set
  - The Boolean expression is checked.
    - If it evaluates to true, the body of the loop executes.
    - If it evaluates to false, the body of the loop does not execute.
  - The counter variable is incremented, and then the Boolean expression is checked again, etc.

### while

- Use when you want a loop to repeat an unknown number of times, and possibly not at all.

### do-while

- Use when you want a loop to repeat an unknown number of times, but at least once.

### for

- Use when you want a loop to repeat a discrete number of times, though you may not know the number at the moment the program is compiled.
