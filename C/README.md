# CS50 C

## Data Types in C

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

## Data types and size in C

| Data Type | Size (Bytes) |
| --------- | ------------ |
| bool      | 1            |
| int       | 4            |
| long      | 8            |
| float     | 4            |
| double    | 8            |
| char      | 1            |
| char\*    | 4 or 8       |

## Creating a variable in C

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

## Using a variable in C

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

## Operators in C

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

## Boolean Expressions in C

- Boolean expressions are used in C for comparing values.
- All Boolean expressions in C evaluate to one of two possible values - true or false.
- We can use the result of evaluating a Boolean expression in other programming constructs such as deciding which branch in a conditional to take, or determining whether a loop should continue to run.
- Sometimes when working with Boolean expressions, we will use variables of type bool, but we don’t have to.
- In C, every nonzero value is equivalent to true, and zero is false.
- Two main types of Boolean expressions: logical operators and relational operators.

## Logical Operators in C

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

## Relational Operators in C

- These behave as you would expect them to, and appear syntactically similar to how you may recall them from elementary school.
  - Less than (x < y)
  - Less than or equal to (x <= y)
  - Greater than (x > y)
  - Greater than or equal to (x >= y)
- C also can test two variables for equality and inequality.
  - Equality (x == y)
  - Inequality (x != y)
- Be careful! It’s a common mistake to use the assignment operator ( = ) when you intend to use the equality operator ( == ).

## Conditionals in C

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

## Loops in C

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

## Functions in C

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

## Variable Scope in C

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

## Arrays in C

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

## Comannd-Line Arguments in C

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

- argv (argument vector)
  - This array of characters stores, one char per element, the actual text the user typed at the command-line when the program was executed.
  - The first element of argv is always found at argv[0]. The last element of argv is always found at argv[argc-1].
  - Let's assume the user executes the greedy program as follows
    ./greedy 1024 cs50

| argv indices | argv contents |
| ------------ | ------------- |
| argv[0]      | "./greedy"    |
| argv[1]      | "1024"        |
| argv[2]      | "cs50"        |
| argv[3]      | ???           |

## Linear Search in C

- In linear search, the idea of the algorithm is to iterate across the array from left to right, searching for a specified element.

In pseudocode:

- Repeat, starting at the first element:

  - If the first element is what you're looking for (the target), stop.
  - Otherwise, move to the next element.

- `Worst-case scenario`: We have to look through the entire array of `n` elements, either because the target element is the last element of the array or doesn't exist in the array at all.
- `Best-case scenario`: The target element is the first element of the array, and so we can stop looking immediately after we start.

- `Worst-case scenario`: O(n)
- `Best-case scenario` : Ω(1)

## Binary Search in C

- In binary search, the idea of the algorithm is to divide and conquer, reducing the search area by half each time, trying to find a target number.
  - In order to leverage this power however, our array must first be sorted, else we cannot make assumptions about the array's contents.

In pseudocode:

- Repeat until the (sub)array is of size 0:

  - Calculate the middle point of the current (sub)array.
  - If the target is at the middle,stop.
  - Otherwise, if the target is less than what's at the middle, repeat, changing the end point to be just to the left of the middle.
  - Otherwise, if the target is greater than what's at the middle, repeat, changing the start point to be just to the right of the middle.

- `Worst-case scenario`: We have to divide a list of n elements in half repeatedly to find the target element, either because the target element will be found at the end of the last division or doesn't exist in the array at all.
- `Best-case scenario`: The target element is at the midpoint of the full array, and so we can stop looking immediately after we start.

- `Worst-case scenario`: O(log n)
- `Best-case scenario`: Ω(1)

## Bubble Sort in C

- In bubble sort, the idea of the algorithm is to move higher valued elements generally towards the right and lower value elements generally to the left.

In pseudocode:

- Set swap counter to a non-zero value
- Repeat until the swap counter is 0:

  - Reset swap counter to 0
  - Look at each adjacent pair
    - If two adjacent elements are not in order, swap them and add one to the swap counter

- `Worst-case scenario`: The array is in reverse order; we have to `bubble` each of the `n` elements all the way across the array, and since we can only fully bubble one element into position per pass, we must do this `n` times.
- `Best-case scenario`: The array is already perfectly sorted, and we make no swaps on the first pass.

- `Worst-case scenario`: O(n^2)
- `Best-case scenario`: Ω(n)

## Selection Sort in C

- In selection sort, the idea of the algorithm is to find the smallest unsorted element and add it to the end of the sorted list.

In pseudocode:

- Repeat until no unsorted elements remain:

  - Search the unsorted part of the data to find the smallest value
  - Swap the smallest found value with the first element of the unsorted part

