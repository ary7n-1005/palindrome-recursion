# Recursive Palindrome Checker in C

This is a simple C program that checks whether a given word is a **palindrome** or not using **recursion**.

A palindrome is a word that reads the same forwards and backwards.

For example:

* `MADAM` → Palindrome
* `LEVEL` → Palindrome
* `HELLO` → Not a Palindrome

## What I used

This program helped me practice:

* C functions
* Recursion
* Strings
* Character arrays
* `strlen()`
* `strcmp()`
* Pointers
* `if-else` conditions

## How it works

The program compares the first and last characters of the string.

If they are different, the string is not a palindrome.

If they are the same, the function calls itself again, but this time checking the characters closer to the middle.

For example, for `MADAM`:

```text
M A D A M
↑       ↑
```

`M` and `M` match, so it checks:

```text
M A D A M
  ↑   ↑
```

`A` and `A` match, and finally it reaches the middle.

If all the characters match, the string is a palindrome.

## How to run

1. Clone the repository or download the `.c` file.
2. Compile the program using a C compiler.

```bash
gcc palindrome.c -o palindrome
```

3. Run it:

```bash
./palindrome
```

4. Enter a word when prompted.

Type `END` or `end` to stop the program.

## Example

```text
Enter string: madam
It is a Palindrome

Enter string: hello
It is not a Palindrome

Enter string: level
It is a Palindrome

Enter string: END
```

## What I learned

The main thing I learned from this program was how **recursion works**. Instead of checking the whole string at once, the function keeps checking smaller parts of the string until it reaches the middle.

This was one of my practice programs while learning C and recursion.
