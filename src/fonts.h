#define MAX_CHAR ('~' + 26)

const uint8_t digits5x7[] PROGMEM = {
    6,
    0, 0, 0, 0, 0, 0,                                         // space
    1, B01011111, B00000000, B00000000, 0, 0,                 // !
    3, B00000011, B00000000, B00000011, 0, 0,                 // "
    3, B00000010, B01111111, B00000010, 0, 0,                 // # up
    3, B00100000, B01111111, B00100000, 0, 0,                 // $ down
    3, B01100001, B00011100, B01000011, 0, 0,                 // %
    0, 0, 0, 0, 0, 0,                                         // &
    1, B00000001, B00000000, B00000000, 0, 0,                 // '
    2, B00111110, B01000001, B00000000, 0, 0,                 // (
    2, B01000001, B00111110, B00000000, 0, 0,                 // )
    0, 0, 0, 0, 0, 0,                                         // *
    5, B00001000, B00001000, B00111110, B00001000, B00001000, // +
    2, B10000000, B01000000, B00000000, 0, 0,                 // ,
    4, B00001000, B00001000, B00001000, B00001000, B00001000, // -
    1, B01000000, B00000000, B00000000, 0, 0,                 // .
    3, B01100000, B00011100, B00000011, 0, 0,                 // /
    0x05, 0x3E, 0x51, 0x49, 0x45, 0x3E,                       // 0
    0x03, 0x04, 0x02, 0x7F, 0x00, 0x00,                       // 1
    0x05, 0x42, 0x61, 0x51, 0x49, 0x46,                       // 2
    0x05, 0x22, 0x41, 0x49, 0x49, 0x36,                       // 3
    0x05, 0x18, 0x14, 0x12, 0x11, 0x7F,                       // 4
    0x05, 0x27, 0x45, 0x45, 0x45, 0x39,                       // 5
    0x05, 0x3E, 0x49, 0x49, 0x49, 0x32,                       // 6
    0x05, 0x01, 0x01, 0x71, 0x09, 0x07,                       // 7
    0x05, 0x36, 0x49, 0x49, 0x49, 0x36,                       // 8
    0x05, 0x26, 0x49, 0x49, 0x49, 0x3E,                       // 9
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,                       //
    0x05, 0x08, 0x08, 0x08, 0x08, 0x08,                       // ; -
    0x05, 0x08, 0x08, 0x3E, 0x08, 0x08,                       // < +
};

const uint8_t digits4x7[] PROGMEM = {
    5,
    0, 0, 0, 0, 0,                         // space
    1, B01011111, B00000000, B00000000, 0, // !
    3, B00000011, B00000000, B00000011, 0, // "
    3, B00000010, B01111111, B00000010, 0, // # up
    3, B00100000, B01111111, B00100000, 0, // $ down
    3, B01100011, B00011100, B01100011, 0, // %
    0, 0, 0, 0, 0,                         // &
    1, B00000001, B00000000, B00000000, 0, // '
    2, B00111110, B01000001, B00000000, 0, // (
    2, B01000001, B00111110, B00000000, 0, // )
    0, 0, 0, 0, 0,                         // *
    3, B00001000, B00011100, B00001000, 0, // +
    2, B10000000, B01000000, B00000000, 0, // ,
    3, B00001000, B00001000, B00001000, 0, // -
    1, B01000000, B00000000, B00000000, 0, // .
    3, B01100000, B00011100, B00000011, 0, // /
    0x04, 0x3E, 0x41, 0x41, 0x3E,          // 0
    0x02, 0x02, 0x7F, 0x00, 0x00,          // 1
    0x04, 0x62, 0x51, 0x49, 0x46,          // 2
    0x04, 0x22, 0x41, 0x49, 0x36,          // 3
    0x04, 0x18, 0x14, 0x12, 0x7F,          // 4
    0x04, 0x27, 0x45, 0x45, 0x39,          // 5
    0x04, 0x3E, 0x49, 0x49, 0x32,          // 6
    0x04, 0x01, 0x71, 0x09, 0x07,          // 7
    0x04, 0x36, 0x49, 0x49, 0x36,          // 8
    0x04, 0x26, 0x49, 0x49, 0x3E,          // 9
    0x00, 0x00, 0x00, 0x00, 0x00,          //
    0x03, 0x08, 0x08, 0x08, 0x00,          // -
    0x03, 0x08, 0x1C, 0x08, 0x00,          // +
};