- `Worst-case scenario`: We have to iterate over each of the `n` elements of the array (to find the smallest unsorted element) and we must repeat this process `n` times, since only one element gets sorted n each pass.
- `Best-case scenario`: Exactly the same! There's no way to guarantee the array is sorted until we go through this process for all the elements.

- `Worst-case scenario`: O(n^2)
- `Best-case scenario`: Ω(n^2)

## Recursion in C

- We might describe an implementation of an algorithm as being particularly `elegant` if it solves a problem in a way that is both interesting and easy to visualize.
- The technique of `recursion` is a very common way to implement such an `elegant` solution.
- The definition of a recursive function is one that, as part of its execution, invokes itself.

- The factorial function (`n!`) is defined over all positive integers.
- `n!` equals all of the positive integers less than or equal to `n`, multiplied together.
- Thinking in terms of programming, we'll define the mathematical function `n!` as fact(n).

```c
fact(1) = 1
fact(2) = 2 * 1
fact(3) = 3 * 2 * 1
fact(4) = 4 * 3 * 2 * 1
fact(5) = 5 * 4 * 3 * 2 * 1
...

fact(n) = n * fact(n - 1)
```

- This forms the basis for a `recursive definition` of the factorial function.
- Every recursive function has two cases that could apply, given any input.
  - The `base case`, which when triggered will terminate the recursive process.
  - The `recursive case`, which is where the recursion will actually occur.

```c
fact(1) = 1
fact(2) = 2 * fact(1)
fact(3) = 3 * fact(2)
fact(4) = 4 * fact(3)
fact(5) = 5 * fact(4)
...
```

```c
int fact(int n)
{
    // base case
    if (n == 1)
    {
        return 1;
    }
    else
    {
    // recursive case
    return n * fact(n - 1);
    }
}
```

```c
int fact(int n)
{
    if (n == 1)
        return 1;
    else
        return n * fact(n - 1);
}
```

- In general, but not always, recursive functions replace loops in non-recursive functions.

```c
// Recursion
int fact(int n)
{
    if (n == 1)
        return 1;
    else
        return n * fact(n - 1);
}

// Iteration
int fact2(int i)
{
    int product = 1;
    while (n > 0)
    {
        product *= n;
        n--;
    }
    return product;
}
```

- It's also possible to have more than one base or recursive case, if the program might recurse or terminate in different ways, depending on the input being passed in.

- `Multiple base cases`: The Fibonacci number sequence is defined as follows:
  - The first element is 0.
  - The second element is 1.
  - The `n^th` element is the sum of the `(n-1)^th` and `(n-2)^th` elements.
- `Multiple recursive cases`: The Collatz conjecture.
- The Collatz conjecture applies to positive integers and speculates that it is always possible to get `back to 1` if you follow these steps:
  - If `n` is 1, stop.
  - Otherwise, if `n` is even, repeat this process on `n/2`.
  - Otherwise, if `n` is odd, repeat this process n `3n+1`.

## Merge Sort in C

- In merge sort, the idea of the algorithm is to sort smaller arrays and then combine those arrays together (merge them) in sorted order.
- Merge sort leverages something called `recursion`.

In pseudocode:

- Sort the left half of the array (assuming `n` > 1)
- Sort the right half of the array (assuming `n` > 1)
- Merge the two halves together

- `Worst-case scenario`: We have to split `n` elements up and then combine them, effectively doubling the sorted subarrays as we build them up. (combining sorted 1-element arrays into 2-element arrays, combining sorted 2-element arrays into 4-element arrays...)
- `Best-case scenario`: The array is already perfectly sorted. But we still have to split and recombine it back together with this algorithm.

- `Worst-case scenario`: O(n log n)
- `Best-case scenario`: Ω(n log n)

## Hexadecimal in C

- Most Western cultures use the decimal system, aka `base-10`, to represent numeric data.

```c
0 1 2 3 4 5 6 7 8 9
```

- As we know, computers use the binary system, aka `base-2`, to represent numeric (and indeed all data).

```c
0 1
```

- As computer scientists, it's useful to be able to express data the same way the computer does.
- The problem, of course, is that trying to parse a huge chain of 0s and 1s can be quite difficult.

- The `hexadecimal system`, aka `base-16`, is a much more concise way to express the data on a computer's system.

```c
0 1 2 3 4 5 6 7 8 9 A B C D E F
```

- Hexadecimal makes this mapping easy because a group of four binary digits (bits) has 16 different combinations, and each of those combinations maps to a single hexadecimal digit.

