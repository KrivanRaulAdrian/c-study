# C

## Data Types

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

## Operators

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

## Conditionals

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

## Loops

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

## Functions

- So far, all the programs we've been writing in the course have been written inside of main().
- That hasn't been a problem yet, but it could be if our programs start to become unwieldy.
- C and nearly all langauges developed since allow us to write `functions`, sometimes also known as `procedures, methods`, or `subroutines`.
- What is a function?
  - A `black box` with a set of 0+ inputs and 1 output.
- Why call it a `black box`?

  - If we aren't writing the functions ourselves, we don't need to know the underlying implementation.

```c
mult(a, b):
    output a * b

    or

mult(a, b):
    set counter to 0
    repeat b times
        add a to counter
    output counter
```

- That's part of the contract of using functions. The behavior is typically predictable based on that name. That's why most functions have clear, obvious(ish) names, and are well-documented.

- Why use functions?

  - Organization
    - Functions help break up a complicated problem into more manageable subparts.
  - Simplification
    - Smaller components tend to be easier to design, implement, and debug.
  - Reusability
    - Functions can be recycled; you only need to write them once, but can use them as often as you need!

- Function Declarations

  - The first step to creating a function is to declare it. This gives the compiler a heads-up that a user-written functions appears in the code.
  - Function declarations should always go atop your code, before you begin writing main().
  - There is a standard form that every function declaration follows.

```c
return-type name(argument-list);
```

- The `return-type` is what kind of variable the function will output.
- The `name` is what you want to call your function.
- The `argument-list` is the comma-separated set of inputs to your function, each of which has a type and a name.

- A function to add two integers.

```c
int add_two_ints(int a, int b);
```

- The sum of two integers is going to be an integer as well.
- Given what this function does, make sure to give it an appropriate name.
- There are two inputs to this function, and we need to give a name to each of them for purpose of the function. There's nothing important about these inputs as far as we know, so giving them simple names is okay.

- A function to multiply two floating point numbers.

```c
float mult_two_reals(float x, float y);

double mult_two_reals(double x, double y);
```

- The product of two floating point numbers is also a floating point number.
- Let's be sure to give this a relevant name.
- Again, the names of these particular inputs don't seem to be important, so we can call them anything simple.

- Function Definitions

  - The second step to creating a function is to define it. This allows for predictable behavior when the function is called with inputs.
  - Let's try to define mult_two_reals(), from a moment ago.

- A function definition looks `almost` identical to a function declaration, with a small change.

```c
float mult_two_reals(float x, float y);

float mult_two_reals(float x, float y)
{
    float product = x * y;
    return product;
}

float mult_two_reals(float x, float y)
{
    return x * y;
}
```

```c
int add_two_ints(int a, int b);

int add_two_ints(int a, int b)
{
    int sum;      // declare variable
    sum = a + b;  //  calculate the sum
    return sum;   // give result back
}

int add_two_ints(int a, int b)
{
    int sum = a + b; // calc variable
    return sum;      // give result back
}

int add_two_ints(int a, int b)
{
    return a + b;
}
```

- Function calls

  - Now that you've created a function, time to use it!
  - To call a function, simply pass it appropriate arguments and assign its return value to something of the correct type.
  - To ilustrate this, let's have a look at adder-1c.c

```c
#include <stdio.h>

int add_two_ints(int a, int b);

int main(void)
{
    int x;
    printf("Give me an integer: ");
    while(scanf("%i", &x) != 1)
    {
        printf("Invalid input. Please enter a number: ");
        while(getchar() != '\n');
    }

    int y;
    printf("Give me another integer: ");
    while(scanf("%i", &y) != 1)
    {
        printf("Invalid input. Please enter a number: ");
        while(getchar() != '\n');
    }

    int z = add_two_ints(x, y);

    printf("The sum of %i and %i is %i!\n", x, y, z);
}

int add_two_ints(int a, int b)
{
    int sum = a + b;
    return sum;
}
```

- Function Miscellany

  - Recall from our discussion of data types that functions can sometimes take no inputs. In that case, we declare the function as having a void argument list.
  - Recall also that functions sometimes do not have an output. In that case, we declare the function as having a void return type.

```c
bool valid_triangle(float x, float y, float z);

bool valid_triangle(float x, float y, float z)
{
    if (x <= 0 || y <= 0 || z <= 0)
    {
        return false;
    }

    if ((x + y <= z) || (x + z <= y) || (y + z <= x))
    {
        return false;
    }

    return true;
}
```

## Variable Scope

- `Scope` is a characteristic of a variable that defines from which functions that variable may be accessed.
  - `Local variables` can only be accessed within the functions in which they are created.
  - `Global variables` can be accessed by any function in the program.
- So far in the course, you've almost assuredly been working only with local variables.

```c
int main(void)
{
    int result = triple(x);
}
int triple(int x)
{
    return x * 3;
}
```

