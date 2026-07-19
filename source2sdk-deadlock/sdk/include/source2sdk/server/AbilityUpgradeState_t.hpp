#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CitadelAbilityUpgradeInfoPacked_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x38
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "AbilityID_t m_ItemID"
        // static metadata: MNetworkVarNames "CitadelAbilityUpgradeInfoPacked_t m_nUpgradeInfo"
        #pragma pack(push, 1)
        struct AbilityUpgradeState_t
        {
        public:
            uint8_t _pad0000[0x30]; // 0x0
            // metadata: MNetworkEnable
            CUtlStringToken m_ItemID; // 0x30            
            // metadata: MNetworkEnable
            source2sdk::client::CitadelAbilityUpgradeInfoPacked_t m_nUpgradeInfo; // 0x34            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::AbilityUpgradeState_t, m_ItemID) == 0x30);
        static_assert(offsetof(source2sdk::server::AbilityUpgradeState_t, m_nUpgradeInfo) == 0x34);
        
        static_assert(sizeof(source2sdk::server::AbilityUpgradeState_t) == 0x38);
    };
};
