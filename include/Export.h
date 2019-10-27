#pragma once

#if defined _WIN32 || defined __CYGWIN__
#define BYTESTREAM_API __declspec(dllexport)
#else
#if __GNUC__ >= 4
#define BYTESTREAM_API __attribute__ ((visibility ("default")))
#else
#define BYTESTREAM_API
#endif
#endif