| Decimal | Binary | Hexadecimal |
| ------- | ------ | ----------- |
| 0       | 0000   | 0x0         |
| 1       | 0001   | 0x1         |
| 2       | 0010   | 0x2         |
| 3       | 0011   | 0x3         |
| 4       | 0100   | 0x4         |
| 5       | 0101   | 0x5         |
| 6       | 0110   | 0x6         |
| 7       | 0111   | 0x7         |
| 8       | 1000   | 0x8         |
| 9       | 1001   | 0x9         |
| 10      | 1010   | 0xA         |
| 11      | 1011   | 0xB         |
| 12      | 1100   | 0xC         |
| 13      | 1101   | 0xD         |
| 14      | 1110   | 0xE         |
| 15      | 1111   | 0xF         |

- Just like binary has place values (1, 2 ,4, 8...) and decimal does too (1, 10, 100, 1000...), so does hexadecimal.

- To convert a binary number to hexadecimal, group four binary digits (bits) together from right to left.

```c
0100 0110 1010 0010 1011 1001 0011 1101 = 0x46A2B93D
```

## Pointers in C

- Pointers provide an alternative way to pass data between functions.
  - Recall that up to this point, we have passed all data `by value`, with one exception.
  - When we pass data by value, we only pass a copy of that data.
- If we use pointers instead, we have the power to pass the actual variable itself.

  - That means that a change that is made in one function `can` impact what happens in a different function.
  - Previously, it wasn't possible!

- Every file on your computer lives on your disk drive, be it a hard disk drive (HDD) or a solid-state drive (SSD).
- Disk drivers are just storage space; we can't directly work there. Manipulation and use of data can only take place in RAM, so we have to move data there.
- Memory is basically a huge array of 8-bit wide bytes.
  - 512 MB, 1GB, 2GB, 4GB...

| Data Type | Size (Bytes) |
| --------- | ------------ |
| int       | 4            |
| char      | 1            |
| float     | 4            |
| double    | 8            |
| long long | 8            |
| char\*    | 4 or 8       |

- Back to this idea of memory as a big array of byte-sized cells.
- Recall from our discussion of arrays that they not only are useful for storage of information but also for so-called `random access`.
  - We can access individual elements of the array by indicating which index location we want.
- Similarly, each location in memory has an `address`.
- There's only one critical thing to remember as we start working with pointers:
  `POINTERS ARE JUST ADDRESSES`

```c
int k;    // ------|
          //       |-------->  k = 5 ---------------------|
k = 5;    // ------|                                      |                    points
          //                                              | -----------> pk -----------> k
int *pk;  // ------|                                      |
          //       |--------> pk = 0x80C74820 ------------|
pk = &k;  // ------|
```

- A `pointer`, then, is a data item whose
  - `value` is a memory address
  - `type` describes the data located at that memory address
- As such, pointers allow data structures and/or variables to be shared among functions.
- Pointers make a computer environment more like the real world.

- The simplest pointer available to us in C is the NULL pointer.
  - As you might expect, this pointer points to nothing (a fact which can actually come in handy! )
- When you create a pointer and you don't set its value immediately, you should `always` set the value of the pointer to NULL.
- You can check whether a pointer is NULL using the equality operator (`==`).

- Another easy way to create a pointer is to simply `extract` the address of an already existing variable. We can do this with the address extraction operator (`&`).

- If `x` is an int-type variable, then `&x` is a pointer-to-int whose value is the address of `x`.
- If `arr` is an array of doubles, then `&arr[i]` is a pointer-to-double whose value is the address of the `i^th` element of `arr`.

  - An array's name, then, is actually just a pointer to its first element - you've been working with pointers all along!

- The main purpose of a pointer is to allow us to modify or inspect the location to which it points.
  - We do this by `dereferencing` the pointer.
- If we have a pointer-to-char called `pc`, then `*pc` is the data that lives at the memory address stored inside the variable `pc`.

- Used in this context, `*` is known as the `dereference operator`.
- It `goes to the reference` and accesses the data at that memory location, allowing you to manipulate it at will.
- This is just like visiting your neighbor. Having their address isn't enough. You need to `go to` the address and only then can you interact with them.

- Can you guess what might happen if we try to dereference a pointer whose value is NULL?

  `Segmentation fault`

- Surprisingly, this is actually good behavior! It defends against accidental dangerous manipulation of unknown pointers.
  - That's why we recommend you set your pointers to NULL immediately if you aren't setting them to a known, desired value.

```c
int *p;
```

- The value of `p` is an address.
- We can dereference `p` with the `*` operator.
- If we do, what we'll find at that location is an int.

- One more annoying thing with those \*s. They're an important part of both the type name `and` variable name.
  - Best illustrated with an example.

```c
int *px, py, pz;    // Wrong!
int *pa, *pb, *pc   // Correct!
```

## Defining Custom Data Types in C

- The C keyword typedef provides a way to create a shorthand or rewritten name for data types.
- The basic idea is to first define a type in the normal way, then alias it to something else.

