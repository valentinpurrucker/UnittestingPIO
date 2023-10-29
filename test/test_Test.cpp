#include <unity.h>

void testA()
{
    TEST_ASSERT_TRUE((1 + 1) == 3);
}

int main()
{
    UNITY_BEGIN();
    RUN_TEST(testA);
    UNITY_END();
}