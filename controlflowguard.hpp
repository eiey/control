class controlflowguard {
private:
    static const uintptr_t BitmapAddress = 0x1ff760;

    enum Offsets {
        PageShift = 12,
        ByteShift = 15,
        BitMask = 7,
        PageSize = 0x1000,
        PageMask = 0xFFF
    };

public:
    static uintptr_t getBitmapAddress() {
        return BitmapAddress;
    }

    static uintptr_t calculatePageNumber(uintptr_t address) {
        return address >> Offsets::PageShift;
    }

    static uintptr_t calculateByteOffset(uintptr_t address) {
        return (address >> Offsets::ByteShift) & Offsets::PageMask;
    }
};
