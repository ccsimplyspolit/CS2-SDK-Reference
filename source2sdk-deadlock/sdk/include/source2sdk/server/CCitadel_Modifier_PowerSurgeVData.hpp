#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
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
        // Size: 0x940
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_PowerSurgeVData : public source2sdk::server::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_TracerParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TracerParticle;
            char m_TracerParticle[0xe0]; // 0x750            
            // m_WeaponFxParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WeaponFxParticle;
            char m_WeaponFxParticle[0xe0]; // 0x830            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strWeaponShootSound; // 0x910            
            CSoundEventName m_strBulletWhizSound; // 0x920            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_DebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_DebuffModifier;
            char m_DebuffModifier[0x10]; // 0x930            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_PowerSurgeVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_PowerSurgeVData) == 0x940);
    };
};
