#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/CPathQueryComponent.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x5b0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class CPathSimple : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad04a8[0x8]; // 0x4a8
            source2sdk::server::CPathQueryComponent m_CPathQueryComponent; // 0x4b0            
            uint8_t _pad0550[0x50]; // 0x550
            CUtlString m_pathString; // 0x5a0            
            bool m_bClosedLoop; // 0x5a8            
            uint8_t _pad05a9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPathSimple because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPathSimple) == 0x5b0);
    };
};
