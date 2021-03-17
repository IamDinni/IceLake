# Exercise

## 1. The following code computes product of a & b. What's its runtime?

```java
    void isPrime(int n) {
        int sum = 0;
        for(int i = 0;i < b; i++) {
            sum += a;
        }
        return sum;
    }
```

## 2. This computes a^b. What's its 🕙 ?


```java
    void power(int a, int b) {
        if (b <  0) 
            return 0;
        
        else if (b == 0)
            return 0;
        
        else return a*power(a, b-1);
    }
```

## 3. This computes a%b. What's its 🕙 ?

```java
    void mod(int a, int b) {
        if (b <= 0) return -1;
        
        int div = a / b;
        return a - div*b;
    }
```

## 4. The following code performs integer division. Find 🕙 ? (where a > 0 and b > 0)

```java
    void div(int a, int b) {
        int sum = 0;
        int count = 0;
        while(sum <= a) {
            sum += b;
            count++;
        }
        return sum;
    }
```

## 5. This computes (integer) square root of a number. If not perfect square return -1. 
## It does this successive guessing. If n is 100, it first guess 50, than 25 .. and so on. Find 🕙 ?

```java
    void sqrt(int n) {
        return sqrt_helper(n, 1, n);
    }

    int sqrt_helper(int n, int min, int max) {
        if (max < min) return -1;

        int guess = (min + max)/2;

        if (guess*guess == n) return guess;

        else if (guess*guess < n) // Too low
            return sqrt_helper(n, guess + 1, max); // Try higher
        
        else // Too high
            return sqrt_helprt(n, min, guess - 1); // Try lower
    }
```

## 6. This computes (integer) square root of a number. If not perfect square return -1. 
## It does this successive guessing. If does by trying increasingly large numbers until it finds the right value (or is too high). Find 🕙 ?

```java
    int sqrt(int n) {
        for (int guess = 1; guess*guess <= n; guess++) {
            if (guess*guess == n) {
                return guess;
            }
        }
        return -1;
    }

```

## 7. Find 🕙 ?

```java
    int doSomething(int n) {
        int sum = 0; 
        while (n > 0) {
            sum += n%10;
            n /= 10;
        }

        return sum;
    }

```

## 8. If a binary search tree is not balanced, how long might it takes (worst case) to find an element in it