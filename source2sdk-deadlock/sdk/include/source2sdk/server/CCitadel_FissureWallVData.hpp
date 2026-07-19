#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CEntitySubclassVDataBase.hpp"
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
        // Size: 0x130
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_FissureWallVData : public source2sdk::client::CEntitySubclassVDataBase
        {
        public:
            std::int32_t m_nMeleeHits; // 0x28            
            uint8_t _pad002c[0x4]; // 0x2c
            // metadata: MPropertyGroupName "Sounds"
            CSoundEventName m_HitSound; // 0x30            
            CSoundEventName m_DestroySound; // 0x40            
            // metadata: MPropertyStartGroup "Visuals"
            // m_DestroyParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DestroyParticle;
            char m_DestroyParticle[0xe0]; // 0x50            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_FissureWallVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_FissureWallVData) == 0x130);
    };
};