```c
typedef <old name> <new name>;

typedef unsigned char byte;
typedef char* string;
```

```c
struct car
{
  int year;
  char model[10];
  char plate[7];
  int odometer;
  double engine_size;
};

typedef struct car car_t;
```

or

```c
typedef struct car
{
  int year;
  char model[10];
  char plate[7];
  int odometer;
  double engine_size;
}

car_t;
```

```c
// variable declaration
struct car mycar;

// field accessing
mycar.year = 2011;
mycar.plate = "CS50";
mycar.odometer = 50505;
```

or

```c
// variable declaration
car_t mycar;

// field accessing
mycar.year = 2011;
mycar.plate = "CS50";
mycar.odometer = 50505;
```

## Dynamic Memory Allocation in C

- We can use pointers to get access to a block of `dynamically-allocated memory` at runtime.
- Dynamically allocated memory comes from a pool of memory known as the `heap`.
- Prior to this point, all memory we've been working with has been coming from a pool of memory known as the `stack`.

- We get this dynamically-allocated memory by making a call to the C standard library function malloc(), passing as its parameter the number of bytes requested.
- After obtaining memory for you (if it can), malloc() will return a pointer to that memory.
- What if malloc() `can't` give you memory? It'll hand you back NULL.

```c
// statically obtain an integer
int x;

// dynamically obtain an integer
int *px = malloc(sizeof(int));
```

```c
// get an integer from the user
int x;
printf("x: ");
scanf("%d", &num);

// array of floats on the stack
float stack_array[x];

// array of floats on the heap
float *heap_array = malloc(x * sizeof(float));
```

- Here's the trouble: Dynamically-allocated memory is not automatically returned to the system for later use when the function in which it's created finishes execution.
- Failing to return memory back to the system when you're finished with it results in a `memory leak` which can compromise your system's performance.
- When you finish working with dynamically-allocated memory, you must free() it.

```c
char *word = malloc(50 * sizeof(char));

// do stuff with word

// no we're done working with that block
free(word);
```

- Three golden rules:
  1. Every block of memory that you `malloc()` must subsequently be `free()`d.
  2. Only memory that you `malloc()` should be `free()`d.
  3. Do not `free()` a block of memory more than once.

## Call Stack in C

- When you call a function, the system sets aside space in memory for that function to do its necessary work.
  - We frequently call such chunks of memory `stack frames` or `function frames`
- More than one function's stack frame may exist in memory at a given time. If main() calls move(), which then calls direction(), all three functions have open frames.

- These frames are arranged in a `stack`. The frame for the most-recently called function is always on the top of the stack.
- When a new function is called, a new frame is `pushed` onto the top of the stack and becomes the active frame.
- When a function finishes its work, its frame is `popped` off of the stack, and the frame immediately below it becomes the new, active, function on the top of the stack. This function picks up immediately where it left off.

```c
int fact(int n)
{
  if (n == 1)
  {
    return 1;
  }
  else
  {
    return n * fact(n - 1);
  }

  int main(void)
  {
    printf("%u\n", fact(5));
  }
}
```

## File Pointers in C

- The ability to read data from and write data to files is the primary means of storing `persistent data`, data that does not disappear when your program stops running.
- The abstraction of files that C provides is implemented in a data structure known as `FILE`.

  - Almost universally when working with files, we will be using pointers to them, `FILE*`.

- The file manipulation functions all live in `stdio.h`.
  - All of them except `FILE*` as one of their parameters, except for the function fopen(), which is used to get a file pointer in the first place.
- Some of the most common file input/output (I/O) functions that we'll be working with are:

```c
fopen(), fclose(), fgetc(), fputc(), fread(), fwrite()
```

### - fopen()

- Opens a file and returns a file pointer to it.
- Always check the return value to make sure you don't get back NULL.

```c
FILE *ptr = fopen(<filename>, <operation>);

FILE *ptr1 = fopen("file1.txt", "r"); // read
FILE *ptr2 = fopen("file1.txt", "w"); // write
FILE *ptr3 = fopen("file1.txt", "a"); // append
```

### - fclose()

- Closes the file pointed to by the given file pointer.

```c
fclose(<file pointer>);

fclose(ptr1);
```

### - fgetc()

- Reads and returns the next character from the file pointed to.
- Note: The operation of the file pointer passed in as a parameter must be `"r"` for read, or you will suffer an error.

```c
char ch = fgetc(<file pointer>);

char ch = fgetc(ptr1);
```

- The ability to get single characters from files, if wrapped in a loop, means we could read all the characters from a file and print them to the screen, one-by-one, essentially.

```c
char ch;
while((ch = fgetc(ptr)) != EOF)
  printf("%c", ch);
```

