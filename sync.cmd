@echo off
:: One-click Windows launcher for sync_from_upstream.py
:: Just double-click. Uses system Python.

cd /d "%~dp0"
python tools\sync_from_upstream.py %*
if errorlevel 1 (
    echo.
    echo Sync finished with error code %ERRORLEVEL%.
) else (
    echo.
    echo Sync OK.
)
pause
