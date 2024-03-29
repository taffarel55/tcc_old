
// This is a TensorFlow Lite model file that has been converted into a C data
// array using the tensorflow.lite.util.convert_bytes_to_c_source() function.
// This form is useful for compiling into a binary for devices that don't have a
// file system.


// We need to keep the data array aligned on some architectures.
#ifdef __has_attribute
#define HAVE_ATTRIBUTE(x) __has_attribute(x)
#else
#define HAVE_ATTRIBUTE(x) 0
#endif
#if HAVE_ATTRIBUTE(aligned) || (defined(__GNUC__) && !defined(__clang__))
#define DATA_ALIGN_ATTRIBUTE __attribute__((aligned(4)))
#else
#define DATA_ALIGN_ATTRIBUTE
#endif

const unsigned char sine_model[] DATA_ALIGN_ATTRIBUTE = {
    0x20, 0x00, 0x00, 0x00, 0x54, 0x46, 0x4c, 0x33, 0x00, 0x00, 0x00, 0x00, 0x14,
    0x00, 0x20, 0x00, 0x1c, 0x00, 0x18, 0x00, 0x14, 0x00, 0x10, 0x00, 0x0c, 0x00,
    0x00, 0x00, 0x08, 0x00, 0x04, 0x00, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00,
    0x00, 0x88, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x3c, 0x05, 0x00, 0x00,
    0x4c, 0x05, 0x00, 0x00, 0x88, 0x0d, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6e, 0xfa, 0xff, 0xff, 0x0c, 0x00,
    0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00,
    0x00, 0x73, 0x65, 0x72, 0x76, 0x69, 0x6e, 0x67, 0x5f, 0x64, 0x65, 0x66, 0x61,
    0x75, 0x6c, 0x74, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x94,
    0xff, 0xff, 0xff, 0x0c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x07, 0x00,
    0x00, 0x00, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x35, 0x00, 0x01, 0x00, 0x00,
    0x00, 0x04, 0x00, 0x00, 0x00, 0x02, 0xfa, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00,
    0x0d, 0x00, 0x00, 0x00, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x33, 0x5f, 0x69,
    0x6e, 0x70, 0x75, 0x74, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x34, 0x00,
    0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xdc, 0xff, 0xff, 0xff, 0x0f, 0x00, 0x00,
    0x00, 0x04, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x43, 0x4f, 0x4e, 0x56,
    0x45, 0x52, 0x53, 0x49, 0x4f, 0x4e, 0x5f, 0x4d, 0x45, 0x54, 0x41, 0x44, 0x41,
    0x54, 0x41, 0x00, 0x08, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00, 0x08, 0x00,
    0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00,
    0x00, 0x6d, 0x69, 0x6e, 0x5f, 0x72, 0x75, 0x6e, 0x74, 0x69, 0x6d, 0x65, 0x5f,
    0x76, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x00, 0x10, 0x00, 0x00, 0x00, 0x58,
    0x04, 0x00, 0x00, 0x50, 0x04, 0x00, 0x00, 0x3c, 0x04, 0x00, 0x00, 0x14, 0x04,
    0x00, 0x00, 0xa4, 0x03, 0x00, 0x00, 0x54, 0x01, 0x00, 0x00, 0xe4, 0x00, 0x00,
    0x00, 0xbc, 0x00, 0x00, 0x00, 0xb4, 0x00, 0x00, 0x00, 0xac, 0x00, 0x00, 0x00,
    0xa4, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00, 0x8c,
    0x00, 0x00, 0x00, 0x6c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xbe, 0xfa,
    0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00,
    0x00, 0x08, 0x00, 0x0e, 0x00, 0x08, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00,
    0x10, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x08,
    0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0x00,
    0x00, 0x00, 0xeb, 0x03, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x0c,
    0x00, 0x08, 0x00, 0x04, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x32,
    0x2e, 0x31, 0x32, 0x2e, 0x30, 0x00, 0x00, 0x22, 0xfb, 0xff, 0xff, 0x04, 0x00,
    0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x31, 0x2e, 0x31, 0x34, 0x2e, 0x30, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0xf4, 0xff, 0xff,
    0x4c, 0xf4, 0xff, 0xff, 0x50, 0xf4, 0xff, 0xff, 0x54, 0xf4, 0xff, 0xff, 0x58,
    0xf4, 0xff, 0xff, 0x5c, 0xf4, 0xff, 0xff, 0x56, 0xfb, 0xff, 0xff, 0x04, 0x00,
    0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0xd8, 0xd8, 0xf0, 0xa2, 0xf8, 0xfa, 0x00,
    0xe2, 0x37, 0x05, 0xd5, 0xbc, 0xd9, 0xbe, 0x81, 0xe9, 0x3a, 0xf1, 0x65, 0xe1,
    0xc4, 0xe6, 0xb4, 0xaf, 0x7a, 0xfb, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x60,
    0x00, 0x00, 0x00, 0x0d, 0x07, 0x00, 0x00, 0xbb, 0x06, 0x00, 0x00, 0x35, 0x00,
    0x00, 0x00, 0x55, 0x09, 0x00, 0x00, 0xb5, 0xf8, 0xff, 0xff, 0xc0, 0xf5, 0xff,
    0xff, 0xfa, 0xf9, 0xff, 0xff, 0x1e, 0xf9, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff,
    0x4a, 0xfc, 0xff, 0xff, 0x20, 0x05, 0x00, 0x00, 0x85, 0x0a, 0x00, 0x00, 0x92,
    0x07, 0x00, 0x00, 0x13, 0x09, 0x00, 0x00, 0x13, 0x0d, 0x00, 0x00, 0xc5, 0x04,
    0x00, 0x00, 0x05, 0xff, 0xff, 0xff, 0x9f, 0x06, 0x00, 0x00, 0x61, 0xf7, 0xff,
    0xff, 0xaf, 0x04, 0x00, 0x00, 0x43, 0x03, 0x00, 0x00, 0xd5, 0x04, 0x00, 0x00,
    0xd6, 0x06, 0x00, 0x00, 0xcc, 0x04, 0x00, 0x00, 0xe6, 0xfb, 0xff, 0xff, 0x04,
    0x00, 0x00, 0x00, 0x40, 0x02, 0x00, 0x00, 0xfa, 0x1a, 0x11, 0x30, 0xf9, 0xeb,
    0xf3, 0xfa, 0xe0, 0xf1, 0x01, 0x13, 0x13, 0x1c, 0x26, 0xfb, 0xc9, 0xfa, 0xc5,
    0x08, 0x21, 0x0c, 0x17, 0x29, 0xf8, 0x10, 0xf0, 0xfd, 0xf4, 0xfe, 0x00, 0x0d,
    0xf8, 0xfa, 0xfb, 0xfa, 0x01, 0x07, 0xf5, 0xf6, 0x0c, 0xf4, 0xfa, 0xf8, 0x02,
    0xf1, 0xf3, 0x11, 0xc1, 0xcf, 0xf3, 0xcb, 0xf6, 0xff, 0xfc, 0xf2, 0x34, 0x05,
    0xdd, 0xc9, 0xd3, 0xdd, 0xd6, 0xcc, 0x20, 0xe3, 0xfd, 0xdb, 0xba, 0xee, 0xc5,
    0xcf, 0xa9, 0xaf, 0x91, 0xcb, 0x9c, 0x9e, 0x8f, 0xbd, 0xb2, 0x83, 0xb5, 0xbf,
    0x97, 0xbd, 0x04, 0x90, 0xc1, 0x81, 0x2a, 0x93, 0xcf, 0x9d, 0xe1, 0xe4, 0x1a,
    0x0d, 0x01, 0x32, 0xf8, 0xfc, 0xed, 0x1d, 0xd0, 0xed, 0x18, 0x2c, 0x28, 0x09,
    0x28, 0x12, 0xd8, 0x0a, 0xc1, 0x15, 0x0d, 0x16, 0x2b, 0x2c, 0x0b, 0xec, 0x03,
    0xfa, 0xef, 0xf1, 0x01, 0xfc, 0xef, 0xeb, 0x05, 0xfc, 0x07, 0xf1, 0x04, 0xf0,
    0xf2, 0xfd, 0x0b, 0x07, 0x11, 0xf3, 0x00, 0xec, 0xe1, 0xd2, 0xed, 0xdb, 0xfe,
    0x02, 0xe5, 0xeb, 0x2a, 0xf1, 0xce, 0xe2, 0xd6, 0xcd, 0xc7, 0xde, 0x31, 0xe7,
    0x10, 0xf2, 0xe2, 0xd2, 0xc7, 0xeb, 0xc8, 0xc6, 0xdd, 0xda, 0xee, 0xea, 0xfd,
    0xf0, 0x25, 0x02, 0xdb, 0xc3, 0xd0, 0xc7, 0xc9, 0xf0, 0x3a, 0xe1, 0x01, 0xd7,
    0xd9, 0xd7, 0xe1, 0xd0, 0xe8, 0xd0, 0xde, 0xee, 0x05, 0x00, 0xfe, 0xe2, 0x34,
    0x01, 0xf1, 0xd2, 0xd6, 0xd3, 0xd1, 0xe2, 0x37, 0xf6, 0x13, 0xef, 0xdc, 0xd7,
    0xcd, 0xe8, 0x06, 0xec, 0xec, 0xfd, 0xf0, 0xf6, 0x01, 0xf5, 0x0c, 0xfd, 0x08,
    0xf3, 0x07, 0xf8, 0x04, 0x00, 0xf9, 0xf5, 0xf7, 0x10, 0x04, 0x06, 0x04, 0x14,
    0xf9, 0x12, 0xf9, 0xed, 0xf9, 0x0d, 0xf2, 0x00, 0x03, 0xfb, 0xfb, 0xec, 0xec,
    0xf7, 0xfb, 0xf3, 0xf4, 0xf1, 0xef, 0xf6, 0xee, 0xf7, 0x11, 0xfe, 0x20, 0x11,
    0xf5, 0x1a, 0xee, 0x01, 0x0b, 0xf0, 0xe8, 0x01, 0x1c, 0x29, 0x05, 0x28, 0x3b,
    0x00, 0xc6, 0x06, 0xb8, 0x17, 0x14, 0xf9, 0x14, 0x25, 0x0f, 0xfd, 0xf1, 0xef,
    0x0c, 0xec, 0x09, 0x02, 0xf1, 0xf0, 0xec, 0xf9, 0x06, 0xf7, 0x11, 0xf6, 0xfd,
    0xef, 0xf6, 0x05, 0x06, 0x04, 0x03, 0x0e, 0xcb, 0xe5, 0xda, 0xe2, 0xec, 0x0f,
    0x01, 0xec, 0x1d, 0xfc, 0xe6, 0xc4, 0xe1, 0xdc, 0xc5, 0xd4, 0x28, 0xe4, 0x0b,
    0xf2, 0xcd, 0xd9, 0xe9, 0xdc, 0x1e, 0x20, 0x22, 0x0e, 0x26, 0x1d, 0x14, 0x16,
    0x1d, 0x2b, 0x1e, 0x19, 0x1f, 0x17, 0xe0, 0x1b, 0xfa, 0x22, 0xe7, 0x05, 0x0d,
    0x27, 0x03, 0x0d, 0x04, 0xf4, 0x09, 0xfe, 0xf3, 0xec, 0xed, 0xef, 0x10, 0xf7,
    0xf0, 0x0b, 0x0d, 0xf9, 0x0f, 0xfd, 0xf2, 0x07, 0xf6, 0x01, 0x07, 0x06, 0x0d,
    0xf0, 0x00, 0xf0, 0xef, 0xfd, 0x0b, 0x10, 0xed, 0xee, 0xf8, 0xf3, 0x12, 0x07,
    0x0b, 0xf6, 0xf8, 0xf4, 0x11, 0xf6, 0xee, 0xf2, 0x07, 0xf0, 0xed, 0x0d, 0x02,
    0x12, 0x19, 0xea, 0x0f, 0x17, 0x1b, 0x08, 0x06, 0x2a, 0x0c, 0x0d, 0x1b, 0xf0,
    0xf6, 0x1e, 0x01, 0x2d, 0xeb, 0x24, 0x0d, 0x0f, 0xf1, 0x15, 0xde, 0xd5, 0xef,
    0xe1, 0xfb, 0xf2, 0x0d, 0xe1, 0x36, 0xef, 0xd7, 0xd1, 0xdc, 0xcc, 0xf2, 0xe4,
    0x2c, 0xd8, 0x18, 0xdf, 0xed, 0xf8, 0xf2, 0xd4, 0x16, 0x06, 0x0d, 0x09, 0x0a,
    0xfc, 0x17, 0x14, 0xe4, 0x1b, 0x06, 0x00, 0x13, 0xf4, 0xdd, 0x03, 0xf6, 0x04,
    0x13, 0x1e, 0x0c, 0x05, 0x0e, 0x08, 0x05, 0x09, 0x02, 0x01, 0xf7, 0xff, 0x04,
    0x08, 0x10, 0x07, 0xf2, 0x06, 0x0b, 0xfa, 0x05, 0xf0, 0xfc, 0x01, 0xf5, 0xfd,
    0xef, 0xfc, 0xf6, 0x00, 0x16, 0x18, 0x2b, 0xfc, 0x18, 0x0d, 0x2c, 0x18, 0x09,
    0x1c, 0x15, 0xf2, 0x07, 0x00, 0xe2, 0x23, 0x0e, 0x2e, 0xe2, 0x23, 0xf5, 0x29,
    0x05, 0xf9, 0xfd, 0xfd, 0xfb, 0x0e, 0xfe, 0x0d, 0xf2, 0x09, 0x10, 0xf6, 0x0d,
    0xf7, 0x0c, 0x0c, 0xfa, 0x05, 0xfc, 0x0d, 0xfb, 0xf8, 0xeb, 0xec, 0x13, 0xee,
    0x0a, 0xf8, 0x13, 0xef, 0x0c, 0x03, 0xf8, 0xef, 0xfc, 0x08, 0xf4, 0xf0, 0x0d,
    0x0f, 0x06, 0xfe, 0xf6, 0xfb, 0xf3, 0x0a, 0xef, 0xfc, 0x0e, 0xfe, 0x32, 0xfe,
    0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0xe7, 0xfc, 0xff,
    0xff, 0x00, 0x00, 0x00, 0x00, 0xce, 0xfa, 0xff, 0xff, 0xe1, 0xfd, 0xff, 0xff,
    0x14, 0x04, 0x00, 0x00, 0x2d, 0xf7, 0xff, 0xff, 0x25, 0xfe, 0xff, 0xff, 0xa0,
    0xfa, 0xff, 0xff, 0x8a, 0xfb, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x9f, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x23, 0xfe, 0xff,
    0xff, 0x7f, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x4d, 0x07, 0x00, 0x00, 0x4a, 0x00, 0x00, 0x00, 0x70, 0x08, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xcc, 0x0a, 0x00, 0x00, 0xa6, 0xff, 0xff, 0xff, 0x00, 0x00,
    0x00, 0x00, 0x9e, 0xfe, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00,
    0x00, 0xb7, 0x06, 0xb5, 0x7f, 0xc5, 0xe9, 0xd8, 0xc0, 0xe5, 0xfd, 0xf9, 0xb7,
    0xfd, 0xd9, 0x1a, 0x0f, 0xf9, 0x16, 0xd8, 0x1a, 0x03, 0x2a, 0x04, 0xf5, 0xc2,
    0xfe, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x1d, 0x0e,
    0x00, 0x00, 0xdc, 0xf7, 0xff, 0xff, 0xe0, 0xf7, 0xff, 0xff, 0x0f, 0x00, 0x00,
    0x00, 0x4d, 0x4c, 0x49, 0x52, 0x20, 0x43, 0x6f, 0x6e, 0x76, 0x65, 0x72, 0x74,
    0x65, 0x64, 0x2e, 0x00, 0x01, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x0e, 0x00, 0x18, 0x00, 0x14, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x08, 0x00,
    0x04, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00,
    0x00, 0x78, 0x01, 0x00, 0x00, 0x7c, 0x01, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00,
    0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x06,
    0x00, 0x00, 0x00, 0x40, 0x01, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x00, 0xb0, 0x00,
    0x00, 0x00, 0x6c, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00,
    0x0a, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x03,
    0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x01, 0x00,
    0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x52, 0xff, 0xff, 0xff, 0x14, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x08, 0x10, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x94, 0xf8, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x0b,
    0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x02, 0x00,
    0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x86, 0xff, 0xff, 0xff, 0x1c, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x08, 0x1c, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x07, 0x00, 0x06,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x0a, 0x00,
    0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00,
    0x00, 0x03, 0x00, 0x00, 0x00, 0xc6, 0xff, 0xff, 0xff, 0x1c, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x09, 0x1c, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x04, 0x00, 0x06, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x01, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00,
    0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00,
    0x18, 0x00, 0x14, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x0b, 0x00, 0x04, 0x00, 0x0e,
    0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x10, 0x00,
    0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x50, 0xf9, 0xff,
    0xff, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
    0x07, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x0a, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x04, 0x00, 0x0a, 0x00,
    0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00,
    0x00, 0x07, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x30, 0x06, 0x00, 0x00, 0x94, 0x05,
    0x00, 0x00, 0x0c, 0x05, 0x00, 0x00, 0x90, 0x04, 0x00, 0x00, 0x24, 0x04, 0x00,
    0x00, 0xa8, 0x03, 0x00, 0x00, 0x3c, 0x03, 0x00, 0x00, 0xc8, 0x02, 0x00, 0x00,
    0x14, 0x02, 0x00, 0x00, 0x90, 0x01, 0x00, 0x00, 0xdc, 0x00, 0x00, 0x00, 0x60,
    0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x1a, 0xfa, 0xff, 0xff, 0x00, 0x00,
    0x00, 0x01, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00,
    0x00, 0x0d, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
    0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x04, 0xfa, 0xff, 0xff, 0x19,
    0x00, 0x00, 0x00, 0x53, 0x74, 0x61, 0x74, 0x65, 0x66, 0x75, 0x6c, 0x50, 0x61,
    0x72, 0x74, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x65, 0x64, 0x43, 0x61, 0x6c, 0x6c,
    0x3a, 0x30, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0xbe, 0xfd, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x18,
    0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x0c, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x50, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00,
    0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x04, 0xfb, 0xff, 0xff,
    0x08, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x99, 0x44,
    0x01, 0x3c, 0x1a, 0x00, 0x00, 0x00, 0x53, 0x74, 0x61, 0x74, 0x65, 0x66, 0x75,
    0x6c, 0x50, 0x61, 0x72, 0x74, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x65, 0x64, 0x43,
    0x61, 0x6c, 0x6c, 0x3a, 0x30, 0x31, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x36, 0xfe, 0xff, 0xff, 0x00, 0x00,
    0x00, 0x01, 0x18, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00,
    0x00, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x88, 0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x18, 0x00, 0x00, 0x00, 0x7c,
    0xfb, 0xff, 0xff, 0x08, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x01, 0x00,
    0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00,
    0x00, 0x75, 0x11, 0xfb, 0x3a, 0x52, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75,
    0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x64, 0x65, 0x6e, 0x73,
    0x65, 0x5f, 0x34, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x3b, 0x73, 0x65,
    0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x64, 0x65,
    0x6e, 0x73, 0x65, 0x5f, 0x34, 0x2f, 0x52, 0x65, 0x6c, 0x75, 0x3b, 0x73, 0x65,
    0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x64, 0x65,
    0x6e, 0x73, 0x65, 0x5f, 0x34, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64,
    0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00,
    0x00, 0xe6, 0xfe, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x18, 0x00, 0x00, 0x00,
    0x20, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x09, 0x58, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff,
    0xff, 0xff, 0x18, 0x00, 0x00, 0x00, 0x2c, 0xfc, 0xff, 0xff, 0x08, 0x00, 0x00,
    0x00, 0x14, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x80, 0x3b, 0x1c, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e,
    0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f,
    0x33, 0x2f, 0x53, 0x6f, 0x66, 0x74, 0x6d, 0x61, 0x78, 0x00, 0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x66,
    0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x18, 0x00, 0x00, 0x00, 0x20, 0x00,
    0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x09, 0x70, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
    0x18, 0x00, 0x00, 0x00, 0xac, 0xfc, 0xff, 0xff, 0x08, 0x00, 0x00, 0x00, 0x10,
    0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x6b, 0x3b, 0x3d, 0x3d, 0x38, 0x00, 0x00,
    0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31,
    0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x33, 0x2f, 0x4d, 0x61, 0x74, 0x4d,
    0x75, 0x6c, 0x3b, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c,
    0x5f, 0x31, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x33, 0x2f, 0x42, 0x69,
    0x61, 0x73, 0x41, 0x64, 0x64, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x00, 0x20,
    0x00, 0x1c, 0x00, 0x1b, 0x00, 0x14, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x08, 0x00, 0x07, 0x00, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x18, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
    0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x48, 0x00, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x5c, 0xfd,
    0xff, 0xff, 0x08, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00,
    0x00, 0x80, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x19, 0x69, 0xc9, 0x3c, 0x0c, 0x00, 0x00, 0x00, 0x74,
    0x66, 0x6c, 0x2e, 0x71, 0x75, 0x61, 0x6e, 0x74, 0x69, 0x7a, 0x65, 0x00, 0x00,
    0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00,
    0x00, 0xd2, 0xfd, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x14, 0x00, 0x00, 0x00,
    0x30, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x44,
    0x00, 0x00, 0x00, 0xbc, 0xfd, 0xff, 0xff, 0x08, 0x00, 0x00, 0x00, 0x10, 0x00,
    0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x01, 0x00, 0x00, 0x00, 0x14, 0x40, 0x15, 0x3c, 0x1b, 0x00, 0x00, 0x00,
    0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x2f,
    0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x33, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75,
    0x6c, 0x00, 0x02, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00,
    0x00, 0x3a, 0xfe, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x14, 0x00, 0x00, 0x00,
    0x34, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x58,
    0x00, 0x00, 0x00, 0x24, 0xfe, 0xff, 0xff, 0x08, 0x00, 0x00, 0x00, 0x14, 0x00,
    0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x2b, 0xd9, 0x6a, 0x39,
    0x2b, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61,
    0x6c, 0x5f, 0x31, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x33, 0x2f, 0x42,
    0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x2f, 0x52, 0x65, 0x61, 0x64, 0x56, 0x61,
    0x72, 0x69, 0x61, 0x62, 0x6c, 0x65, 0x4f, 0x70, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x18, 0x00, 0x00, 0x00, 0xb2, 0xfe, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x14,
    0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x09, 0x44, 0x00, 0x00, 0x00, 0x9c, 0xfe, 0xff, 0xff, 0x08, 0x00, 0x00,
    0x00, 0x10, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf8, 0x4a, 0x8c, 0x3c, 0x1b,
    0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c,
    0x5f, 0x31, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x34, 0x2f, 0x4d, 0x61,
    0x74, 0x4d, 0x75, 0x6c, 0x00, 0x02, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00,
    0x18, 0x00, 0x00, 0x00, 0x1a, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x14,
    0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x02, 0x58, 0x00, 0x00, 0x00, 0x04, 0xff, 0xff, 0xff, 0x08, 0x00, 0x00,
    0x00, 0x14, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf8,
    0x4a, 0x8c, 0x38, 0x2b, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e,
    0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f,
    0x34, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x2f, 0x52, 0x65, 0x61,
    0x64, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6c, 0x65, 0x4f, 0x70, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x92, 0xff, 0xff, 0xff, 0x00, 0x00,
    0x00, 0x01, 0x14, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x09, 0x48, 0x00, 0x00, 0x00, 0x7c, 0xff, 0xff, 0xff,
    0x08, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00,
    0x00, 0x00, 0x79, 0x8c, 0xab, 0x3c, 0x1b, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71,
    0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x64, 0x65, 0x6e,
    0x73, 0x65, 0x5f, 0x35, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x16, 0x00, 0x1c, 0x00, 0x18, 0x00, 0x17, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x08,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x16, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x20, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x60, 0x00, 0x00, 0x00, 0x0c, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00,
    0x00, 0x08, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x6d,
    0x3e, 0x28, 0x38, 0x2b, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e,
    0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f,
    0x35, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x2f, 0x52, 0x65, 0x61,
    0x64, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6c, 0x65, 0x4f, 0x70, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x00, 0x1c, 0x00,
    0x18, 0x00, 0x00, 0x00, 0x14, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x08, 0x00, 0x07, 0x00, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
    0x14, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff,
    0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00,
    0x00, 0x1f, 0x00, 0x00, 0x00, 0x73, 0x65, 0x72, 0x76, 0x69, 0x6e, 0x67, 0x5f,
    0x64, 0x65, 0x66, 0x61, 0x75, 0x6c, 0x74, 0x5f, 0x64, 0x65, 0x6e, 0x73, 0x65,
    0x5f, 0x33, 0x5f, 0x69, 0x6e, 0x70, 0x75, 0x74, 0x3a, 0x30, 0x00, 0x02, 0x00,
    0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00,
    0x00, 0x58, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00,
    0x04, 0x00, 0x00, 0x00, 0xe0, 0xff, 0xff, 0xff, 0x06, 0x00, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0xf0, 0xff, 0xff, 0xff, 0x19, 0x00,
    0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x0c, 0x00, 0x10,
    0x00, 0x0f, 0x00, 0x00, 0x00, 0x08, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x09, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x0c,
    0x00, 0x0c, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x0c, 0x00,
    0x00, 0x00, 0x72, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x72,
};
const int sine_model_len = 3624;
