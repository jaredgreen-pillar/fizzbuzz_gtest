#include <gtest/gtest.h>
#include "FizzBuzz.h"

TEST(fizzbuzz_test, OneReturnsOne) {
    std::string result = FizzBuzz::run(1);
    EXPECT_EQ(result, "1");
}

TEST(fizzbuzz_test, TwoReturnsTwo) {
    std::string result = FizzBuzz::run(2);
    EXPECT_EQ(result, "2");
}

TEST(fizzbuzz_test, ThreeReturnsFizz) {
    std::string result = FizzBuzz::run(3);
    EXPECT_EQ(result, "Fizz");
}

TEST(fizzbuzz_test, FiveReturnsBuzz) {
    std::string result = FizzBuzz::run(5);
    EXPECT_EQ(result, "Buzz");
}

TEST(fizzbuzz_test, SixReturnsFizz) {
    std::string result = FizzBuzz::run(6);
    EXPECT_EQ(result, "Fizz");
}

TEST(fizzbuzz_test, TenReturnsBuzz) {
    std::string result = FizzBuzz::run(10);
    EXPECT_EQ(result, "Buzz");
}

TEST(fizzbuzz_test, FifteenReturnsFizzBuzz) {
    std::string result = FizzBuzz::run(15);
    EXPECT_EQ(result, "FizzBuzz");
}

TEST(fizzbuzz_test, ThirtyReturnsFizzBuzz) {
    std::string result = FizzBuzz::run(30);
    EXPECT_EQ(result, "FizzBuzz");
}
