#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CitadelItemVData.hpp"

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
        // Size: 0x1c78
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Item_ShadowStepVData : public source2sdk::server::CitadelItemVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_PulseParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PulseParticle;
            char m_PulseParticle[0xe0]; // 0x18b8            
            // m_TargetParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TargetParticle;
            char m_TargetParticle[0xe0]; // 0x1998            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strPulseTickSound; // 0x1a78            
            // metadata: MPropertyStartGroup "Gameplay"
            std::int32_t m_iMaxTargets; // 0x1a88            
            uint8_t _pad1a8c[0x4]; // 0x1a8c
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strExplodeSound; // 0x1a90            
            // metadata: MPropertyGroupName "Visuals"
            // m_CastDelayParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastDelayParticle;
            char m_CastDelayParticle[0xe0]; // 0x1aa0            
            // m_TeleportTrailParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TeleportTrailParticle;
            char m_TeleportTrailParticle[0xe0]; // 0x1b80            
            // metadata: MPropertyGroupName "Gameplay"
            float m_flGroundProbeSpeed; // 0x1c60            
            float m_flGroundStepDown; // 0x1c64            
            float m_flGroundStepUp; // 0x1c68            
            std::int32_t m_iMaxGroundIterations; // 0x1c6c            
            float m_flVelocityScale; // 0x1c70            
            uint8_t _pad1c74[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Item_ShadowStepVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Item_ShadowStepVData) == 0x1c78);
    };
};
