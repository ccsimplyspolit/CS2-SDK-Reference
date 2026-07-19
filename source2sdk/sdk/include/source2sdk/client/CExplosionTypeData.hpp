#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Standard-layout class: true
        // Size: 0x100
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        // static metadata: MVDataOverlayType "1"
        // static metadata: MVDataAssociatedFile
        #pragma pack(push, 1)
        class CExplosionTypeData
        {
        public:
            CSoundEventName m_SoundName; // 0x0            
            // m_ParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ParticleEffect;
            char m_ParticleEffect[0xe0]; // 0x10            
            // metadata: MPropertyDescription "Whether this explosion relates to fire"
            bool m_bIsIncindiary; // 0xf0            
            // metadata: MPropertyDescription "Whether this explosion has explosive forces"
            bool m_bHasForces; // 0xf1            
            uint8_t _pad00f2[0x6]; // 0xf2
            // metadata: MPropertyDescription "Decal to use when this explosion occurs"
            CGlobalSymbol m_DecalType; // 0xf8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CExplosionTypeData, m_SoundName) == 0x0);
        static_assert(offsetof(source2sdk::client::CExplosionTypeData, m_ParticleEffect) == 0x10);
        static_assert(offsetof(source2sdk::client::CExplosionTypeData, m_bIsIncindiary) == 0xf0);
        static_assert(offsetof(source2sdk::client::CExplosionTypeData, m_bHasForces) == 0xf1);
        static_assert(offsetof(source2sdk::client::CExplosionTypeData, m_DecalType) == 0xf8);
        
        static_assert(sizeof(source2sdk::client::CExplosionTypeData) == 0x100);
    };
};
