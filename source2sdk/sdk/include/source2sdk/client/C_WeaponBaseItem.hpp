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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1cf0
        // Has VTable
        // Construct disallowed
        // MConstructibleClassBase
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_WeaponBaseItem : public source2sdk::client::C_CSWeaponBase
        {
        public:
            bool m_bSequenceInProgress; // 0x1ce0            
            bool m_bRedraw; // 0x1ce1            
            uint8_t _pad1ce2[0xe];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_WeaponBaseItem because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_WeaponBaseItem) == 0x1cf0);
    };
};
