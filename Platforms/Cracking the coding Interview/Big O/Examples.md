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

> Time Complexity: O(N). The fact that we iterate through the array twice doesn't matter.

## Example 2

```java
    void printPairs(int[] array) {
        for (int i = 0; i < array.length; i++) {
            for (int j = 0; j < array.length; j++) {
            cout << array[i] << ", " << array[j];
        }
    }
```

> Time Complexity: O(N^2). It's because, the inner loop has O(N) iterations and is called N times.

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

> Therefore, Time Complexity of above loop is O(N^2).

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

> Time Complexity: O(AB). Where, A = Size of array A and B = size of array B

## Example 5

```java
    void isPrime(int n) {
        for (int x = 2; x*x <= n; x++) {
            if (n % x == 0) return false;
        }
        return true;
    }
```

> Time Complexity: O(sqrt(n)). This loop will start when x = 2 & end when  x*x = n.

## Example 6

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

> Can you guess the runtime here. This is just a straight recursion from n to 1. It will take O(n) time.
