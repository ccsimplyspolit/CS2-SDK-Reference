#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/PropertyUpgrade_t.hpp"

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
        // Size: 0x28
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct AbilityUpgrade_t
        {
        public:
            // metadata: MPropertyAutoExpandSelf
            // m_vecPropertyUpgrades has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::PropertyUpgrade_t> m_vecPropertyUpgrades;
            char m_vecPropertyUpgrades[0x18]; // 0x0            
            uint8_t _pad0018[0x10];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::AbilityUpgrade_t, m_vecPropertyUpgrades) == 0x0);
        
        static_assert(sizeof(source2sdk::client::AbilityUpgrade_t) == 0x28);
    };
};
