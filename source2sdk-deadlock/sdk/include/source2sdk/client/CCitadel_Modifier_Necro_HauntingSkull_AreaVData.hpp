#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadelModifierVData.hpp"
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
        // Size: 0x980
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_Necro_HauntingSkull_AreaVData : public source2sdk::client::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_DebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_DebuffModifier;
            char m_DebuffModifier[0x10]; // 0x750            
            // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_SlowModifier;
            char m_SlowModifier[0x10]; // 0x760            
            // metadata: MPropertyStartGroup "Visuals"
            // m_PreviewRingParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PreviewRingParticle;
            char m_PreviewRingParticle[0xe0]; // 0x770            
            // m_AreaEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AreaEffect;
            char m_AreaEffect[0xe0]; // 0x850            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strArmingSound; // 0x930            
            CSoundEventName m_strArmedSound; // 0x940            
            CSoundEventName m_strLoopingSound; // 0x950            
            CSoundEventName m_strHitSound; // 0x960            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flInitialNormalInfluence; // 0x970            
            float m_flInitialRandomVariance; // 0x974            
            float m_flSpawnPositionNavMeshSearchRange; // 0x978            
            uint8_t _pad097c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Necro_HauntingSkull_AreaVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_Necro_HauntingSkull_AreaVData) == 0x980);
    };
};
