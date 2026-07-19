#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CCitadel_Modifier_BaseEventProcVData.hpp"
#include "source2sdk/server/CCitadel_Modifier_Base_Buildup.hpp"

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
        // Size: 0x7c0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_AfterburnWatcherVData : public source2sdk::server::CCitadel_Modifier_BaseEventProcVData
        {
        public:
            // metadata: MPropertyGroupName "Modifiers"
            // m_AfterburnDotModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_AfterburnDotModifier;
            char m_AfterburnDotModifier[0x10]; // 0x780            
            // m_BuildUpModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadel_Modifier_Base_Buildup> m_BuildUpModifier;
            char m_BuildUpModifier[0x10]; // 0x790            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strAfterburnHitSound; // 0x7a0            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flLightMeleeBuildUp; // 0x7b0            
            float m_flHeavyMeleeBuildUp; // 0x7b4            
            float m_flLightMeleeRefresh; // 0x7b8            
            float m_flHeavyMeleeRefresh; // 0x7bc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_AfterburnWatcherVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_AfterburnWatcherVData) == 0x7c0);
    };
};
