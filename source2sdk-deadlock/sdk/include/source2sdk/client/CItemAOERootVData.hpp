#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelItemVData.hpp"
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
        // Size: 0x19c8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CItemAOERootVData : public source2sdk::client::CitadelItemVData
        {
        public:
            // metadata: MPropertyGroupName "Visuals"
            // m_AOEParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AOEParticle;
            char m_AOEParticle[0xe0]; // 0x18b8            
            // metadata: MPropertyGroupName "Sounds"
            CSoundEventName m_strRootTargetSound; // 0x1998            
            // metadata: MPropertyGroupName "Modifiers"
            // m_TargetModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_TargetModifier;
            char m_TargetModifier[0x10]; // 0x19a8            
            // m_TetherModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_TetherModifier;
            char m_TetherModifier[0x10]; // 0x19b8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CItemAOERootVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CItemAOERootVData) == 0x19c8);
    };
};
