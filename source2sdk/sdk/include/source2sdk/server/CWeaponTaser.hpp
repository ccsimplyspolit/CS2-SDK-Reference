#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCSWeaponBaseGun.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x1080
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CWeaponTaser : public source2sdk::server::CCSWeaponBaseGun
        {
        public:
            source2sdk::entity2::GameTime_t m_fFireTime; // 0x1070            
            std::int32_t m_nLastAttackTick; // 0x1074            
            uint8_t _pad1078[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CWeaponTaser because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CWeaponTaser) == 0x1080);
    };
};
