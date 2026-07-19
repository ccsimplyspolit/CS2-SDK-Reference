#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CitadelMusicCueOverrides_t.hpp"
#include "source2sdk/client/EMusicState_t.hpp"

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
        // Size: 0x28
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CitadelMusicCues_t
        {
        public:
            // m_MusicStateData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::EMusicState_t,source2sdk::client::CitadelMusicCueOverrides_t> m_MusicStateData;
            char m_MusicStateData[0x28]; // 0x0            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CitadelMusicCues_t, m_MusicStateData) == 0x0);
        
        static_assert(sizeof(source2sdk::client::CitadelMusicCues_t) == 0x28);
    };
};
