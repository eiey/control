class ControlFlowGuard {
private:
    static const uintptr_t BitmapAddress = 0x1ff760;

    enum Offsets {
        PageShift = 12,
        ByteShift = 15,
        BitMask = 7,
        PageSize = 0x1000,
        PageMask = 0xFFF
    };
