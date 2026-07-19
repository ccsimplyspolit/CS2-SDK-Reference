#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/SatVolumeIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x570
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_StormCloud : public source2sdk::client::CCitadelModifier
        {
        public:
            source2sdk::entity2::GameTime_t m_flNextRandomLightningStrike; // 0xc0            
            source2sdk::entity2::GameTime_t m_flStartTime; // 0xc4            
            float m_flRadiusIncrementPerSecond; // 0xc8            
            Vector m_vCastPosition; // 0xcc            
            bool m_bFiredEndingSoonSound; // 0xd8            
            uint8_t _pad00d9[0x3]; // 0xd9
            std::int32_t m_nLastTickForLightningCenterCalc; // 0xdc            
            Vector m_vecLightningCenter; // 0xe0            
            source2sdk::client::SatVolumeIndex_t m_nSatVolumeIndex; // 0xec            
            uint8_t _pad00f0[0x480];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_StormCloud because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_StormCloud) == 0x570);
    };
};
