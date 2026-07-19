#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x718
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Largo_AmphibianRhapsody : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            uint8_t _pad06a8[0x10]; // 0x6a8
            float duration; // 0x6b8            
            float rhythm_grace_period; // 0x6bc            
            float movement_burst_duration; // 0x6c0            
            float slow_resistance_burst_duration; // 0x6c4            
            float radius; // 0x6c8            
            float heal_burst; // 0x6cc            
            std::int32_t max_stacks; // 0x6d0            
            bool m_bFirstSongPlayed; // 0x6d4            
            uint8_t _pad06d5[0x3]; // 0x6d5
            float m_flSongStartTime; // 0x6d8            
            std::int32_t m_nBurstEffect; // 0x6dc            
            std::int32_t m_nFailEffect; // 0x6e0            
            uint8_t _pad06e4[0x14]; // 0x6e4
            // m_vecClientSideOriginalAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<char*> m_vecClientSideOriginalAbilities;
            char m_vecClientSideOriginalAbilities[0x18]; // 0x6f8            
            std::int32_t m_nInvalidOrders; // 0x710            
            std::int32_t m_nSelectedUnitChanged; // 0x714            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Largo_AmphibianRhapsody because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Largo_AmphibianRhapsody) == 0x718);
    };
};
