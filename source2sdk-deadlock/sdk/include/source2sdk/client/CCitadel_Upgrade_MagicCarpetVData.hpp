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
        // Size: 0x19f0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Upgrade_MagicCarpetVData : public source2sdk::client::CitadelItemVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_SummonParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SummonParticle;
            char m_SummonParticle[0xe0]; // 0x18b8            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_FlyingCarpetModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_FlyingCarpetModifier;
            char m_FlyingCarpetModifier[0x10]; // 0x1998            
            // m_SummonFlyingCarpetModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_SummonFlyingCarpetModifier;
            char m_SummonFlyingCarpetModifier[0x10]; // 0x19a8            
            // m_SummonFlyingCarpetVisualModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_SummonFlyingCarpetVisualModifier;
            char m_SummonFlyingCarpetVisualModifier[0x10]; // 0x19b8            
            // m_FlyingCarpetVisualModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_FlyingCarpetVisualModifier;
            char m_FlyingCarpetVisualModifier[0x10]; // 0x19c8            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flSummonVisualDuration; // 0x19d8            
            float m_flBurstSpeedBonus; // 0x19dc            
            float m_flBurstSpeedMin; // 0x19e0            
            float m_flBurstSpeedDuration; // 0x19e4            
            float m_flMinDistanceAboveGround; // 0x19e8            
            uint8_t _pad19ec[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Upgrade_MagicCarpetVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Upgrade_MagicCarpetVData) == 0x19f0);
    };
};
