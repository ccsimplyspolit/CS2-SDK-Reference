#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCSWeaponBase.hpp"

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
        // Size: 0x1060
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CKnife : public source2sdk::server::CCSWeaponBase
        {
        public:
            bool m_bFirstAttack; // 0x1050            
            uint8_t _pad1051[0xf];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CKnife because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CKnife) == 0x1060);
    };
};
