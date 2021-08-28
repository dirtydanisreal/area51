//==============================================================================
//
//  RenderContext.hpp
//
//==============================================================================

#ifndef RENDER_CONTEXT_HPP
#define RENDER_CONTEXT_HPP

//==============================================================================
//  INCLUDES
//==============================================================================

#include "x_types.hpp"

//==============================================================================
//  TYPES
//==============================================================================

struct render_context
{
    s32     LocalPlayerIndex;   //  0 -  3
    s32     NetPlayerSlot;      //  0 - 31
    u32     TeamBits;

    // Boolean Flags
    u32     m_bIsMutated;
    u32     m_bIsPipRender;

    void    Set( s32    LocalPlayerIndex, 
                 s32    NetPlayerSlot,
                 u32    TeamBits, 
                 xbool  bIsMutated,
                 xbool  bIsPipRender );

    void    SetPipRender( xbool bIsPipRender );
};

//==============================================================================
//  STORAGE
//==============================================================================

extern render_context g_RenderContext;

//==============================================================================
#endif // RENDER_CONTEXT_HPP
//==============================================================================
