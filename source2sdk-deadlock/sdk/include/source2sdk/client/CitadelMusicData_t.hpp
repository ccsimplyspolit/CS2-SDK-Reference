#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CitadelArpeggiator_t.hpp"
#include "source2sdk/client/CitadelMusicCues_t.hpp"

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
        // Size: 0x48
        // 
        // static metadata: MVDataRoot
        // static metadata: MVDataSingleton
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CitadelMusicData_t
        {
        public:
            source2sdk::client::CitadelMusicCues_t m_MusicCues; // 0x0            
            // m_Arpeggiators has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlHashtable<CUtlString,source2sdk::client::CitadelArpeggiator_t> m_Arpeggiators;
            char m_Arpeggiators[0x20]; // 0x28            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CitadelMusicData_t, m_MusicCues) == 0x0);
        static_assert(offsetof(source2sdk::client::CitadelMusicData_t, m_Arpeggiators) == 0x28);
        
        static_assert(sizeof(source2sdk::client::CitadelMusicData_t) == 0x48);
    };
};
