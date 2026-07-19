#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
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
        // Size: 0x1a40
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Werewolf_UnloadGun2VData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_BuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_BuffModifier;
            char m_BuffModifier[0x10]; // 0x1818            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strShootSound; // 0x1828            
            // metadata: MPropertyStartGroup "Visuals"
            // m_GunReloadParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GunReloadParticle;
            char m_GunReloadParticle[0xe0]; // 0x1838            
            // m_MuzzleFlashParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_MuzzleFlashParticle;
            char m_MuzzleFlashParticle[0xe0]; // 0x1918            
            // metadata: MPropertyStartGroup "Gameplay"
            bool m_bGrantAmmoOnCast; // 0x19f8            
            uint8_t _pad19f9[0x7]; // 0x19f9
            CPiecewiseCurve m_InaccuracyCurveScaleDuringPrecast; // 0x1a00            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Werewolf_UnloadGun2VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Werewolf_UnloadGun2VData) == 0x1a40);
    };
};
