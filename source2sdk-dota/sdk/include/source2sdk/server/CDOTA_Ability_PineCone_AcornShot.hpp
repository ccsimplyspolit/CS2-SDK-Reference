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
        // Size: 0x5c0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_PineCone_AcornShot : public source2sdk::server::CDOTABaseAbility
        {
        public:
            uint8_t _pad0580[0x28]; // 0x580
            std::uint32_t m_nAcornTree; // 0x5a8            
            float projectile_speed; // 0x5ac            
            float bounce_delay; // 0x5b0            
            std::int32_t bounce_range; // 0x5b4            
            std::int32_t bounce_count; // 0x5b8            
            uint8_t _pad05bc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_PineCone_AcornShot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_PineCone_AcornShot) == 0x5c0);
    };
};
