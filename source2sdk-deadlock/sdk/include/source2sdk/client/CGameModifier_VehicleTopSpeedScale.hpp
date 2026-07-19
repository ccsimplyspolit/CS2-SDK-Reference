#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"

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
        // Size: 0xc8
        // Has VTable
        #pragma pack(push, 1)
        class CGameModifier_VehicleTopSpeedScale : public source2sdk::client::CCitadelModifier
        {
        public:
            float m_flTopSpeedScale; // 0xc0            
            uint8_t _pad00c4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CGameModifier_VehicleTopSpeedScale because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CGameModifier_VehicleTopSpeedScale) == 0xc8);
    };
};
