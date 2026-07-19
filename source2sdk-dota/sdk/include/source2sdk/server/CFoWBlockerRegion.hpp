#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/FowBlocker_t.hpp"

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
        // Size: 0x518
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CFoWBlockerRegion : public source2sdk::server::CBaseEntity
        {
        public:
            // m_vecFowBlockers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::FowBlocker_t> m_vecFowBlockers;
            char m_vecFowBlockers[0x68]; // 0x498            
            float m_flMinX; // 0x500            
            float m_flMaxX; // 0x504            
            float m_flMinY; // 0x508            
            float m_flMaxY; // 0x50c            
            float m_flGridSize; // 0x510            
            uint8_t _pad0514[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFoWBlockerRegion because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFoWBlockerRegion) == 0x518);
    };
};
