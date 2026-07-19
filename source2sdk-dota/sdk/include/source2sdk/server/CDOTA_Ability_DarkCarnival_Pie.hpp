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
        // Size: 0x5a0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_DarkCarnival_Pie : public source2sdk::server::CDOTABaseAbility
        {
        public:
            uint8_t _pad0580[0x14]; // 0x580
            std::int32_t projectile_speed; // 0x594            
            std::int32_t golden_pie; // 0x598            
            bool bounce; // 0x59c            
            uint8_t _pad059d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_DarkCarnival_Pie because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_DarkCarnival_Pie) == 0x5a0);
    };
};
