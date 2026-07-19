#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseAnimatingActivity.hpp"

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
        // Size: 0x7b0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Item_RuneSpawner_XP : public source2sdk::server::CBaseAnimatingActivity
        {
        public:
            CUtlSymbolLarge m_szPosition; // 0x798            
            std::int32_t m_nDotaTeam; // 0x7a0            
            float m_flLastSpawnTime; // 0x7a4            
            float m_flNextSpawnTime; // 0x7a8            
            uint8_t _pad07ac[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Item_RuneSpawner_XP because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Item_RuneSpawner_XP) == 0x7b0);
    };
};
