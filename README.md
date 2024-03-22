# CS50

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

```c
| Data Type | Size (Bytes) |
| --------- | ------------ |
| bool      | 1            |
| int       | 4            |
| long      | 8            |
| float     | 4            |
| double    | 8            |
| char      | 1            |
| string    | ?            |
```

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

```c
| x     | y     | (x && y) |
| ----- | ----- | -------- |
| true  | true  | true     |
| true  | false | false    |
| false | true  | false    |
| false | false | false    |
```

- Logical OR (\|\|) is true if and only if at least one operand is true, otherwise false.

```c
| x     | y     | (x \|\| y) |
| ----- | ----- | ---------- |
| true  | true  | true       |
| true  | false | true       |
| false | true  | true       |
| false | false | false      |
```

- Logical NOT (!) inverts the value of its operand.

```c
| x     | !x    |
| ----- | ----- |
| true  | false |
| false | true  |
```

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

```c
| command            | argc |
| ------------------ | ---- |
| ./greedy           | 1    |
| ./greedy 1024 cs50 | 3    |
```

- argv (argument vector)
  - This array of characters stores, one char per element, the actual text the user typed at the command-line when the program was executed.
  - The first element of argv is always found at argv[0]. The last element of argv is always found at argv[argc-1].
  - Let's assume the user executes the greedy program as follows
    ./greedy 1024 cs50

```c
| argv indices | argv contents |
| ------------ | ------------- |
| argv[0]      | "./greedy"    |
| argv[1]      | "1024"        |
| argv[2]      | "cs50"        |
| argv[3]      | ???           |
```

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

```c
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
```

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

```c
| Data Type       | Size (Bytes) |
| --------------- | ------------ |
| int             | 4            |
| char            | 1            |
| float           | 4            |
| double          | 8            |
| long long       | 8            |
| string          | ???          |
```

- Back to this idea of memory as a big array of byte-sized cells.
- Recall from our discussion of arrays that they not only are useful for storage of information but also for so-called `random access`.
  - We can access individual elements of the array by indicating which index location we want.
- Similarly, each location in memory has an `address`.
- There's only one critical thing to remember as we start working with pointers:
  `POINTERS ARE JUST ADDRESSES`

```c
int k;    // ------|
          //       |-------->  k = 5 ---------------------|
k = 5;    // ------|                                      |
          //                                              | ----------> pk ----------> k
int *pk;  // ------|                                      |
          //       |--------> pk = 0x80C74820 ------------|
pk = &k;  // ------|
```
