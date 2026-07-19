#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/FowBlocker_t.hpp"

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
        // Size: 0x670
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CFoWBlockerRegion : public source2sdk::client::C_BaseEntity
        {
        public:
            // m_vecFowBlockers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::FowBlocker_t> m_vecFowBlockers;
            char m_vecFowBlockers[0x68]; // 0x5f0            
            float m_flMinX; // 0x658            
            float m_flMaxX; // 0x65c            
            float m_flMinY; // 0x660            
            float m_flMaxY; // 0x664            
            float m_flGridSize; // 0x668            
            uint8_t _pad066c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFoWBlockerRegion because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CFoWBlockerRegion) == 0x670);
    };
};
