#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/SatVolumeIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x598
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_StormCloud : public source2sdk::server::CCitadelModifier
        {
        public:
            uint8_t _pad00d0[0x8]; // 0xd0
            float m_flDamageInterval; // 0xd8            
            bool m_bGrowing; // 0xdc            
            uint8_t _pad00dd[0x3]; // 0xdd
            source2sdk::entity2::GameTime_t m_flLastDamageWaveTime; // 0xe0            
            std::int32_t m_nNumPlayersKilled; // 0xe4            
            source2sdk::entity2::GameTime_t m_flNextRandomLightningStrike; // 0xe8            
            source2sdk::entity2::GameTime_t m_flStartTime; // 0xec            
            float m_flRadiusIncrementPerSecond; // 0xf0            
            Vector m_vCastPosition; // 0xf4            
            bool m_bFiredEndingSoonSound; // 0x100            
            uint8_t _pad0101[0x3]; // 0x101
            std::int32_t m_nLastTickForLightningCenterCalc; // 0x104            
            Vector m_vecLightningCenter; // 0x108            
            source2sdk::client::SatVolumeIndex_t m_nSatVolumeIndex; // 0x114            
            uint8_t _pad0118[0x480];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_StormCloud because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_StormCloud) == 0x598);
    };
};
