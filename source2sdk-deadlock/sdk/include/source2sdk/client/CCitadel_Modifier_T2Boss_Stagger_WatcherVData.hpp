#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadelModifierVData.hpp"
#include "source2sdk/client/CCitadel_Modifier_Base_Buildup.hpp"

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
        // Size: 0x780
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_T2Boss_Stagger_WatcherVData : public source2sdk::client::CCitadelModifierVData
        {
        public:
            float m_flDecayDuration; // 0x750            
            float m_flStaggeredDuration; // 0x754            
            float m_flBuildUpMax; // 0x758            
            // metadata: MPropertyFriendlyName "Buildup Frac per Extra Player"
            // metadata: MPropertyDescription "Frac * 5 Players to get how much extra buildup is added. Larger values make the buildup complete faster.  0.2 (*5 Players) is exactly halving the buildup time"
            float m_flAdditionlPlayerMinContribution; // 0x75c            
            // metadata: MPropertyGroupName "Modifiers"
            // m_StaggeredModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_StaggeredModifier;
            char m_StaggeredModifier[0x10]; // 0x760            
            // m_BuildUpModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadel_Modifier_Base_Buildup> m_BuildUpModifier;
            char m_BuildUpModifier[0x10]; // 0x770            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_T2Boss_Stagger_WatcherVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_T2Boss_Stagger_WatcherVData) == 0x780);
    };
};
