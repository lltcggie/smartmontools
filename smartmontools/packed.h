#ifdef _MSC_VER
#define PACKED
#pragma pack(push,1)
#elif defined(__GNUC__)
#define PACKED __attribute__ ((__packed__))
#endif
