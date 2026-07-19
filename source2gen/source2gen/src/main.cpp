// Copyright (C) 2024 neverlosecc
// See end of file for extended copyright information.
#include "options.hpp"
#include "tools/platform.h"
#include <Include.h>
#include <iostream>
#include <optional>

#if TARGET_OS == WINDOWS
    #include <io.h>
#endif

int main(const int argc, char* argv[]) {
    int exit_code = 1;

    const auto options = source2_gen::Options::parse_args(argc, argv);
    if (options.has_value() && Dump(*options)) {
        std::cout << std::format("Successfully dumped Source 2 SDK, now you can safely close this console.") << std::endl;
        std::cout << kPoweredByMessage << std::endl;
        exit_code = 0;
    }

    /// Errors would be logged in the `source2_gen::Dump` itself
    /// We don't want to call getch on linux as the program would be started within a terminal anyway.
    /// On Windows we only hold the console open when there is a human to read
    /// it — otherwise a scripted run would block here forever.
#if TARGET_OS == WINDOWS
    if (_isatty(_fileno(stdin))) {
        (void)std::getchar();
    }
#endif
    return exit_code;
}

// source2gen - Source2 games SDK generator
// Copyright 2024 neverlosecc
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