- Here, `x` is `local` to the function triple(). No other function can refer to that variable, not even main(). `result` is `local` to main().
- Global variables exist too. If a variable is declared outside of all functions, `any` function may refer to it.

```c
#include <stdio.h>

float global = 0.5050;

int main(void)
{
    triple();
    printf("%f\n", global);
}

void triple(void)
{
    global *= 3;
}
```

- Why does this distinction matter? For the most part, local variables in C are `passed by value` in function calls.
- When a variable is passed by value, the `callee` receives a copy of the passed variable, not the variable itself.
- That means that the variable in the `caller` is unchanged unless overwritten.
- No effect on foo.

```c
int main(void)
{
    int foo = 4;
    triple(foo);
}

int triple(int x)
{
    return x *= 3;
}
```

- Overwrittes foo.

```c
int main(void)
{
    int foo = 4;
    foo = triple(foo);
}

int triple(int x)
{
    return x *= 3;
}
```

- Things can get particularly insidious if the same variable name appears in multiple functions, which is perfectly okay as long as the variables exist in different scopes.

## Arrays

- Arrays are a fundamental `data structure`, and they are extremely useful!
- We use arrays to hold values of the same type at contiguous memory locations.
- One way to analogize the notion of arrays is to think of your local post office, which usually has a large bank of post office boxes.

| Arrays                                                                                           | Post Office Boxes                                                                                         |
| ------------------------------------------------------------------------------------------------ | --------------------------------------------------------------------------------------------------------- |
| An `array` is a block of contiguous space in memory                                              | A `mail bank` is a large space on the wall of the post office...                                          |
| ...which has been partitioned into small, identically-sized blocks of space called `elements`... | ...which has been partitioned into small, identically-sized blocks of space called `post office boxes`... |
| ...each of which can store a certain amount of `data`...                                         | ...each of which can hold a certain amount of `mail`...                                                   |
| ...all of the same data type such as `int` or `char`...                                          | ...all of a similar type such as `letters` or `small packages`...                                         |
| ...and which can be accessed directly by an `index`.                                             | ...and which can be accessed directly by a `mailbox number`.                                              |

- In C, the elements of an array are indexed starting from 0.
  - This is one of the major reasons we count from zero!
- If an array consists of `n` elements, the first element is located at index 0. The last element is located at index (`n`-1).
- C is very lenient. It will not prevent you from going "out of bounds" of your array;be careful!
- Array declarations

```c
type name[size];

int student_grades[40];

double menu_prices[8];
```

- The `type` is what kind of variable each element of the array will be.
- The `name` is what you want to call your array.
- The `size` is how many elements you would like your array to contain.

- If you think of a single element of an array of type `data-type` the same as you would any other variable of type `data-type`(which, effectively, it is) then all the familiar operations make sense.

```c
bool truthtable[10];

truthtable[2] = false;
if (truthtable[7] == true)
{
    printf("TRUE\n");
}
truthtable[10] = true;
```

- When declaring and initializing an array simultaneously, there is a special syntax that may be used to fill up the array with its starting values.

```c
// instantiation syntax
bool truthtable[3] = {false, true, true};

// individual element syntax
bool truthtable[3];
truthtable[0] = false;
truthtable[1] = true;
truthtable[2] = true;
```

- Arrays can consist of more than a single dimension. You can have as many size specifiers as you wish.

```c
bool battleship[10][10];
```

- You can choose to think of this as either a 10x10 grid of cells.
  - In memory though, it's really just a 100-element one-dimensional array.
  - Multi-dimensional arrays are great `abstractions` to help visualize game boards or other complex representations.
- While we can treat individual elements of arrays as variables, we cannot treat entire arrays themselves as variables.
- We cannot, for instance, assign one array to another using the assignment operator. That is not legal C.
- Instead, we must use a loop to copy over the elements one at a time.

```c
int foo[5] = {1, 2, 3, 4, 5};
int bar[5];

for(int j = 0; j < 5; j++)
{
    bar[j] = foo[j];
}
```

- Recall that most variables in C are `passed by value` in function calls.
- Arrays do not follow this rule. Rather, they are `passed by reference`. The callee receives the actual array, not a `copy` of it.

## Comannd-Line Arguments

- So far, all of your programs have begun pretty much the same way.

```c
int main(void)
{

}
```

- Since we've been collecting user input through in-program prompts, we haven't needed to modify this declaration of main().
- If we want the user to provide data to our program before the program starts running, we need a new form.
- To collect so called `command-line arguments` from the user, declare main as:

```c
int main(int argc, char *argv[])
{

}
```

- These two special arguments enable you to know what data the user provided at the command line and how much data they provided.
- argc (argument count)
  - This integer-type variable will store the `number` of command-line arguments the user typed when the program was executed.

| command            | argc |
| ------------------ | ---- |
| ./greedy           | 1    |
| ./greedy 1024 cs50 | 3    |
