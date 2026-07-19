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
        // Size: 0x920
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CModifierRiotProtocolBuffVData : public source2sdk::client::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyGroupName "Visuals"
            // m_LaserParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserParticle;
            char m_LaserParticle[0xe0]; // 0x750            
            // m_PulseHitEnemyParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PulseHitEnemyParticle;
            char m_PulseHitEnemyParticle[0xe0]; // 0x830            
            // metadata: MPropertyGroupName "Modifiers"
            // m_EnemyDebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_EnemyDebuffModifier;
            char m_EnemyDebuffModifier[0x10]; // 0x910            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifierRiotProtocolBuffVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CModifierRiotProtocolBuffVData) == 0x920);
    };
};
