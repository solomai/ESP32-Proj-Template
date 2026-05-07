// Main application entry point for the ESP32 template project.

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#include "esp_app_trace.h"
#include "esp_log.h"

#include "global.h"
#include "diag/reset_reason.h"

#ifdef CONFIG_APP_WAIT_FOR_DEBUGGER
#include "diag/wait_dbg.h"
#endif

extern "C" void app_main(void)
{
#ifdef CONFIG_APP_WAIT_FOR_DEBUGGER
    wait_debugger_connection();
#endif

    LogLastResetReason();

    while (true) {
        ESP_LOGI(TAG_MAIN, "Hello from ESP32");
        vTaskDelay(5000 / portTICK_PERIOD_MS);
    }
}