- We might put this in a file called cat.c, after the Linux command `"cat"` which essentially doest just this.

### - fputc()

- Writes or appends the specified character to the pointed-to file.
- Note: The operation of the file pointer passed in as a parameter must be `"w"` for write or `"a"` for append, or you will suffer an error.

```c
fputc(<character>, <file pointer>);

fputc('A', ptr2);
fputc('!', ptr3);
```

- Now we can read characters from files and write characters to them. Let's extend our previous example to copy one file to another, instead of printing to the screen.

```c
char ch;
while((ch = fgetc(ptr)) != EOF)
  fputc(ch, ptr2);
```

- We might put this in a file called `cp.c`, after the Linux command `"cp"` which essentially does just this.

### - fread()

- Reads `<qty>` units of size `<size>` from the file pointed to and stores them in memory in a buffer (usually an array) pointed to by `<buffer>`.
- Note: The operation of the file pointer passed in as a parameter must be `"r"` for read, or you will suffer an error.

```c
fread(<buffer>, <size>, <qty>, <file pointer>);

int arr[10];
fread(arr, sizeof(int), 10, ptr);

double *arr2 = malloc(sizeof(double) * 80);
fread(arr2, sizeof(double), 80, ptr);

char c;
fread(&c, sizeof(char), 1, ptr);
```

### - fwrite()

- Writes `<qty>` units of size `<size>` to the file pointed to by reading them from a buffer (usually an array) pointed to by `<buffer>`.
- Note: The operation of the file pointer passed in as a parameter must be `"w"` for write or `"a"` for append, or you will suffer an error.

```c
fwrite(<buffer>, <size>, <qty>, <file pointer>);

int arr[10];
fwrite(arr, sizeof(int), 10, ptr);

double *arr2 = malloc(sizeof(double) * 80);
fwrite(arr2, sizeof(double), 80, ptr);

char c;
fwrite(&c, sizeof(char), 1, ptr);
```

- Lots of other useful functions abound in `stdio.h`, here are some.

| Function  | Description                                                     |
| --------- | --------------------------------------------------------------- |
| fgets()   | Reads a full string from a file.                                |
| fputs()   | Writes a full string to a file.                                 |
| fprintf() | Writes a formatted string to a file.                            |
| fseek()   | Allows you to rewind or fast-forward within a file.             |
| ftell()   | Tells you at what (byte) position you are within a file.        |
| feof()    | Tells you whether you have read to the end of a file.           |
| ferror()  | Indicates whether an error has occurred in working with a file. |

## Data Structures Summary in C

- By this point we've examinated four different ways to store sets of data:

  - Arrays
  - Linked lists
  - Hash tables
  - Tries

- There are even more variations on these (trees and heaps, quite similar to tries, stacks and queues quite similar to arrays or linked lists, etc.) but this will generally cover most of what we're looking at in C.

- Arrays

  - Insertion is bad - lots of shifting to fit an element in the middle
  - Deletion is bad - lots of shifting after removing an element
  - Lookup is great - random access, constant time
  - Relatively easy to sort
  - Relatively small size-wise
  - Stuck with a fixed size, no flexibility

- Linked lists

  - Insertion is easy - just tack onto the front
  - Deletion is easy - once you find the element
  - Lookup is bad - have to rely on linear search
  - Relatively difficult to sort - unless you're willing to compromise on super-fast insertion and instead sort as you construct
  - Relatively small size-wise (not as small as arrays)

- Hash tables

  - Insertion is a two-step process - hash, then add
  - Deletion is easy - once you find the element
  - Lookup is on average better than with linked lists because you have the benefit of a real-world constant factor
  - Not an ideal data structure if sorting is the goal - just use an array
  - Can run the gamut of size

- Tries
  - Insertion is complex - a lot of dynamic memory allocation, but gets easier as you go
  - Deletion is easy - just free a node
  - Lookup is fast - not quite as fast as an array, but almost
  - Already sorted - sorts as you build in almost all situations
  - Rapidly becomes huge, even with very little data present, not great if space is at a premium

## Structures in C

- Structures provide a way to unify several variables of different types into a single, new variable type which can be assigned its own type name.
- We use structures (structs) to group together elements of a variety of data types that have a logical connection.
- Think of a structure like a `"super-variable"`.

```c
struct car
{
  int year;
  char model[10];
  char plate[7];
  int odometer;
  double engine_size;
};
```

- Once we have defined a structure, which we typically do in separate `.h` files or atop our programs outside of any functions, we have effectively created a new type.
- That means we can create variables of that type using the familiar syntax.
- We can also access the various `fields` (also known as `members`) of the structure using the dot operator (`.`)

