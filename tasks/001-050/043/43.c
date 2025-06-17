#include <stdio.h>

int main() {
    printf("ASCII Table:\n");
    printf("Code  Char  Description\n");
    printf("------------------------\n"); // ASCII-символы с кодами от 32 до 126, которые являются печатными символами
                                            //символы 0–31 и 127 — это управляющие символы (например, NUL, BEL, DEL
    const char *control_chars[32] = {
        "NUL", "SOH", "STX", "ETX", "EOT", "ENQ", "ACK", "BEL",
        "BS",  "TAB", "LF",  "VT",  "FF",  "CR",  "SO",  "SI",
        "DLE", "DC1", "DC2", "DC3", "DC4", "NAK", "SYN", "ETB",
        "CAN", "EM",  "SUB", "ESC", "FS",  "GS",  "RS",  "US"
    };
    
    for (int i = 0; i <= 127; i++) {
        if (i < 32) {
            printf("%3d   %-4s  %s\n", i, " ", control_chars[i]);
        } else if (i == 127) {
            printf("%3d   %-4s  DEL\n", i, " ");
        } else {
            printf("%3d   %-4c  Printable\n", i, (char)i);
        }
    }
    
    return 0;
}