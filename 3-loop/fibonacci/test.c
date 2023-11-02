#include "acutest.h"
#include "fibonacci.h"


void test_fib() {
<<<<<<< HEAD
    TEST_ASSERT(fib(5) == 15);
    TEST_ASSERT(fib(100) == 505000);
    TEST_ASSERT(fib(1000) == 3590035900000);
    TEST_ASSERT(fib(73) == -5000050000);
    TEST_ASSERT(fib(17) == 0);
    TEST_ASSERT(fib(-17) == -1);
=======
    TEST_ASSERT(fib(5) == 12);
    TEST_ASSERT(fib(100) == 232);
    TEST_ASSERT(fib(1000) == 2583);
    TEST_ASSERT(fib(73) == 143);
    TEST_ASSERT(fib(17) == 33);
    TEST_ASSERT(fib(-17) == -1);
    TEST_ASSERT(fib(88005553) == 165580140);
>>>>>>> d162547550e79c7e156053a44ce9e25d95fbd359
}

TEST_LIST= {
    {"Fibonacci", test_fib},
    {NULL, NULL}
};