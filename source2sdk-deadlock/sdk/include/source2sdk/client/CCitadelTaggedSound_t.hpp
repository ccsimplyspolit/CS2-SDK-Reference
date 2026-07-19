#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Size: 0x18
        // 
        // static metadata: MVDataOverlayType "2"
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CCitadelTaggedSound_t
        {
        public:
            // metadata: MPropertyStartGroup "Tagged Sounds"
            CSoundEventName m_soundEvent; // 0x0            
            CUtlString m_tags; // 0x10            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CCitadelTaggedSound_t, m_soundEvent) == 0x0);
        static_assert(offsetof(source2sdk::client::CCitadelTaggedSound_t, m_tags) == 0x10);
        
        static_assert(sizeof(source2sdk::client::CCitadelTaggedSound_t) == 0x18);
    };
};
