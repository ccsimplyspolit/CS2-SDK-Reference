#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_BaseNPC_Hero.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x1e00
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Unit_Hero_Rubick : public source2sdk::client::C_DOTA_BaseNPC_Hero
        {
        public:
            Vector m_stolenAbilityColorHSV1; // 0x1d88
            Vector m_stolenAbilityColorHSV2; // 0x1d94
            Vector m_stolenAbilityFXColorHSV; // 0x1da0
            bool m_bHasInitializedAbilityColors; // 0x1dac
            uint8_t _pad1dad[0x3]; // 0x1dad
            Vector m_startAbilityColorHSV1; // 0x1db0
            Vector m_startAbilityColorHSV2; // 0x1dbc
            Vector m_startAbilityFXColorHSV; // 0x1dc8
            Vector m_currAbilityColorHSV1; // 0x1dd4
            Vector m_currAbilityColorHSV2; // 0x1de0
            Vector m_currAbilityFXColorHSV; // 0x1dec
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x1df8
            uint8_t _pad1dfc[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in C_DOTA_Unit_Hero_Rubick because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::C_DOTA_Unit_Hero_Rubick) == 0x1e00);
    };
};
