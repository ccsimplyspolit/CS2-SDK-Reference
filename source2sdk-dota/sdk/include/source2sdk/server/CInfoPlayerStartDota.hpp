#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CPointEntity.hpp"

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
        class CInfoPlayerStartDota : public source2sdk::server::CPointEntity
        {
        public:
            bool m_bDisabled; // 0x498            
            uint8_t _pad0499[0x7]; // 0x499
            source2sdk::entity2::CEntityIOOutput m_OnEnabled; // 0x4a0            
            source2sdk::entity2::CEntityIOOutput m_OnDisabled; // 0x4b8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CInfoPlayerStartDota because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CInfoPlayerStartDota) == 0x4d0);
    };
};