const uint8_t digits3x7[] PROGMEM = {
    4,
    0, 0, 0, 0,                         // space
    1, B01011111, B00000000, B00000000, // !
    3, B00000011, B00000000, B00000011, // "
    3, B00000010, B01111111, B00000010, // # up
    3, B00100000, B01111111, B00100000, // $ down
    3, B01100011, B00011100, B01100011, // %
    0, 0, 0, 0,                         // &
    1, B00000001, B00000000, B00000000, // '
    2, B00111110, B01000001, B00000000, // (
    2, B01000001, B00111110, B00000000, // )
    0, 0, 0, 0,                         // *
    3, B00001000, B00011100, B00001000, // +
    2, B10000000, B01000000, B00000000, // ,
    3, B00001000, B00001000, B00001000, // -
    1, B01000000, B00000000, B00000000, // .
    2, B11000000, B11000000, B00000000, // °
    3, B01100000, B00011100, B00000011, // /
    0x03, 0x7F, 0x41, 0x7F,             // 0
    0x02, 0x02, 0x7F, 0x00,             // 1
    0x03, 0x79, 0x49, 0x4F,
    0x03, 0x41, 0x49, 0x7F,
    0x03, 0x1F, 0x10, 0x7E,
    0x03, 0x4F, 0x49, 0x79,
    0x03, 0x7F, 0x49, 0x79,
    0x03, 0x01, 0x71, 0x0F,
    0x03, 0x7F, 0x49, 0x7F,
    0x03, 0x4F, 0x49, 0x7F, // 9
};

const uint8_t small3x7[] PROGMEM = {
    6,
    0x02, 0x00, 0x00, 0x00, 0x00, 0x00, // Code for char
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // Code for char !
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // Code for char "
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // Code for char #
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // Code for char $
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // Code for char %
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // Code for char &
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // Code for char '
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // Code for char (
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // Code for char )
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // Code for char *
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // Code for char +
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // Code for char ,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // Code for char -
    0x01, 0x40, 0x00, 0x00, 0x00, 0x00, // Code for char .
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // Code for char /
    0x03, 0x7F, 0x41, 0x7F, 0x00, 0x00, // Code for char 0
    0x03, 0x04, 0x02, 0x7F, 0x00, 0x00, // Code for char 1
    0x03, 0x79, 0x49, 0x4F, 0x00, 0x00, // Code for char 2
    0x03, 0x41, 0x49, 0x7F, 0x00, 0x00, // Code for char 3
    0x03, 0x1F, 0x10, 0x7C, 0x00, 0x00, // Code for char 4
    0x03, 0x4F, 0x49, 0x79, 0x00, 0x00, // Code for char 5
    0x03, 0x7F, 0x49, 0x79, 0x00, 0x00, // Code for char 6
    0x03, 0x01, 0x71, 0x0F, 0x00, 0x00, // Code for char 7
    0x03, 0x7F, 0x49, 0x7F, 0x00, 0x00, // Code for char 8
    0x03, 0x4F, 0x49, 0x7F, 0x00, 0x00, // Code for char 9
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // Code for char :
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // Code for char ;
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // Code for char <
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // Code for char =
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // Code for char >
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // Code for char ?
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // Code for char @
    0x03, 0x78, 0x24, 0x78, 0x00, 0x00, // Code for char A
    0x03, 0x7C, 0x54, 0x28, 0x00, 0x00, // Code for char B
    0x03, 0x38, 0x44, 0x44, 0x00, 0x00, // Code for char C
    0x03, 0x7C, 0x44, 0x38, 0x00, 0x00, // Code for char D
    0x03, 0x7C, 0x54, 0x44, 0x00, 0x00, // Code for char E
    0x03, 0x7C, 0x14, 0x04, 0x00, 0x00, // Code for char F
    0x03, 0x38, 0x44, 0x74, 0x00, 0x00, // Code for char G
    0x03, 0x7C, 0x10, 0x7C, 0x00, 0x00, // Code for char H
    0x01, 0x7C, 0x00, 0x00, 0x00, 0x00, // Code for char I
    0x03, 0x44, 0x44, 0x3C, 0x00, 0x00, // Code for char J
    0x03, 0x7C, 0x10, 0x6C, 0x00, 0x00, // Code for char K
    0x03, 0x7C, 0x40, 0x40, 0x00, 0x00, // Code for char L
    0x05, 0x78, 0x04, 0x38, 0x04, 0x78, // Code for char M
    0x03, 0x7C, 0x04, 0x78, 0x00, 0x00, // Code for char N
    0x03, 0x38, 0x44, 0x38, 0x00, 0x00, // Code for char O
    0x03, 0x7C, 0x24, 0x18, 0x00, 0x00, // Code for char P
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // Code for char Q
    0x03, 0x7C, 0x24, 0x58, 0x00, 0x00, // Code for char R
    0x03, 0x48, 0x54, 0x24, 0x00, 0x00, // Code for char S
    0x03, 0x04, 0x7C, 0x04, 0x00, 0x00, // Code for char T
    0x03, 0x3C, 0x40, 0x7C, 0x00, 0x00, // Code for char U
    0x03, 0x3C, 0x40, 0x3C, 0x00, 0x00, // Code for char V
    0x05, 0x3C, 0x40, 0x38, 0x40, 0x3C, // Code for char W
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // Code for char X
    0x03, 0x1C, 0x70, 0x1C, 0x00, 0x00, // Code for char Y
    0x03, 0x64, 0x54, 0x4C, 0x00, 0x00, // Code for char Z
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // Code for char [
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // Code for char BackSlash
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // Code for char ]
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // Code for char ^
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // Code for char _
};

