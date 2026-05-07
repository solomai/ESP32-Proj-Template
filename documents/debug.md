# Debug Guide

## Terminal in VSCode
Make sure the VSCode terminal is activated with the ESP-IDF environment; you should see "IDF PowerShell Environment" at the start of the prompt. If it isn't activated, try restarting the terminal within the IDE. Additionally, verify that the path to `PowerShell_profile.ps1` in your settings.json is correct, as this location changes depending on your ESP-IDF version.

## Project Debug settings
all options in Kconfig.projbuild
- APP_DEBUG_MODE: allow debug mode
- APP_WAIT_FOR_DEBUGGER: Wait for debugger attachment
- APP_WAIT_FOR_DEBUGGER_TIMEOUT: Debugger connection timeout

## How To Debug in IDE
1. start OpenOCD Server
2. flash firmware (if nedded)
3. open "run and debug" and attach to remote proccess

---

[← Back to README](../README.md)