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
        // Registered alignment: unknown
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x1060
        // Has VTable
        // Construct disallowed
        // MConstructibleClassBase
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CWeaponBaseItem : public source2sdk::server::CCSWeaponBase
        {
        public:
            bool m_bSequenceInProgress; // 0x1050            
            bool m_bRedraw; // 0x1051            
            uint8_t _pad1052[0xe];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CWeaponBaseItem because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CWeaponBaseItem) == 0x1060);
    };
};
