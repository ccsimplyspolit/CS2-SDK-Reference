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
        // Size: 0x1948
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityStickyBombVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyGroupName "Modifiers"
            // m_BombAttachedModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_BombAttachedModifier;
            char m_BombAttachedModifier[0x10]; // 0x1818            
            // m_SelfBuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_SelfBuffModifier;
            char m_SelfBuffModifier[0x10]; // 0x1828            
            // m_KillCheckModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_KillCheckModifier;
            char m_KillCheckModifier[0x10]; // 0x1838            
            // metadata: MPropertyStartGroup "Visuals"
            // m_CastBombParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastBombParticle;
            char m_CastBombParticle[0xe0]; // 0x1848            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flPostRangeGravityScale; // 0x1928            
            float m_flAllyCollideRadius; // 0x192c            
            float m_flBombDragStartRange; // 0x1930            
            float m_flBombDragStartValue; // 0x1934            
            float m_flBombDragEndValue; // 0x1938            
            float m_flAllyTargetRangeMult; // 0x193c            
            float m_flHookTargetOnlyWindow; // 0x1940            
            uint8_t _pad1944[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityStickyBombVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbilityStickyBombVData) == 0x1948);
    };
};
