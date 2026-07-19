#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0x5d0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Hoodwink_AcornShot : public source2sdk::server::CDOTABaseAbility
        {
        public:
            uint8_t _pad0580[0x28]; // 0x580
            std::uint32_t m_nAcornTree; // 0x5a8            
            float projectile_speed; // 0x5ac            
            float bounce_delay; // 0x5b0            
            float bounce_range; // 0x5b4            
            std::int32_t bounce_count; // 0x5b8            
            bool m_bIsAltCastState; // 0x5bc            
            uint8_t _pad05bd[0x3]; // 0x5bd
            std::int32_t can_bounce_off_of_trees; // 0x5c0            
            std::int32_t bounces_after_tree_bounce; // 0x5c4            
            bool bBouncedOffTree; // 0x5c8            
            uint8_t _pad05c9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Hoodwink_AcornShot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Hoodwink_AcornShot) == 0x5d0);
    };
};
