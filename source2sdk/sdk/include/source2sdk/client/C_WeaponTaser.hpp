#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CSWeaponBaseGun.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x1d20
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_WeaponTaser : public source2sdk::client::C_CSWeaponBaseGun
        {
        public:
            source2sdk::entity2::GameTime_t m_fFireTime; // 0x1d10            
            std::int32_t m_nLastAttackTick; // 0x1d14            
            uint8_t _pad1d18[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_WeaponTaser because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_WeaponTaser) == 0x1d20);
    };
};
