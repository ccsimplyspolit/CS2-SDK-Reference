#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifierAuraVData.hpp"

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
        // Size: 0x7b0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadelModifierAura_CylinderVData : public source2sdk::client::CCitadelModifierAuraVData
        {
        public:
            float m_flAuraTargetingCylinderUpOffset; // 0x7a8            
            float m_flAuraTargetingCylinderHalfHeight; // 0x7ac            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelModifierAura_CylinderVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelModifierAura_CylinderVData) == 0x7b0);
    };
};
