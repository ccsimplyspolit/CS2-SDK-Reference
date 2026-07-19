#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CitadelAbilityVData.hpp"

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
        // Size: 0x19f8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityRestorativeGooVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_RestorativeGooParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_RestorativeGooParticle;
            char m_RestorativeGooParticle[0xe0]; // 0x1818            
            // m_RestorativeGooSelfParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_RestorativeGooSelfParticle;
            char m_RestorativeGooSelfParticle[0xe0]; // 0x18f8            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_RestorativeGooModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_RestorativeGooModifier;
            char m_RestorativeGooModifier[0x10]; // 0x19d8            
            // m_SelfCubeModelSwapModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_SelfCubeModelSwapModifier;
            char m_SelfCubeModelSwapModifier[0x10]; // 0x19e8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityRestorativeGooVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbilityRestorativeGooVData) == 0x19f8);
    };
};
