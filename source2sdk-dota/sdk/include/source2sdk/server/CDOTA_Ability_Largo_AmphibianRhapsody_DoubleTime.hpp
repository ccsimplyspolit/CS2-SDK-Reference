#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_Ability_Largo_AmphibianRhapsody_Song.hpp"

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
        class CDOTA_Ability_Largo_AmphibianRhapsody_DoubleTime : public source2sdk::server::CDOTA_Ability_Largo_AmphibianRhapsody_Song
        {
        public:
            float radius; // 0x590            
            float movement_burst_duration; // 0x594            
            float slow_resistance_burst_duration; // 0x598            
            uint8_t _pad059c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Largo_AmphibianRhapsody_DoubleTime because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Largo_AmphibianRhapsody_DoubleTime) == 0x5a0);
    };
};
