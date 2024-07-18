// tests/test_main.cpp
#include <gtest/gtest.h>

// 테스트할 함수의 원형을 선언합니다.
int add(int a, int b) {
    return a + b;
}

// 테스트 케이스
TEST(AdditionTest, PositiveNumbers) {
    EXPECT_EQ(add(1, 2), 3);
}

TEST(AdditionTest, NegativeNumbers) {
    EXPECT_EQ(add(-1, -1), -2);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
