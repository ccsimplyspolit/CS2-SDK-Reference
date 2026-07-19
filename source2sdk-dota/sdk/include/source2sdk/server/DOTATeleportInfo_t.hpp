#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x40
        // Has VTable
        #pragma pack(push, 1)
        struct DOTATeleportInfo_t
        {
        public:
            uint8_t _pad0000[0x30]; // 0x0
            source2sdk::entity2::GameTime_t m_flTime; // 0x30            
            Vector2D m_vPosition; // 0x34            
            bool m_bIsOutpost; // 0x3c            
            uint8_t _pad003d[0x3];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::DOTATeleportInfo_t, m_flTime) == 0x30);
        static_assert(offsetof(source2sdk::server::DOTATeleportInfo_t, m_vPosition) == 0x34);
        static_assert(offsetof(source2sdk::server::DOTATeleportInfo_t, m_bIsOutpost) == 0x3c);
        
        static_assert(sizeof(source2sdk::server::DOTATeleportInfo_t) == 0x40);
    };
};
