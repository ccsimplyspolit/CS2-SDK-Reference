#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CSWeaponBase.hpp"

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
        // Size: 0x1cf0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_Knife : public source2sdk::client::C_CSWeaponBase
        {
        public:
            bool m_bFirstAttack; // 0x1ce0            
            uint8_t _pad1ce1[0xf];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Knife because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Knife) == 0x1cf0);
    };
};
