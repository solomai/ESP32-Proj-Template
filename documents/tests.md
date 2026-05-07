## Tests Guide
Testing is divided into two categories: host tests and device tests. Host tests run directly on your PC and are built using a host compiler, while device tests are compiled specifically for an ESP32 and must be executed on the hardware itself.

### Tests on host
Use the `run_host_tests.py` script to execute tests on your local machine.

### Tests on device
Use the `run_device_tests.py` script to run tests on the hardware. This requires a connected ESP32 device.<br>
Before execution, you must install the necessary Python dependencies; for convenience, use the `tests/install_tests_deps.bat` script.<br>
Note: that the `Device Monitor` must be closed while the script is running, as it occupies the COM port required for testing.


---

[← Back to README](../README.md)