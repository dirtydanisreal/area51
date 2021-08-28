//==============================================================================
//
//  x_files_private.hpp
//
//==============================================================================

#ifndef X_FILES_PRIVATE_HPP
#define X_FILES_PRIVATE_HPP

//==============================================================================
//  DEFINES
//==============================================================================

#ifdef X_EDITOR
#define X_GLOBAL_STRING_BUFFER_SIZE  32768
#else
#define X_GLOBAL_STRING_BUFFER_SIZE  2048
#endif

//==============================================================================
//  TYPES
//==============================================================================

struct x_thread_globals
{
    s32     ThreadID;

    // String buffer for all formatted string operations.
    s32     NextOffset;
    s32     BufferSize;
    char*   StringBuffer;
};

//==============================================================================
//  FUNCTIONS
//==============================================================================

s32               x_GetThreadID     ( void );
x_thread_globals* x_GetThreadGlobals( void );
s32               x_GetInitialized  ( void );

//==============================================================================
#endif // X_FILES_PRIVATE_HPP
//==============================================================================
