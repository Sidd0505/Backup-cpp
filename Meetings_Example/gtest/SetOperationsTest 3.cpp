#include <gtest/gtest.h>
#include "SetOperations.h"

//Test Fixture for SetOperations Class
class SetOperationsTest : public ::testing::Test {
protected:
    //Member Variables Accessible For All Tests
    std::unique_ptr<SetOperations> set_ops;

    //Set Up Function Called Before Each Test
    void SetUp() override {
        set_ops = std::make_unique<SetOperations>();
    }
};

//Test Case to Add Elements
TEST_F(SetOperationsTest, AddElement) {
    set_ops->add(5);
    set_ops->add(10);
    EXPECT_TRUE(set_ops->check(5));
    EXPECT_TRUE(set_ops->check(10));
    EXPECT_FALSE(set_ops->check(7));
}

//Test Case to Remove Elements
TEST_F(SetOperationsTest, RemoveElement) {
    set_ops->add(5);
    set_ops->add(10);
    set_ops->remove(5);
    EXPECT_FALSE(set_ops->check(5));
    EXPECT_TRUE(set_ops->check(10));
}

//Test Case to Verify Element Existence
TEST_F(SetOperationsTest, CheckElementExistence) {
    set_ops->add(5);
    set_ops->add(10);
    EXPECT_TRUE(set_ops->check(5));
    EXPECT_FALSE(set_ops->check(7));
}

//Test Case for Empty Set
TEST_F(SetOperationsTest, EmptySet) {
    EXPECT_FALSE(set_ops->check(5));
}