```c
// variable declaration
struct car mycar;

// field accessing
mycar.year = 2011;
strcpy(mycar.plate, "CS50");
mycar.odometer = 50505;
```

- Structures, like variables of all other data types, do not need to be created on the stack. We can dynamically allocate structures at run time if our program requires it.
- In order to access the fields of our structures in that situation, we first need to dereference the pointer to the structure, and then we can access its fields.

```c
// variable declaration
struct car *mycar = malloc(sizeof(struct car));

// field accessing
(*mycar).year = 2011;
strcpy((*mycar).plate, "CS50");
(*mycar).odometer = 50505;
```

- This is a little annoying. And so as you might expect, there's a shorter way!
- The arrow operator (`->`) makes this process easier. It's an operator that does two things back-to-back:
  - First, it `dereferences` the pointer on the left side of the operator.
  - Second, it `accesses` the field on the right side of the operator.

```c
// variable declaration
struct car *mycar = malloc(sizeof(struct car));

// field accessing
mycar->year = 2011;
strcpy(mycar->plate), "CS50";
mycar->odometer = 50505;
```

## Singly-Linked Lists in C

- So far in the course, we've only had one kind of data structure for representing collections of like values.
  - `structs`, recall, give us "`containers`" for holding variables of different data types, typically.
- Arrays are great for element lookup, but unless we want to insert at the very end of the array, inserting elements is quite costly - remember insertion sort?

- Array also suffer from a great inflexibility - what happens if we need a larger array than we thought?
- Through clever use of pointers, dynamic memory allocation, and structs, we can put the pieces together to develop a new kind of data structure that gives us the ability to grow and shrink a collection of like values to fit our needs.

- We call this combination of elements, when used in this way, a `linked list`.
- A linked list `node` is a special kind of struct with two members:
  - Data of some data type (int, char, float...)
  - A pointer to another node of the same type
- In this way, a set of nodes together can be thought of as forming a chain of elements that we can follow from beginning to end.

```c
typedef struct sllist
{
  VALUE val;
  struct sllist *next;
}
sllnode;
```

- In order to work with linked lists effectively, there are a number of operations that we need to understand;

1. Create a linked list when it doesn't already exist.
2. Search through a linked list to find an element.
3. Insert a new node into the linked list.
4. Delete a single element from a linked list.
5. Delete an entire linked list.

- Create a linked list.

```c
sllnode* create(VALUE val);

sslnode* new = create(6);
```

- Steps involved:

  1. Dynamically allocate space for a new sllnode.
  2. Check to make sure we didn't run out of memory.
  3. Initialize the node's val field.
  4. Initialize the node's next field.
  5. Return a pointer to the newly created sllnode.

- Search through a linked list to find an element.

```c
bool find(sllnode* head, VALUE val);

bool exists = find(list, 6);
```

- Steps involved:

  1. Create a traversal pointer pointing to the list's head.
  2. If the current node's val field is what we're looking for, report success.
  3. If not, set the traversal pointer to the next pointerin the list and go back to step 2.
  4. If you've reached the end of the list, report failure.

- Insert a new node into the linked list.

```c
sllnode* insert(sllnode* head, VALUE val);

list = insert(list, 12);
```

- Steps involved:

  1. Dynamically allocate space for a new `sllnode`.
  2. Check to make sure we didn't run out of memory.
  3. Populate and insert the node at the beginning of the linked list.
  4. Return a pointer to the new head of the linked list.

- Decision time!
- Which pointer should we move first? Should the `"12"` node be the new head of the linked list, since it now exist, or should we connect it to the list first?
- This is one of the trickiest things with linked lists. Order matters!

- Delete an entire list.

```c
void destroy(sllnode* head);

destroy(list);
```

- Steps involved:

  1. If you've reached a null pointer, stop.
  2. Delete the rest of the list.
  3. Free the current node.

## Doubly-Linked Lists in C

- Singly-linked lists really extend our ability to collect and organize data, but they suffer from a crucial limitation.
  - We can only even move in one direction through the list.
- Consider the imlpication that would have for trying to delete a node.
- A doubly-linked list, by contrast, allows us to move forward and backward through the list, all by simply adding one extra pointer to our struct definition.

```c
typedef struct dllist
{
  VALUE val;
  struct dllist* prev;
  struct dllist* next;
}
dllnode;
```

- In order to work with linked lists effectively, there are a number of operations that we need to understand;

1. Create a linked list when it doesn't already exist.
2. Search through a linked list to find an element.
3. Insert a new node into the linked list.
4. Delete a single element from a linked list.
5. Delete an entire linked list.

- Insert a new node into the linked list.

```c
dllnode* insert(dllnode* head, VALUE val);
```

