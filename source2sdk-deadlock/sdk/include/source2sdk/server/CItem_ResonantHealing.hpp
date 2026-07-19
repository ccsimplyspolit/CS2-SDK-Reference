#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadel_Item.hpp"

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
        // Size: 0x1130
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_iRegenStacks"
        #pragma pack(push, 1)
        class CItem_ResonantHealing : public source2sdk::server::CCitadel_Item
        {
        public:
            uint8_t _pad0f78[0x2c]; // 0xf78
            bool m_bForceModUpdate; // 0xfa4            
            uint8_t _pad0fa5[0x3]; // 0xfa5
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_iRegenStacks; // 0xfa8            
            uint8_t _pad0fac[0x184];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CItem_ResonantHealing because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CItem_ResonantHealing) == 0x1130);
    };
};
