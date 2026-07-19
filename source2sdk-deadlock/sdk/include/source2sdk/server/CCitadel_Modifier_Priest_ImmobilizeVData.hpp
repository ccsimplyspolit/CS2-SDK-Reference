#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadel_Modifier_RootVData.hpp"

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
        // Size: 0x768
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_Priest_ImmobilizeVData : public source2sdk::server::CCitadel_Modifier_RootVData
        {
        public:
            // metadata: MPropertyStartGroup "Gameplay"
            float flMaxDrag; // 0x758            
            float flSpeedForNoDrag; // 0x75c            
            float flSpeedForMaxDrag; // 0x760            
            uint8_t _pad0764[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Priest_ImmobilizeVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Priest_ImmobilizeVData) == 0x768);
    };
};
