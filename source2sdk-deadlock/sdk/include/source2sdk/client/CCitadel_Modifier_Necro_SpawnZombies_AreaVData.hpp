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
        // Size: 0x880
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_Necro_SpawnZombies_AreaVData : public source2sdk::client::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_SummonParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SummonParticle;
            char m_SummonParticle[0xe0]; // 0x750            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_SummonModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_SummonModifier;
            char m_SummonModifier[0x10]; // 0x830            
            // m_SummonDecayModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_SummonDecayModifier;
            char m_SummonDecayModifier[0x10]; // 0x840            
            // m_SpawningInModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_SpawningInModifier;
            char m_SpawningInModifier[0x10]; // 0x850            
            // metadata: MPropertyStartGroup "Gameplay"
            bool m_bDebug; // 0x860            
            uint8_t _pad0861[0x3]; // 0x861
            float m_flRandomSpawnOffsetPerSummon; // 0x864            
            float m_flZombieSpawnVerticalOffset; // 0x868            
            float m_flZombieSpawnForwardOffset; // 0x86c            
            float m_flZombieSpawnNavMeshSearchDistance; // 0x870            
            float m_flForwardWalkDistance; // 0x874            
            float m_flWalkDestinationRandomness; // 0x878            
            float m_flSpawningInTime; // 0x87c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Necro_SpawnZombies_AreaVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_Necro_SpawnZombies_AreaVData) == 0x880);
    };
};
