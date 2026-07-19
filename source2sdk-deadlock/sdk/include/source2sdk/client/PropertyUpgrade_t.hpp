#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EAbilityUpgradeType.hpp"
#include "source2sdk/client/EStatsType.hpp"

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
        // Standard-layout class: true
        // Size: 0x38
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyAutoExpandSelf
        #pragma pack(push, 1)
        struct PropertyUpgrade_t
        {
        public:
            CUtlString m_strPropertyName; // 0x0            
            CUtlString m_strBonus; // 0x8            
            CUtlString m_strStreetBrawlBonus; // 0x10            
            uint8_t _pad0018[0x8]; // 0x18
            source2sdk::client::EAbilityUpgradeType m_eUpgradeType; // 0x20            
            // metadata: MPropertyDescription "If set, only applies the scaling of this upgrade to the specified stat"
            // metadata: MPropertySuppressExpr "( m_eUpgradeType != EAddToScale && m_eUpgradeType != EMultiplyScale )"
            source2sdk::client::EStatsType m_eScaleStatFilter; // 0x24            
            uint8_t _pad0028[0x10];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::PropertyUpgrade_t, m_strPropertyName) == 0x0);
        static_assert(offsetof(source2sdk::client::PropertyUpgrade_t, m_strBonus) == 0x8);
        static_assert(offsetof(source2sdk::client::PropertyUpgrade_t, m_strStreetBrawlBonus) == 0x10);
        static_assert(offsetof(source2sdk::client::PropertyUpgrade_t, m_eUpgradeType) == 0x20);
        static_assert(offsetof(source2sdk::client::PropertyUpgrade_t, m_eScaleStatFilter) == 0x24);
        
        static_assert(sizeof(source2sdk::client::PropertyUpgrade_t) == 0x38);
    };
};
