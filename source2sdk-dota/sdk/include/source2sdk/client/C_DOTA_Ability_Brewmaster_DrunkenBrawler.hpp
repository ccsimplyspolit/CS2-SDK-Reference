#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x6b8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Brewmaster_DrunkenBrawler : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            std::int32_t m_iBrawlActive; // 0x6a8            
            bool m_bUpdateIcons; // 0x6ac            
            uint8_t _pad06ad[0x3]; // 0x6ad
            source2sdk::client::ParticleIndex_t m_nDrunkenBrawlerFX; // 0x6b0            
            uint8_t _pad06b4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Brewmaster_DrunkenBrawler because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Brewmaster_DrunkenBrawler) == 0x6b8);
    };
};
