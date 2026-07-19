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
        // Size: 0x868
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CModifierUppercuttedVData : public source2sdk::client::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyGroupName "Visuals"
            // m_StunParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StunParticle;
            char m_StunParticle[0xe0]; // 0x750            
            // metadata: MPropertyGroupName "Sounds"
            CSoundEventName m_strStunSound; // 0x830            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_NoExplodeModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_NoExplodeModifier;
            char m_NoExplodeModifier[0x10]; // 0x840            
            // m_ExplodeDebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_ExplodeDebuffModifier;
            char m_ExplodeDebuffModifier[0x10]; // 0x850            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flEnemyNoAirDashDuration; // 0x860            
            uint8_t _pad0864[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifierUppercuttedVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CModifierUppercuttedVData) == 0x868);
    };
};
