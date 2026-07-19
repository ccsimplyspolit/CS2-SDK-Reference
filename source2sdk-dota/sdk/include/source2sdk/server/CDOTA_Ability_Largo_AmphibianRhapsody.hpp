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
        // Size: 0x5b0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Largo_AmphibianRhapsody : public source2sdk::server::CDOTABaseAbility
        {
        public:
            float duration; // 0x580            
            float rhythm_grace_period; // 0x584            
            float movement_burst_duration; // 0x588            
            float slow_resistance_burst_duration; // 0x58c            
            float radius; // 0x590            
            float heal_burst; // 0x594            
            std::int32_t max_stacks; // 0x598            
            bool m_bFirstSongPlayed; // 0x59c            
            uint8_t _pad059d[0x3]; // 0x59d
            float m_flSongStartTime; // 0x5a0            
            std::int32_t m_nBurstEffect; // 0x5a4            
            std::int32_t m_nFailEffect; // 0x5a8            
            uint8_t _pad05ac[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Largo_AmphibianRhapsody because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Largo_AmphibianRhapsody) == 0x5b0);
    };
};
