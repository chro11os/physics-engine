#include "DebugCheckers.h"
#include <iostream>
#include "raylib.h"

// Definition of the function
void isWindowsActive() {
    if (IsWindowReady()) {
        std::cout << "Window is active\n";
    } else {
        std::cout << "Window is not ready\n";
    }
}
