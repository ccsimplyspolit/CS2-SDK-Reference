#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadel_Item_BubbleVData.hpp"

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
        class CCitadel_Item_PrismBlastVData : public source2sdk::server::CCitadel_Item_BubbleVData
        {
        public:
            float m_flBeamRotateSpeed; // 0x19b8            
            float m_flTickRate; // 0x19bc            
            float m_flOscilateRate; // 0x19c0            
            float m_flOscilateMaxPitch; // 0x19c4            
            // metadata: MPropertyGroupName "Visuals"
            // m_BeamParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamParticle;
            char m_BeamParticle[0xe0]; // 0x19c8            
            // m_BeamParticleLocal has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamParticleLocal;
            char m_BeamParticleLocal[0xe0]; // 0x1aa8            
            // m_BeamHitParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamHitParticle;
            char m_BeamHitParticle[0xe0]; // 0x1b88            
            // metadata: MPropertyGroupName "Sounds"
            CSoundEventName m_strLaserLoopSound; // 0x1c68            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Item_PrismBlastVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Item_PrismBlastVData) == 0x1c78);
    };
};
