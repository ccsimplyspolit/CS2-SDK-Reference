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
        // Size: 0xb20
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CModifierLockDownDebuffVData : public source2sdk::server::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_DebuffParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DebuffParticle;
            char m_DebuffParticle[0xe0]; // 0x750            
            // m_AOEParticleCaster has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AOEParticleCaster;
            char m_AOEParticleCaster[0xe0]; // 0x830            
            // m_AOEParticleEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AOEParticleEnemy;
            char m_AOEParticleEnemy[0xe0]; // 0x910            
            // m_AOEParticleOthers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AOEParticleOthers;
            char m_AOEParticleOthers[0xe0]; // 0x9f0            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strFollowLoop; // 0xad0            
            CSoundEventName m_strEscapedSound; // 0xae0            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_RootModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_RootModifier;
            char m_RootModifier[0x10]; // 0xaf0            
            // m_BulletResistModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_BulletResistModifier;
            char m_BulletResistModifier[0x10]; // 0xb00            
            // m_SilencedModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_SilencedModifier;
            char m_SilencedModifier[0x10]; // 0xb10            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifierLockDownDebuffVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CModifierLockDownDebuffVData) == 0xb20);
    };
};
