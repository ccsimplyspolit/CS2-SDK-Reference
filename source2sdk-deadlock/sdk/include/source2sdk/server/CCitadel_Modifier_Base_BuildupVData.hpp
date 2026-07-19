#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/BuildupMode_t.hpp"
#include "source2sdk/server/CCitadelModifierVData.hpp"

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
        class CCitadel_Modifier_Base_BuildupVData : public source2sdk::server::CCitadelModifierVData
        {
        public:
            bool m_bUseBaseWeaponCycleTimeForDelay; // 0x750            
            uint8_t _pad0751[0x3]; // 0x751
            float m_flCycleTimeDelayAdd; // 0x754            
            float m_flBuildUpDecayDelay; // 0x758            
            source2sdk::client::BuildupMode_t m_eBuildupMode; // 0x75c            
            // metadata: MPropertyDescription "When true, effectiveness (distance falloff) will be applied to the buildup."
            bool m_bBuildupAffectedByEffectiveness; // 0x760            
            // metadata: MPropertyDescription "When true, the averaged effectiveness of the build up modifier will be passed to the fill modifier"
            bool m_bPassBuildupEffectivenessToFillModifier; // 0x761            
            uint8_t _pad0762[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Base_BuildupVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Base_BuildupVData) == 0x768);
    };
};
