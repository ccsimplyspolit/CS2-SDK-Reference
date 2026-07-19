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
        // Size: 0x2e8
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct KothParams_t
        {
        public:
            float m_flKothRadius; // 0x0            
            float m_flKothWarningDropHeight; // 0x4            
            // m_KothEarlyWarningParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_KothEarlyWarningParticle;
            char m_KothEarlyWarningParticle[0xe0]; // 0x8            
            // m_KothSpawnLocationParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_KothSpawnLocationParticle;
            char m_KothSpawnLocationParticle[0xe0]; // 0xe8            
            // m_KothOnSpawnParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_KothOnSpawnParticle;
            char m_KothOnSpawnParticle[0xe0]; // 0x1c8            
            CSoundEventName m_strKothSpawnLoopStartSound; // 0x2a8            
            CSoundEventName m_strKothSpawnLoopSound; // 0x2b8            
            CSoundEventName m_strKothPreSpawnLoopSound; // 0x2c8            
            CSoundEventName m_strKothSpawnCompleteSound; // 0x2d8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::KothParams_t, m_flKothRadius) == 0x0);
        static_assert(offsetof(source2sdk::client::KothParams_t, m_flKothWarningDropHeight) == 0x4);
        static_assert(offsetof(source2sdk::client::KothParams_t, m_KothEarlyWarningParticle) == 0x8);
        static_assert(offsetof(source2sdk::client::KothParams_t, m_KothSpawnLocationParticle) == 0xe8);
        static_assert(offsetof(source2sdk::client::KothParams_t, m_KothOnSpawnParticle) == 0x1c8);
        static_assert(offsetof(source2sdk::client::KothParams_t, m_strKothSpawnLoopStartSound) == 0x2a8);
        static_assert(offsetof(source2sdk::client::KothParams_t, m_strKothSpawnLoopSound) == 0x2b8);
        static_assert(offsetof(source2sdk::client::KothParams_t, m_strKothPreSpawnLoopSound) == 0x2c8);
        static_assert(offsetof(source2sdk::client::KothParams_t, m_strKothSpawnCompleteSound) == 0x2d8);
        
        static_assert(sizeof(source2sdk::client::KothParams_t) == 0x2e8);
    };
};
