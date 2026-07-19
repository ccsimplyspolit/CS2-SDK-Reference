#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x148
        // Has VTable
        #pragma pack(push, 1)
        class CModifier_Upgrade_KineticSashTriggered : public source2sdk::client::CCitadelModifier
        {
        public:
            std::int32_t m_nBonusClip; // 0xc0            
            uint8_t _pad00c4[0x84];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifier_Upgrade_KineticSashTriggered because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CModifier_Upgrade_KineticSashTriggered) == 0x148);
    };
};
