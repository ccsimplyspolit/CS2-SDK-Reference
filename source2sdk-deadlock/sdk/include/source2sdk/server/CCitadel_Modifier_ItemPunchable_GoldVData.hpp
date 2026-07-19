#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifierAuraVData.hpp"

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
        // Size: 0x7c0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_ItemPunchable_GoldVData : public source2sdk::server::CCitadelModifierAuraVData
        {
        public:
            float m_flPhysicsRadius; // 0x7a8            
            uint8_t _pad07ac[0x4]; // 0x7ac
            // metadata: MPropertyGroupName "Audio"
            CSoundEventName m_sHitSound; // 0x7b0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_ItemPunchable_GoldVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_ItemPunchable_GoldVData) == 0x7c0);
    };
};
