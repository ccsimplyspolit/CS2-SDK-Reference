#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifierVData.hpp"

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
        // Size: 0x760
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_Objective_HealthGrowthVData : public source2sdk::client::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyStartGroup "Objective Health Growth"
            // metadata: MPropertyDescription "How much health per Minute"
            std::int32_t m_iGrowthPerMinute; // 0x750            
            // metadata: MPropertyDescription "How often do we update (seconds)"
            float m_flTickRate; // 0x754            
            std::int32_t m_iGrowthStartTimeInMinutes; // 0x758            
            uint8_t _pad075c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Objective_HealthGrowthVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_Objective_HealthGrowthVData) == 0x760);
    };
};
