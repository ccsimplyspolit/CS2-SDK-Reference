#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadel_Modifier_Intrinsic_BaseVData.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

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
        // Size: 0x930
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_CounterspellWatcherVData : public source2sdk::client::CCitadel_Modifier_Intrinsic_BaseVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_BuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_BuffModifier;
            char m_BuffModifier[0x10]; // 0x750            
            // metadata: MPropertyGroupName "Visuals"
            // m_ParryFXOverride has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ParryFXOverride;
            char m_ParryFXOverride[0xe0]; // 0x760            
            // m_HealFX has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HealFX;
            char m_HealFX[0xe0]; // 0x840            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strSuccessProcSound; // 0x920            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_CounterspellWatcherVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_CounterspellWatcherVData) == 0x930);
    };
};