const uint8_t dig3x5[] PROGMEM = {
    4,
    0x03,
    0xF8,
    0x88,
    0xF8,
    0x02,
    0x10,
    0xF8,
    0x00,
    0x03,
    0xE8,
    0xA8,
    0xB8,
    0x03,
    0x88,
    0xA8,
    0xF8,
    0x03,
    0x38,
    0x20,
    0xF8,
    0x03,
    0xB8,
    0xA8,
    0xE8,
    0x03,
    0xF8,
    0xA8,
    0xE8,
    0x03,
    0x08,
    0x08,
    0xF8,
    0x03,
    0xF8,
    0xA8,
    0xF8,
    0x03,
    0xB8,
    0xA8,
    0xF8,
};

const uint8_t dig5x8rn[] PROGMEM = {
    6,
    0, 0, 0, 0, 0, 0,                                         // space
    1, B01011111, B00000000, B00000000, 0, 0,                 // !
    3, B00000011, B00000000, B00000011, 0, 0,                 // "
    3, B00000010, B01111111, B00000010, 0, 0,                 // # up
    3, B00100000, B01111111, B00100000, 0, 0,                 // $ down
    3, B01100001, B00011100, B01000011, 0, 0,                 // %
    0, 0, 0, 0, 0, 0,                                         // &
    1, B00000001, B00000000, B00000000, 0, 0,                 // '
    2, B00111110, B01000001, B00000000, 0, 0,                 // (
    2, B01000001, B00111110, B00000000, 0, 0,                 // )
    0, 0, 0, 0, 0, 0,                                         // *
    5, B00001000, B00001000, B00111110, B00001000, B00001000, // +
    2, B10000000, B01000000, B00000000, 0, 0,                 // ,
    5, B00001000, B00001000, B00001000, B00001000, B00001000, // -
    1, B01000000, B00000000, B00000000, 0, 0,                 // .
    3, B01100000, B00011100, B00000011, 0, 0,                 // /
    0x05, 0x7E, 0x81, 0x81, 0x81, 0x7E,
    0x04, 0x04, 0x02, 0xFF, 0xFF, 0x00,
    0x05, 0xF1, 0x89, 0x89, 0x8F, 0x86,
    0x05, 0x81, 0x89, 0x89, 0x89, 0x76,
    0x05, 0x1F, 0x10, 0x10, 0xFE, 0x08,
    0x05, 0x8F, 0x89, 0x89, 0xF9, 0x71,
    0x05, 0x7E, 0x89, 0x89, 0xF9, 0x70,
    0x05, 0x01, 0xC1, 0xF1, 0x3F, 0x0F,
    0x05, 0x76, 0x89, 0x89, 0x89, 0x76,
    0x05, 0x0E, 0x91, 0x91, 0x91, 0x7E,
    1, B00100100, B00000000, B00000000, B00000000, B00000000, // :
};

