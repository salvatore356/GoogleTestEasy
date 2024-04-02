//
//  Fibonacci.hpp
//  GoogleTestEasy
//
//  Created by Salvatore on 2/4/24.
//

#ifndef Fibonacci_hpp
#define Fibonacci_hpp

#include <stdio.h>

#include <gtest/gtest.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    
    return fibonacci(n - 1) + fibonacci(n - 2);
}


// Tests fibonacci of negatives.
TEST(FibonacciTest, HandlesNegativeInput) {
    EXPECT_EQ(fibonacci(-10), -10);
}
    
// Tests fibonacci of 0 or 1.
TEST(FibonacciTest, HandlesZeroOrOneInput) {
    EXPECT_EQ(fibonacci(0), 0);
    EXPECT_EQ(fibonacci(1), 1);
}

// Tests fibonacci of positive numbers.
TEST(FibonacciTest, HandlesPositiveInput) {
    EXPECT_EQ(fibonacci(2), 1);
    EXPECT_EQ(fibonacci(3), 2);
    EXPECT_EQ(fibonacci(4), 3);
    EXPECT_EQ(fibonacci(8), 21);
}
#endif /* Fibonacci_hpp */
