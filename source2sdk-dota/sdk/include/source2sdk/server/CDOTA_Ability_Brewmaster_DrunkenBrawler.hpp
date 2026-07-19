#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        class CDOTA_Ability_Brewmaster_DrunkenBrawler : public source2sdk::server::CDOTABaseAbility
        {
        public:
            std::int32_t m_iBrawlActive; // 0x580            
            bool m_bUpdateIcons; // 0x584            
            uint8_t _pad0585[0x3]; // 0x585
            source2sdk::client::ParticleIndex_t m_nDrunkenBrawlerFX; // 0x588            
            uint8_t _pad058c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Brewmaster_DrunkenBrawler because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Brewmaster_DrunkenBrawler) == 0x590);
    };
};