const uint8_t font[] PROGMEM = {
    6,
    2, B00000000, B00000000, B00000000, B00000000, B00000000, // space
    1, B01011111, B00000000, B00000000, B00000000, B00000000, // !
    3, B00000011, B00000000, B00000011, B00000000, B00000000, // "
    5, B00010100, B00111110, B00010100, B00111110, B00010100, // #
    4, B00100100, B01101010, B00101011, B00010010, B00000000, // $
    5, B01100011, B00010011, B00001000, B01100100, B01100011, // %
    5, B00110110, B01001001, B01010110, B00100000, B01010000, // &
    1, B00000011, B00000000, B00000000, B00000000, B00000000, // '
    3, B00011100, B00100010, B01000001, B00000000, B00000000, // (
    3, B01000001, B00100010, B00011100, B00000000, B00000000, // )
    5, B00101000, B00011000, B00001110, B00011000, B00101000, // *
    5, B00001000, B00001000, B00111110, B00001000, B00001000, // +
    2, B10110000, B01110000, B00000000, B00000000, B00000000, // ,
    3, B00001000, B00001000, B00001000, B00000000, B00000000, // -
    1, B01000000, B00000000, B00000000, B00000000, B00000000, // .
    3, B01100000, B00011100, B00000011, B00000000, B00000000, // /
    4, B00111110, B01000001, B01000001, B00111110, B00000000, // 0
    3, B01000010, B01111111, B01000000, B00000000, B00000000, // 1
    4, B01100010, B01010001, B01001001, B01000110, B00000000, // 2
    4, B00100010, B01000001, B01001001, B00110110, B00000000, // 3
    4, B00011000, B00010100, B00010010, B01111111, B00000000, // 4
    4, B00100111, B01000101, B01000101, B00111001, B00000000, // 5
    4, B00111110, B01001001, B01001001, B00110010, B00000000, // 6
    4, B00000001, B01110001, B00001001, B00000111, B00000000, // 7
    4, B00110110, B01001001, B01001001, B00110110, B00000000, // 8
    4, B00100110, B01001001, B01001001, B00111110, B00000000, // 9
    1, B01000100, B00000000, B00000000, B00000000, B00000000, // :
    2, B10000000, B01010000, B00000000, B00000000, B00000000, // ;
    3, B00010000, B00101000, B01000100, B00000000, B00000000, // <
    3, B00010100, B00010100, B00010100, B00000000, B00000000, // =
    3, B01000100, B00101000, B00010000, B00000000, B00000000, // >
    4, B00000010, B01011001, B00001001, B00000110, B00000000, // ?
    5, B00111110, B01001001, B01010101, B01011101, B00001110, // @
    4, B01111110, B00010001, B00010001, B01111110, B00000000, // A
    4, B01111111, B01001001, B01001001, B00110110, B00000000, // B
    4, B00111110, B01000001, B01000001, B00100010, B00000000, // C
    4, B01111111, B01000001, B01000001, B00111110, B00000000, // D
    4, B01111111, B01001001, B01001001, B01000001, B00000000, // E
    4, B01111111, B00001001, B00001001, B00000001, B00000000, // F
    4, B00111110, B01000001, B01001001, B01111010, B00000000, // G
    4, B01111111, B00001000, B00001000, B01111111, B00000000, // H
    3, B01000001, B01111111, B01000001, B00000000, B00000000, // I
    4, B00110000, B01000000, B01000001, B00111111, B00000000, // J
    4, B01111111, B00001000, B00010100, B01100011, B00000000, // K
    4, B01111111, B01000000, B01000000, B01000000, B00000000, // L
    5, B01111111, B00000010, B00001100, B00000010, B01111111, // M
    5, B01111111, B00000100, B00001000, B00010000, B01111111, // N
    4, B00111110, B01000001, B01000001, B00111110, B00000000, // O
    4, B01111111, B00001001, B00001001, B00000110, B00000000, // P
    4, B00111110, B01000001, B01000001, B10111110, B00000000, // Q
    4, B01111111, B00001001, B00001001, B01110110, B00000000, // R
    4, B00100110, B01001001, B01001001, B00110010, B00000000, // S
    5, B00000001, B00000001, B01111111, B00000001, B00000001, // T
    4, B00111111, B01000000, B01000000, B00111111, B00000000, // U
    5, B00001111, B00110000, B01000000, B00110000, B00001111, // V
    5, B00111111, B01000000, B00111000, B01000000, B00111111, // W
    5, B01100011, B00010100, B00001000, B00010100, B01100011, // X
    5, B00000111, B00001000, B01110000, B00001000, B00000111, // Y
    4, B01100001, B01010001, B01001001, B01000111, B00000000, // Z
    2, B01111111, B01000001, B00000000, B00000000, B00000000, // [
    4, B00000001, B00000110, B00011000, B01100000, B00000000, // \ backslash
    2, B01000001, B01111111, B00000000, B00000000, B00000000, // ]
    3, B00000010, B00000001, B00000010, B00000000, B00000000, // hat
    0, B01000000, B01000000, B01000000, B01000000, B00000000, // _
    3, B00000010, B00000101, B00000010, B00000000, B00000000, // ` = deg
    4, B00100000, B01010100, B01010100, B01111000, B00000000, // a
    4, B01111111, B01000100, B01000100, B00111000, B00000000, // b
    4, B00111000, B01000100, B01000100, B00101000, B00000000, // c
    4, B00111000, B01000100, B01000100, B01111111, B00000000, // d
    4, B00111000, B01010100, B01010100, B00011000, B00000000, // e
    3, B00000100, B01111110, B00000101, B00000000, B00000000, // f
    4, B10011000, B10100100, B10100100, B01111000, B00000000, // g
    4, B01111111, B00000100, B00000100, B01111000, B00000000, // h
    3, B01000100, B01111101, B01000000, B00000000, B00000000, // i
    4, B01000000, B10000000, B10000100, B01111101, B00000000, // j
    4, B01111111, B00010000, B00101000, B01000100, B00000000, // k
    3, B01000001, B01111111, B01000000, B00000000, B00000000, // l
    5, B01111100, B00000100, B01111100, B00000100, B01111000, // m
    4, B01111100, B00000100, B00000100, B01111000, B00000000, // n
    4, B00111000, B01000100, B01000100, B00111000, B00000000, // o
    4, B11111100, B00100100, B00100100, B00011000, B00000000, // p
    4, B00011000, B00100100, B00100100, B11111100, B00000000, // q
    4, B01111100, B00001000, B00000100, B00000100, B00000000, // r
    4, B01001000, B01010100, B01010100, B00100100, B00000000, // s
    3, B00000100, B00111111, B01000100, B00000000, B00000000, // t
    4, B00111100, B01000000, B01000000, B01111100, B00000000, // u
    5, B00011100, B00100000, B01000000, B00100000, B00011100, // v
    5, B00111100, B01000000, B00111100, B01000000, B00111100, // w
    5, B01000100, B00101000, B00010000, B00101000, B01000100, // x
    4, B10011100, B10100000, B10100000, B01111100, B00000000, // y
    3, B01100100, B01010100, B01001100, B00000000, B00000000, // z
    3, B00001000, B00110110, B01000001, B00000000, B00000000, // {
    1, B00100100, B00000000, B00000000, B00000000, B00000000, // |
    3, B01000001, B00110110, B00001000, B00000000, B00000000, // }
    4, B00001000, B00000100, B00001000, B00000100, B00000000, // ~

    5, B00100000, B01010100, B01010100, B11111000, B10000000, // a
    4, B00111000, B01000100, B01000110, B00101001, B00000000, // c
    4, B00111000, B01010100, B11010100, B10011000, B00000000, // e
    3, B01010001, B01111111, B01000100, B00000000, B00000000, // l
    4, B01111100, B00000100, B00000110, B01111001, B00000000, // n
    4, B00111000, B01000100, B01000110, B00111001, B00000000, // o
    4, B01001000, B01010100, B01010110, B00100101, B00000000, // s
    3, B01100100, B01010110, B01001101, B00000000, B00000000, // z
    3, B01100100, B01010101, B01001100, B00000000, B00000000, // z
    5, B01111110, B00010001, B00010001, B11111110, B10000000, // A
    4, B00111100, B01000010, B01000011, B00100101, B00000000, // C
    5, B01111111, B01001001, B01001001, B11000001, B10000000, // E
    4, B01111111, B01001000, B01000100, B01000000, B00000000, // L
    5, B01111110, B00000100, B00001010, B00010001, B01111110, // N
    4, B00111100, B01000110, B01000011, B00111100, B00000000, // O
    4, B00100100, B01001010, B01001011, B00110000, B00000000, // S
    4, B01100010, B01010110, B01001011, B01000110, B00000000, // Z
    4, B01101001, B01011001, B01001101, B01001011, B00000000, // Z

    5, B00111110, B01010101, B01100001, B01010101, B00111110, // :)
    5, B00111110, B01100101, B01010001, B01100101, B00111110, // :(
    5, B00111110, B01000101, B01010001, B01000101, B00111110, // :o
    5, 0x06, 0x1F, 0x7E, 0x1F, 0x06,                          // heart
    5, 0x04, 0x02, 0x7F, 0x02, 0x04,                          // arrow up
    5, 0x10, 0x20, 0x7F, 0x20, 0x10,                          // arrow down
    3, B00000010, B00000101, B00000010, B00000000, B00000000, // deg
    5, B00001000, B00001000, B00101010, B00001000, B00001000, // -
};

