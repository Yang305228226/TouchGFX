// Generated by imageconverter. Please, do not edit!

#ifndef BITMAPDATABASE_HPP
#define BITMAPDATABASE_HPP

#include <touchgfx/hal/Types.hpp>
#include <touchgfx/Bitmap.hpp>

const uint16_t BITMAP_PAINTER_BACKGROUND_ID = 0; // Size: 126x126 pixels
const uint16_t BITMAP_PAINTER_BACKGROUND2_ID = 1; // Size: 100x100 pixels

namespace BitmapDatabase
{
#ifndef NO_USING_NAMESPACE_TOUCHGFX
  using namespace touchgfx;
#endif

  class BitmapData;
  const touchgfx::Bitmap::BitmapData* getInstance();
  uint16_t getInstanceSize();
}

#endif
