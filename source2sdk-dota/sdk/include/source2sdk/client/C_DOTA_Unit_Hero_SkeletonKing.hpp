#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_BaseNPC_Hero.hpp"

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
        // Size: 0x1db8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Unit_Hero_SkeletonKing : public source2sdk::client::C_DOTA_BaseNPC_Hero
        {
        public:
            std::int32_t m_nSkeletonWarriors; // 0x1d80            
            std::int32_t m_vecInitialHeroKillBitmask[6]; // 0x1d84            
            std::int32_t m_vecInGameHeroKillBitmask[6]; // 0x1d9c            
            uint8_t _pad1db4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Unit_Hero_SkeletonKing because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Unit_Hero_SkeletonKing) == 0x1db8);
    };
};
