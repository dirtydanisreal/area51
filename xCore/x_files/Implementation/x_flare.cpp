//==============================================================================
//  
//  x_flare.cpp
//  
//==============================================================================

//==============================================================================
//  INCLUDES
//==============================================================================

#ifndef X_FLARE_HPP
#include "../x_flare.hpp"
#endif

#ifndef X_DEBUG_HPP
#include "../x_debug.hpp"
#endif

#ifndef X_FILES_PRIVATE_HPP
#include "x_files_private.hpp"
#endif

//==============================================================================
//  TYPES
//==============================================================================

struct flare_id
{
    char    Name[ FLARE_NAME_LENGTH ];
};                  
                    
struct flare_entry  
{                   
    s32     Data1;
    s32     Data2;
    s32     ThreadID;
    s32     NextOffset;
};

//==============================================================================
//  VARIABLES
//==============================================================================



//==============================================================================
//  FUNCTIONS
//==============================================================================

void flare_Hook( const char* pName, flare_fn* pFlareFn, s32 Data1, s32 Data2 )
{
    (void)pName;
    (void)pFlareFn;
    (void)Data1;
    (void)Data2;
}

//==============================================================================

void flare_Fire( const char* pName )
{
    (void)pName;
}

//==============================================================================
