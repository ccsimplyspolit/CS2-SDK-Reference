#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0x6c8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_ShadowShaman_Shackles : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            float m_flLongestShackleDuration; // 0x6a8            
            uint8_t _pad06ac[0x4]; // 0x6ac
            // m_Victims has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_Victims;
            char m_Victims[0x18]; // 0x6b0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_ShadowShaman_Shackles because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_ShadowShaman_Shackles) == 0x6c8);
    };
};
