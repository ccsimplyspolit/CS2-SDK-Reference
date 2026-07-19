#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CPathQueryComponent.hpp"
#include "source2sdk/client/C_BaseEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x710
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class CPathSimple : public source2sdk::client::C_BaseEntity
        {
        public:
            uint8_t _pad0600[0x10]; // 0x600
            source2sdk::client::CPathQueryComponent m_CPathQueryComponent; // 0x610            
            uint8_t _pad06b0[0x50]; // 0x6b0
            CUtlString m_pathString; // 0x700            
            bool m_bClosedLoop; // 0x708            
            uint8_t _pad0709[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPathSimple because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CPathSimple) == 0x710);
    };
};
