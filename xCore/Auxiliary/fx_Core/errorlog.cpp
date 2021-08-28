//============================================================================
// INCLUDES
//============================================================================

#include "errorlog.hpp"

namespace fx_core
{

//============================================================================
// DATA
//============================================================================

//============================================================================
//  error_log
//============================================================================

error_log::error_log()
{
}

//============================================================================

error_log::~error_log()
{
}

//============================================================================

void error_log::Clear( void )
{
    m_Log.Clear();
}

//============================================================================

void error_log::Append( const char* pString )
{
    m_Log.Append() = pString;
}

//============================================================================

s32 error_log::GetCount( void ) const
{
    return m_Log.GetCount();
}

//============================================================================
    
const xstring& error_log::GetError( s32 iError ) const
{
    ASSERT( iError >= 0 );
    ASSERT( iError < m_Log.GetCount() );

    return m_Log[iError];
}

//============================================================================

} // namespace fx_core
