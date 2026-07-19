#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/ParticleAttachment_t.hpp"
#include "source2sdk/client/CEntitySubclassVDataBase.hpp"
#include "source2sdk/client/PrecipitationFilter_t.hpp"
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
        // Size: 0x2f0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CPrecipitationVData : public source2sdk::client::CEntitySubclassVDataBase
        {
        public:
            // m_szParticlePrecipitationEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_szParticlePrecipitationEffect;
            char m_szParticlePrecipitationEffect[0xe0]; // 0x28            
            // m_szParticlePrecipitationPuddleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_szParticlePrecipitationPuddleEffect;
            char m_szParticlePrecipitationPuddleEffect[0xe0]; // 0x108            
            // m_szParticlePrecipitationPostEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_szParticlePrecipitationPostEffect;
            char m_szParticlePrecipitationPostEffect[0xe0]; // 0x1e8            
            float m_flInnerDistance; // 0x2c8            
            source2sdk::animationsystem::ParticleAttachment_t m_nAttachType; // 0x2cc            
            bool m_bBatchSameVolumeType; // 0x2d0            
            uint8_t _pad02d1[0x3]; // 0x2d1
            std::int32_t m_nRTEnvCP; // 0x2d4            
            std::int32_t m_nRTEnvCPComponent; // 0x2d8            
            uint8_t _pad02dc[0x4]; // 0x2dc
            CUtlString m_szModifier; // 0x2e0            
            // metadata: MPropertyDescription "If set, we will populate a snapshot from the surface graph"
            std::int32_t m_nUseSnapshotFromSurfaceGraph; // 0x2e8            
            source2sdk::client::PrecipitationFilter_t m_snapshotFilter; // 0x2ec            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPrecipitationVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CPrecipitationVData) == 0x2f0);
    };
};
