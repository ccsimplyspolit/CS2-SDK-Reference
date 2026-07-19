#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CSoundAreaEntityBase.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x4d0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CSoundAreaEntityOrientedBox : public source2sdk::server::CSoundAreaEntityBase
        {
        public:
            Vector m_vMin; // 0x4b8            
            Vector m_vMax; // 0x4c4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSoundAreaEntityOrientedBox because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSoundAreaEntityOrientedBox) == 0x4d0);
    };
};
