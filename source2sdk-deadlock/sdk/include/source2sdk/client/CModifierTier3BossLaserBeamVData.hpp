#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifierAura.hpp"
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
        // Size: 0xce8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CModifierTier3BossLaserBeamVData : public source2sdk::client::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_GroundAuraModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifierAura> m_GroundAuraModifier;
            char m_GroundAuraModifier[0x10]; // 0x750            
            float m_flAuraDropTickRate; // 0x760            
            uint8_t _pad0764[0x4]; // 0x764
            // metadata: MPropertyStartGroup "Visuals"
            // m_AmberLaserBeamEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AmberLaserBeamEffect;
            char m_AmberLaserBeamEffect[0xe0]; // 0x768            
            // m_AmberLaserPreviewEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AmberLaserPreviewEffect;
            char m_AmberLaserPreviewEffect[0xe0]; // 0x848            
            // m_SapphLaserBeamEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SapphLaserBeamEffect;
            char m_SapphLaserBeamEffect[0xe0]; // 0x928            
            // m_SapphLaserPreviewEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SapphLaserPreviewEffect;
            char m_SapphLaserPreviewEffect[0xe0]; // 0xa08            
            // m_AmberLaserChargingEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AmberLaserChargingEffect;
            char m_AmberLaserChargingEffect[0xe0]; // 0xae8            
            // m_SapphLaserChargingEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SapphLaserChargingEffect;
            char m_SapphLaserChargingEffect[0xe0]; // 0xbc8            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strLaserLoopSound; // 0xca8            
            CSoundEventName m_strLaserFireSound; // 0xcb8            
            CSoundEventName m_strLaserHitSound; // 0xcc8            
            // metadata: MPropertyStartGroup "GamePlay"
            float m_flLaserDPSToPlayers; // 0xcd8            
            float m_flLaserDPSMaxHealth; // 0xcdc            
            float m_flLaserDPSToNPCs; // 0xce0            
            float m_flLaserDPSTickRate; // 0xce4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifierTier3BossLaserBeamVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CModifierTier3BossLaserBeamVData) == 0xce8);
    };
};
