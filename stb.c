#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"
#define STB_IMAGE_RESIZE_IMPLEMENTATION
#include "stb_image_resize.h"
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb_image_write.h"

#ifndef STB_C_DLLEXPORT
#ifdef _MSC_VER
#define STB_C_DLLEXPORT extern __declspec(dllexport)
#else
#define STB_C_DLLEXPORT extern
#endif
#endif

extern "C" {

STB_C_DLLEXPORT int stbi_get_write_tga_with_rle() { return stbi_write_tga_with_rle; }
STB_C_DLLEXPORT int stbi_get_write_png_compression_level() { return stbi_write_png_compression_level; }
STB_C_DLLEXPORT int stbi_get_write_force_png_filter() { return stbi_write_force_png_filter; }
STB_C_DLLEXPORT void stbi_set_write_tga_with_rle(int v) { stbi_write_tga_with_rle = v; }
STB_C_DLLEXPORT void stbi_set_write_png_compression_level(int v) { stbi_write_png_compression_level = v; }
STB_C_DLLEXPORT void stbi_set_write_force_png_filter(int v) { stbi_write_force_png_filter = v; }

}
