#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CEntitySubclassVDataBase.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

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
        // Size: 0x3f0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Bounce_PadVData : public source2sdk::client::CEntitySubclassVDataBase
        {
        public:
            float m_flBouncePadCollisionHeight; // 0x28            
            float m_flBouncePadCollisionRadius; // 0x2c            
            // metadata: MPropertyStartGroup "Visuals"
            // m_sModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_sModelName;
            char m_sModelName[0xe0]; // 0x30            
            // m_IdleParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_IdleParticle;
            char m_IdleParticle[0xe0]; // 0x110            
            // m_BounceParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BounceParticle;
            char m_BounceParticle[0xe0]; // 0x1f0            
            // m_DestroyParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DestroyParticle;
            char m_DestroyParticle[0xe0]; // 0x2d0            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strCasterBounceSound; // 0x3b0            
            CSoundEventName m_strOtherHeroBounceSound; // 0x3c0            
            CSoundEventName m_strBarrelBounceSound; // 0x3d0            
            CSoundEventName m_strExpiredSound; // 0x3e0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Bounce_PadVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Bounce_PadVData) == 0x3f0);
    };
};