- Steps involved:

  1. Dynamically allocate space for a new `dllnode`.
  2. Check to make sure we didn't run out of memory.
  3. Populate and insert the node at the beginning of the linked list.
  4. Fix the prev pointer of the old head of the linked list.
  5. Return a pointer to the new head of the linked list.

```c
list = insert(list, 12);
```

- Remember, we can never break the chain when rearranging the pointers.
- Even if we need to have redundant pointers temporarily, that's okay.

- Delete a node from a linked list.

```c
void delete(dllnode* target);

delete(x);
```

- Steps involved:

  1. Fix the pointers of the surrounding nodes to `"skip over"` target.
  2. Free target.

- Linked lists, of both the singly- and doubly-linked varieties, support extremely efficient `insertion` and `deletion` of elements.

  - In fact, these operations can be done in `constant time`.

- What's the downside? Remember how we had to find an element? We've lost the ability to randomly-access list elements.
  - Accessing a desired element may now take `linear time`.

## Hash Tables in C

- Hash tables combine the random access ability of an array with the dynamism of a linked list.
- This means (assuming we define our hash table well):
  - Insertion can start to tend toward `θ(1)`
  - Deletion can start to tend toward `θ(1)`
  - Lookup can start to tend toward `θ(1)`
- We're gaining the advantages of both types of data structure, while mitigating the disadvantages.

- To get this performance upgrade, we create a new structure whereby when we insert data into the structure, the data itself gives us a clue about where we will find the data, should we need to later look it up.
- The trade off is that hash tables are not great at ordering or sorting data, but if we don't care about that, then we're good to go!

- A hash table amounts to a combination of two things with which we're quite familiar.
  - First, a `hash function`, which returns a nonnegative integer value called a `hash code`.
  - Second, an `array` capable of storing data of the type we wish to place into the data structure.
- The idea is that we run our data through the hash function, and then store the data in the element of the array represented by the returned hash code.

```c
char hashtable[10];

int x = hash("John");  // x is now 4

hashtable[x] = "John";

int y = hash("Paul");  // y is now 6

hashtable[y] = "Paul";
```

- How to define a hash function? Really no limit to the number of possible hash functions.
- A good hash function should:
  - Use only the data being hashed
  - Use all of the data being hashed
  - Be deterministic
  - Uniformly distribute data
  - Generate very different hash codes for very similar data

```c
unsigned int hash(char *str)
{
  int sum = 0;
  for (int j = 0; str[j] != '\0', j++)
  {
    sum += str[j];
  }
  return sum % HASH_MAX;
}
```

```c
int z = hash("Ringo") // z is now 6
```

- A `collision` occurs when two pieces of data, when run through the has function, yield the same hash code.
- Presumably we want to store `both` pieces of data in the hash table, so we shouldn't simply overwrite the data that happened to be placed in there first.
- We need to find a way to get both elements into the hash table while trying to preserve quick insertion and lookup.

- Resolving collisions: `Linear probing`
- In this method, if we have a collision, we try to place the data in the next consecutive element in the array (wrapping around to the beginning if necessary) until we find a vacany.
- That way, if we don't find what we're looking for in the first location, at least hopefully the element is somewhere nearby.

```c
hash("Bart");   // returns 6
hash("Lisa");   // returns 6
hash("Homer");  // returns 7
hash("Maggie"); // returns 3
hash("Marge");  // returns 6
```

- Linear probing is subject to a problem called `clustering`. Once there's a miss, two adjacent cells will contain data, making it more likely in the future that the cluster will grow.
- Even if we switch to another probing technique, we're still limited. We can only store as much data as we have locations in our array.

- Resolving collisions: `Chaining`
- Let's start to pull it all together.
- What if instead of each element of the array holding just one piece of data, it held multiple pieces of data?
- If each element of the array is a pointer to the head of a linked list, then multiple pieces of data can yield the same hash code and we'll be able to store it all!

- We've eliminated clustering.
- We know from experience with linked lists that insertion (and creation, if necessary) into a linked list is an O(1) operation.
- For lookup, we only need to search through what is hopefully a small list, since we're distributing what would otherwise be one huge list across `n` lists.

```c
node* hashtable[10];

hash("Joey");     // returns 6
hash("Ross");     // returns 2
hash("Rachel");   // returns 4
hash("Phoebe");   // returns 6
```

## Tries in C

- We have seen a few data structures that handle the mapping of key-value pairs.
  - Arrays: The key is the element index, the value is the data at that location.
  - Hash tables: The key is the hash code of the data, the value is a linked list of data hashing to that hash code.
- What about a slightly different kind of data structure where the key is guaranteed to be unique, and the value could be as simple as a Boolean that tells you whether the data exists in the structure?

