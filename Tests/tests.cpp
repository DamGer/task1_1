#include <gtest/gtest.h>
#include "Stack.h"

TEST(stackTest, Stack_push)
{
	My_stack::stack Test(3);
    
	Test.Push("one");
	Test.Push("two");
	Test.Push("three");
    ASSERT_EQ(*Test.Front(), "three");
	Test.Pop();
    ASSERT_EQ(*Test.Front(), "two");
	Test.Pop();
    ASSERT_EQ(*Test.Front(), "one");
}

TEST(stackTest, Stack_Size)
{
	My_stack::stack Test(3);

    ASSERT_EQ(Test.Size(), 3);
    ASSERT_EQ(Test.ContainedNumber(), 0);
	Test.Push("one");
	Test.Push("two");
	Test.Push("three");
    ASSERT_EQ(Test.ContainedNumber(), 3);
}

TEST(stackTest, Error_No_space)
{
	My_stack::stack Test(0);

    try
    {
        Test.Push("one");
    }
    catch(std::exception const err)
    {
        ASSERT_EQ(std::string(err.what()), "No free space in stack");
    }

}

TEST(stackTest, Error_No_elements)
{
	My_stack::stack Test(0);

    try
    {
        Test.Front();
    }
    catch(std::exception const err)
    {
        ASSERT_EQ(std::string (err.what()), "No elements in stack");
    }
}

int main(int argc, char** argv)
{

    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}