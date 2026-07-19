#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"

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
        // Size: 0x4e8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadelZipLinePathNode : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad04a0[0x18]; // 0x4a0
            bool m_bCornerNode; // 0x4b8            
            bool m_bDisableZippingToByPlayers; // 0x4b9            
            bool m_bCapturable; // 0x4ba            
            uint8_t _pad04bb[0x5]; // 0x4bb
            CUtlSymbolLarge m_strGuardBossName; // 0x4c0            
            CUtlSymbolLarge m_strGuardBossName2; // 0x4c8            
            CUtlSymbolLarge m_strGuardBossName3; // 0x4d0            
            uint8_t _pad04d8[0x4]; // 0x4d8
            float m_flSpeedMultiplierToBaseBonus; // 0x4dc            
            float m_flSpeedMultiplierFromBaseBonus; // 0x4e0            
            uint8_t _pad04e4[0x4];
            
            // Datamap fields:
            // void m_pNode; // 0x4d8
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelZipLinePathNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelZipLinePathNode) == 0x4e8);
    };
};
