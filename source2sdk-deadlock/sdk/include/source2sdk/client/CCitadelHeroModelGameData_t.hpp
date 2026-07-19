#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AmbientParticleSettings_t.hpp"
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
        // Size: 0x128
        // 
        // static metadata: MModelGameData
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CCitadelHeroModelGameData_t
        {
        public:
            // metadata: MPropertyStartGroup "+Visuals"
            // m_hAmbientParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_hAmbientParticle;
            char m_hAmbientParticle[0xe0]; // 0x0            
            // m_vecAmbientParticleSettings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::AmbientParticleSettings_t> m_vecAmbientParticleSettings;
            char m_vecAmbientParticleSettings[0x18]; // 0xe0            
            // metadata: MPropertyStartGroup "+AG2"
            float m_flTurnThreshold; // 0xf8            
            float m_flTurnDuration; // 0xfc            
            // metadata: MPropertyStartGroup "+Physics / Movement"
            float m_flStepHeight; // 0x100            
            // metadata: MPropertyDescription "Size of the capsule"
            float m_flCollisionRadius; // 0x104            
            float m_flCollisionHeight; // 0x108            
            // metadata: MPropertyDescription "Size of the physics collison OBB"
            Vector m_vCollisionHullMins; // 0x10c            
            Vector m_vCollisionHullMaxs; // 0x118            
            uint8_t _pad0124[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CCitadelHeroModelGameData_t, m_hAmbientParticle) == 0x0);
        static_assert(offsetof(source2sdk::client::CCitadelHeroModelGameData_t, m_vecAmbientParticleSettings) == 0xe0);
        static_assert(offsetof(source2sdk::client::CCitadelHeroModelGameData_t, m_flTurnThreshold) == 0xf8);
        static_assert(offsetof(source2sdk::client::CCitadelHeroModelGameData_t, m_flTurnDuration) == 0xfc);
        static_assert(offsetof(source2sdk::client::CCitadelHeroModelGameData_t, m_flStepHeight) == 0x100);
        static_assert(offsetof(source2sdk::client::CCitadelHeroModelGameData_t, m_flCollisionRadius) == 0x104);
        static_assert(offsetof(source2sdk::client::CCitadelHeroModelGameData_t, m_flCollisionHeight) == 0x108);
        static_assert(offsetof(source2sdk::client::CCitadelHeroModelGameData_t, m_vCollisionHullMins) == 0x10c);
        static_assert(offsetof(source2sdk::client::CCitadelHeroModelGameData_t, m_vCollisionHullMaxs) == 0x118);
        
        static_assert(sizeof(source2sdk::client::CCitadelHeroModelGameData_t) == 0x128);
    };
};
