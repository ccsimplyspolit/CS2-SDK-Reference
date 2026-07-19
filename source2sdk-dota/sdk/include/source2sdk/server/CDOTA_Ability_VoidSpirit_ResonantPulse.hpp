#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseAbility.hpp"

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
        // Size: 0x590
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_VoidSpirit_ResonantPulse : public source2sdk::server::CDOTABaseAbility
        {
        public:
            bool m_bGrantedScepterCharges; // 0x580            
            uint8_t _pad0581[0x3]; // 0x581
            float buff_duration; // 0x584            
            float base_absorb_amount; // 0x588            
            float absorb_per_hero_hit; // 0x58c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_VoidSpirit_ResonantPulse because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_VoidSpirit_ResonantPulse) == 0x590);
    };
};
