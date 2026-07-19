@echo off
:: One-click Windows launcher for sync_from_upstream.py
:: Just double-click. Uses system Python.

cd /d "%~dp0"
python tools\sync_from_upstream.py %*
set "RC=%ERRORLEVEL%"
echo.
if "%RC%"=="0" (
    echo Sync OK.
) else (
    echo Sync finished with error code %RC%.
)
pause
exit /b %RC%
