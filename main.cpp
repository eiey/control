#include "controlflowguard.hpp"

int main() {
    uintptr_t address = 0x12345678;
    uintptr_t pageNumber = controlflowguard::calculatePageNumber(address);
    uintptr_t byteOffset = controlflowguard::calculateByteOffset(address);

    return 0;
}
