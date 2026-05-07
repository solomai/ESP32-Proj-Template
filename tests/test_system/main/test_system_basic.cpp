#include "unity.h"
#include "esp_heap_caps.h"
#include "esp_timer.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

TEST_CASE("Passed test-case", "[system]")
{
    TEST_ASSERT_TRUE(true);
}

TEST_CASE("Failed test-case", "[system]")
{
    TEST_ASSERT_TRUE(false);
}
