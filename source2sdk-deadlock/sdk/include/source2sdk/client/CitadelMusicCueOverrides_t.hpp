#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CitadelMusicCueData_t.hpp"

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
        // Size: 0x1c8
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CitadelMusicCueOverrides_t
        {
        public:
            source2sdk::client::CitadelMusicCueData_t m_MusicStateDefault; // 0x0            
            source2sdk::client::CitadelMusicCueData_t m_MusicStateAmber; // 0x98            
            source2sdk::client::CitadelMusicCueData_t m_MusicStateSapphire; // 0x130            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CitadelMusicCueOverrides_t, m_MusicStateDefault) == 0x0);
        static_assert(offsetof(source2sdk::client::CitadelMusicCueOverrides_t, m_MusicStateAmber) == 0x98);
        static_assert(offsetof(source2sdk::client::CitadelMusicCueOverrides_t, m_MusicStateSapphire) == 0x130);
        
        static_assert(sizeof(source2sdk::client::CitadelMusicCueOverrides_t) == 0x1c8);
    };
};
