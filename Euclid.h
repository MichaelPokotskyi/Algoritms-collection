#pragma once
using namespace std;


// Iterative function to calculate gcd of two numbers
// using Euclid’s algorithm
int euclidIteration(int a, int b)
{
    int q{}, r{};

    // loop till remainder is 0
    while (b > 0)
    {
        q = a / b;      // quotient
        r = a - q * b;  // remainder
        // or we can simply use `a % b` to calculate `r`


        // `a` becomes `b` and `b` becomes `r` (`a % b`)
        a = b;
        b = r;
    }

    return a;
}


// Recursive function to calculate gcd of two numbers
// using Euclid’s algorithm
int euclidRecursion(int a, int b)
{
    // if the remainder is 0, return the second number
    if (b == 0) {
        return a;
    }
    int q = a / b;      // quotient
    int r = a - q * b;  // remainder
    // or we can simply use `a % b` to calculate `r`


    // `a` becomes `b` and `b` becomes `r` (`a % b`)
    return euclidRecursion(b, r);
}