- Tries combine structures and pointers together to store data in an interesting way.
- The data to be searched for in the trie is now a roadmap.
  - If you can follow the map from the beginning to end, the data exists in the trie.
  - if you can't, it doesn't.
- Unlike with a hash table, there are no collisions, and no two pieces of data (unless they are identical) have the same path.

- Let's map key-value pairs where the keys are foud-digit years (YYYY) and the values are names of universities founded during those years.
- In a trie, the paths from a central `root` node to a `leaf` node (where the school names would be), would be labeled with digits of the year.
- Each node on the path from root to leaf could have 10 pointers emanating from it, one for each digit.

- To insert an element into the trie, simply build the correct path from the root to the leaf.

```c
typedef struct _trie
{
  char university[20];
  struct _trie* paths[10];
}
trie;
```

- To search for an element in the trie, use successive digits to navigate from the root, and if you can make it to the end without hitting a dead end (a NULL pointer), you've found it.

## Queues in C

- A queue is a special type of structure that can be used to maintain data in an organized way.
- This data structure is commonly implemented in one of two ways: as an `array` or as a `linked list`.
- In either case, the important rule is that when data is added to the queue, it is tacked onto the end, and so if an element needs to be removed, the element at the front is the only element that can legally be removed.

  - `First in, first out (FIFO)`

- There are only two operations that may legally be performed on a queue.

  - `Enqueue`: Add a new element to the end of the queue.
  - `Dequeue`: Remove the oldest element from the front of the queue.

- Array-based implementation

```c
typedef struct _queue
{
  VALUE array[CAPACITY];
  int front;
  int size;
}
queue;

queue q;
q.front = 0;
q.size = 0;
```

- In the general case, `enqueue()` needs to:
  - Accept a pointer to the queue.
  - Accept data of type VALUE to be added to the queue.
  - Add that data to the queue at the end of the queue.
  - Change the size of the queue.

```c
void enqueue(queue *q, VALUE data);

enqueue(&q, 28);
enqueue(&q, 33);
enqueue(&q, 19);
```

- In the general case, `dequeue()` needs to:
  - Accept a pointer to the queue.
  - Change the location of the front of the queue.
  - Decrease the size of the queue.
  - Return the value that was removed from the queue.

```c
VALUE dequeue(queue *q);

int x = dequeue(&q);
enqueue(&q, 40);
```

- Linked list-based implementation

```c
typedef struct _queue
{
  VALUE val;
  struct _queue *prev;
  struct _queue *next;
}
queue;
```

- Just make sure to always maintain pointers to the head `and` tail of the linked list! (probably global)

- To `enqueue`:

  - Dynamically allocate a new node;
  - Set its next pointer to NULL, set its prev pointer to the tail;
  - Set the tail's next pointer to the new node;
  - Move the tail pointer to the newly-created node.

- To `dequeue`:
  - Traverse the linked list to its second element (if it exists);
  - Free the head of the list;
  - Move the head pointer to the (former) second element;
  - Make that node's prev pointer point to NULL.

## Stacks (Data Structure) in C

- A stack is a special type of structure that can be used to maintain data in an organized way.
- This data structure is commonly implemented in one of two ways: as an `array` or as a `linked list`.
- In either case, the important rule is that when data is added to the stack, it sits `"on top"`, and so if an element needs to be removed, the most recently added element is the only element that can legally be removed.

  - `Last in, first out (LIFO)`.

- There are only two operations that may legally be performed on a stack.

  - `Push`: Add a new element to the top of the stack.
  - `Pop`: Remove the most recently-added element from the top of the stack.

- Array-based implementation

```c
typedef struct _stack
{
  VALUE array[CAPACITY];
  int top;
}
stack;


stack s;
s.top = 0;
```

- In the general case, `push()` needs to:
  - Accept a pointer to the stack.
  - Accept data of type `VALUE` to be added to the stack.
  - Add that data to the stack at the top of the stack.
  - Change the location of the top of the stack.

```c
void push(stack *s, VALUE data);

stack s;
s.top = 0;
push(&s, 28);
push(&s, 33);
push(&s, 19);
```

- In the general case, `pop()` needs to:
  - Accept a pointer to the stack.
  - Change the location of the top of the stack.
  - Return the value that was removed from the stack.

```c
VALUE pop(stack *s);

int x = pop(&s);
push(&s, 40);
```

- Linked list-based implementation

```c
typedef struct _stack
{
  VALUE val;
  struct _stack *next;
}
stack;
```

- Just make sure to always maintain a pointer to the head of the linked list!
- To `push`, dynamically allocate a new node, set its next pointer to point to the current head of the list, then move the head pointer to the newly-created node.

- To `pop`, traverse the linked list to its second element (if it exists), free the head of the list, then move the head pointer to the (former) second element.
