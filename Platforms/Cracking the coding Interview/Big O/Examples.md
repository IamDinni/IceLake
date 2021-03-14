# Big O Examples

## Example 1

```java
    void foo(int[] array) {
        int sum = 0;
        int product = 1;
        for (int i=0; i < array.length; i++) {
            sum += array[i];
        }
        for (int i = 0; i < array.length; i++) {
            product *= array[i];
        }
        cout << sum << ", " << product;
    }
```

> 🕙 Complexity: **O(N)**. The fact that we iterate through the array twice doesn't matter.

## Example 2

```java
    void printPairs(int[] array) {
        for (int i = 0; i < array.length; i++) {
            for (int j = 0; j < array.length; j++) {
            cout << array[i] << ", " << array[j];
        }
    }
```

> 🕙 Complexity: **O(N^2)**. It's because, the inner loop has **O(N)** iterations and is called **N** times.

## Example 3

```java
    void printUnorderedPairs(int[] array) {
        for (int i = 0; i < array.length; i++) {
            for (int j = i + 1; j < array.length; j++) {
            cout << array[i] << ", " << array[j];
        }
    }
```

> You can't rely on memorizing common runtimes. Deep comprehension is important. What's the Time complexity of this problem?

Let's try to find out by counting the iterations,

`(N-1) + (N-2) + (N-3) + ........ + 3 + 2 + 1`

`= 1 + 2 + 3 + ... + (N-1)`

`= sum of 1 to N-1 numbers`

`= N(N-1)/2`

> Therefore, 🕙 Complexity of above loop is **O(N^2)**.

## Example 4

```java
    void printUnorderedPairs(int[] arrayA, int[] arrayB) {
        for (int i = 0; i < arrayA.length; i++) {
            for (int j = 0; j < arrayB.length; j++) {
                if (array[i] < array[j]) {
                    cout << array[i] << ", " << array[j];
                }
            }
        }
    }
```

> 🕙 Complexity: **O(AB)**. Where, A = Size of array A and B = size of array B

## Example 5

```java
    void printUnorderedPairs(int[] arrayA, int[] arrayB) {
        for (int i = 0; i < arrayA.length; i++) {
            for (int j = 0; j < arrayB.length; j++) {
                for(int k = 0; k < 100000; k++) {
                    if (array[i] < array[j]) {
                        cout << array[i] << ", " << array[j];
                    }
                }
            }
        }
    }
```

> Nothing has really changed here. 100,000 units of work is still constant, so the runtime is **O(AB)**.

## Example 6

```java
    void reverse(int[] arr) {
        for (int i = 0; i < arr.length / 2; i++) {
            int other = arr.length - i - 1;
            int temp = arr[i];
            arr[i] = arr[other];
            arr[other] = temp;
        }
    }
```

> This Algorithm runs in **O(N)** time. The fact that it only goes through half the array doesn't impact the big O time.

## Example 7

```java
    void isPrime(int n) {
        for (int x = 2; x*x <= n; x++) {
            if (n % x == 0) return false;
        }
        return true;
    }
```

> 🕙 Complexity: **O(sqrt(n))**. This loop will start when x = 2 & end when  x*x = n.

## Example 8

```java
    void factorial(int n) {
        if (n == 1) 
            return -1;
        else if (n == 0) 
            return 1;
        else 
            return n*factorial(n - 1);
    }
```

> Can you guess the runtime here. This is just a straight recursion from n to 1. It will take **O(n)** time.

## Example 9

**Consider an algorithm that took in array of strings, sorted each string, and then sorted the whole array. What would be the 🕙 complexity?**  (**s**- String length, **a** - array length)

- Sorting each string is **O(slogs)**
- We've to do this for every string (there are **a** strings), so that's **O(aslogs)**
- Now we've to sort array. Each string comparison takes **O(s)** time and there are **O(aloga)** comparisons, therefore this will take **O(saloga)**.

Adding these parts will give you 🕙 complexity of **O(as(loga + logs))**.

## Example 10

```java
    void fib(int n) {
        if (n <= 0) return 0;
        else if (n == 1) return 1;
        return fib(n-1) + fib(n-2);
    }
```

> 🕙 Complexity: **O(2^N)**. For recursive calls: O(branches^depth). There are 2 branches per call and we go as deep as N, therefore the runtime is **O(2^N)**.

## Example 11

```java
    void isPrime(int n) {
        for (int x = 2; x*x <= n; x++) {
            if (n % x == 0) return false;
        }
        return true;
    }
```

> 🕙 Complexity: **O(sqrt(n))**. This loop will start when x = 2 & end when  x*x = n.
