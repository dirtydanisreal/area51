//==============================================================================
//
//  x_vsprintf.cpp
//
//==============================================================================

//==============================================================================
//  INCLUDES
//==============================================================================

#ifndef X_PLUS_HPP
#include "..\x_plus.hpp"
#endif

//==============================================================================
//  FUNCTIONS
//==============================================================================

#include <stdio.h>

s32 x_vsprintf( char* pStr, const char* pFormatStr, x_va_list Args )
{
    // TO DO : Implement x_vsprintf.
    return( vsprintf( pStr, pFormatStr, Args ) );
}

//==============================================================================
