#include "gtest/gtest.h"
#include "libs/Interview.h"


TEST(HelloWorld, Simple) {
	EXPECT_EQ (getHelloWorld(), "Hello World");
}