// const uint8_t font5x8[] PROGMEM = { 6,
// 0x7F, 0x88, 0x88, 0x88, 0x7F, //  A
// 0xFF, 0x91, 0x91, 0x91, 0x6E, //  B
// 0x7E, 0x81, 0x81, 0x81, 0x42, //  C
// 0xFF, 0x81, 0x81, 0x42, 0x3C, //  D
// 0xFF, 0x91, 0x91, 0x91, 0x81, //  E
// 0xFF, 0x90, 0x90, 0x90, 0x80, //  F
// 0x7E, 0x81, 0x89, 0x89, 0x4E, //  G
// 0xFF, 0x10, 0x10, 0x10, 0xFF, //  H
// 0x81, 0x81, 0xFF, 0x81, 0x81, //  I
// 0x06, 0x01, 0x01, 0x01, 0xFE, //  J
// 0xFF, 0x18, 0x24, 0x42, 0x81, //  K
// 0xFF, 0x01, 0x01, 0x01, 0x01, //  L
// 0xFF, 0x40, 0x30, 0x40, 0xFF, //  M
// 0xFF, 0x40, 0x30, 0x08, 0xFF, //  N
// 0x7E, 0x81, 0x81, 0x81, 0x7E, //  O
// 0xFF, 0x88, 0x88, 0x88, 0x70, //  P
// 0x7E, 0x81, 0x85, 0x82, 0x7D, //  Q
// 0xFF, 0x88, 0x8C, 0x8A, 0x71, //  R
// 0x61, 0x91, 0x91, 0x91, 0x8E, //  S
// 0x80, 0x80, 0xFF, 0x80, 0x80, //  T
// 0xFE, 0x01, 0x01, 0x01, 0xFE, //  U
// 0xF0, 0x0C, 0x03, 0x0C, 0xF0, //  V
// 0xFF, 0x02, 0x0C, 0x02, 0xFF, //  W
// 0xC3, 0x24, 0x18, 0x24, 0xC3, //  X
// 0xE0, 0x10, 0x0F, 0x10, 0xE0, //  Y
// 0x83, 0x85, 0x99, 0xA1, 0xC1, //  Z
// 0x06, 0x29, 0x29, 0x29, 0x1F, //  a
// 0xFF, 0x09, 0x11, 0x11, 0x0E, //  b
// 0x1E, 0x21, 0x21, 0x21, 0x12, //  c
// 0x0E, 0x11, 0x11, 0x09, 0xFF, //  d
// 0x0E, 0x15, 0x15, 0x15, 0x0C, //  e
// 0x08, 0x7F, 0x88, 0x80, 0x40, //  f
// 0x30, 0x49, 0x49, 0x49, 0x7E, //  g
// 0xFF, 0x08, 0x10, 0x10, 0x0F, //  h
// 0x00, 0x00, 0x5F, 0x00, 0x00, //  i
// 0x02, 0x01, 0x21, 0xBE, 0x00, //  j
// 0xFF, 0x04, 0x0A, 0x11, 0x00, //  k
// 0x00, 0x81, 0xFF, 0x01, 0x00, //  l
// 0x3F, 0x20, 0x18, 0x20, 0x1F, //  m
// 0x3F, 0x10, 0x20, 0x20, 0x1F, //  n
// 0x0E, 0x11, 0x11, 0x11, 0x0E, //  o
// 0x3F, 0x24, 0x24, 0x24, 0x18, //  p
// 0x10, 0x28, 0x28, 0x18, 0x3F, //  q
// 0x1F, 0x08, 0x10, 0x10, 0x08, //  r
// 0x09, 0x15, 0x15, 0x15, 0x02, //  s
// 0x20, 0xFE, 0x21, 0x01, 0x02, //  t
// 0x1E, 0x01, 0x01, 0x02, 0x1F, //  u
// 0x1C, 0x02, 0x01, 0x02, 0x1C, //  v
// 0x1E, 0x01, 0x0E, 0x01, 0x1E, //  w
// 0x11, 0x0A, 0x04, 0x0A, 0x11, //  x
// 0x00, 0x39, 0x05, 0x05, 0x3E, //  y
// 0x11, 0x13, 0x15, 0x19, 0x11, //  z
// 0x00, 0x41, 0xFF, 0x01, 0x00, //  1
// 0x43, 0x85, 0x89, 0x91, 0x61, //  2
// 0x42, 0x81, 0x91, 0x91, 0x6E, //  3
// 0x18, 0x28, 0x48, 0xFF, 0x08, //  4
// 0xF2, 0x91, 0x91, 0x91, 0x8E, //  5
// 0x1E, 0x29, 0x49, 0x89, 0x86, //  6
// 0x80, 0x8F, 0x90, 0xA0, 0xC0, //  7
// 0x6E, 0x91, 0x91, 0x91, 0x6E, //  8
// 0x70, 0x89, 0x89, 0x8A, 0x7C, //  9
// 0x60, 0x80, 0x8D, 0x90, 0x60, //  ?
// 0x00, 0x00, 0xFD, 0x00, 0x00, //  !
// 0x7E, 0x89, 0x91, 0xA1, 0x7E, //  0
// 0x66, 0x89, 0x8F, 0x81, 0x7E, //  @
// 0x24, 0xFF, 0x24, 0xFF, 0x24, //  #
// 0x76, 0x89, 0x95, 0x62, 0x05, //  &
// 0x00, 0x3C, 0x42, 0x81, 0x00, //  (
// 0x00, 0x81, 0x42, 0x3C, 0x00, //  )
// 0x08, 0x08, 0x3E, 0x08, 0x08, //  "+"
// 0x08, 0x08, 0x08, 0x08, 0x08, //  -
// 0x14, 0x14, 0x14, 0x14, 0x14, //  =
// 0x10, 0x10, 0x54, 0x38, 0x10, //  R arrow
// 0x08, 0x1C, 0x2A, 0x08, 0x08, //  L arrow
// 0x12, 0x2A, 0x7F, 0x2A, 0x24, //  $
// 0x44, 0x02, 0x12, 0x02, 0x44, //  smile
// 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, //  5x8 block
// };