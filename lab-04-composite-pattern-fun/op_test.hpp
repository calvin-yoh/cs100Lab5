#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"

TEST(OpTest, OpEvaluateEight) {
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8);
}

TEST(OpTest, OpEvaluateNegative)
{
	Op* test = new Op(-5);
	EXPECT_EQ(test->evaluate(),-5);
}

TEST(OpTest, OpEvaluateString)
{
	Op* test = new Op(8);
	EXPECT_EQ(test->stringify(),"8");
}

#endif //__OP_TEST_HPP__
