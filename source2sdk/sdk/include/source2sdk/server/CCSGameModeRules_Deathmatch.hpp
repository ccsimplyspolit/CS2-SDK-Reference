#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCSGameModeRules.hpp"

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
        // Size: 0x88
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CCSGameModeRules_Deathmatch : public source2sdk::server::CCSGameModeRules
        {
        public:
            source2sdk::entity2::GameTime_t m_flDMBonusStartTime; // 0x30            
            float m_flDMBonusTimeLength; // 0x34            
            CUtlString m_sDMBonusWeapon; // 0x38            
            uint8_t _pad0040[0x48];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSGameModeRules_Deathmatch because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCSGameModeRules_Deathmatch) == 0x88);
    };
};
