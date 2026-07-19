#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ShotID_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x8
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct BulletID_t
        {
        public:
            source2sdk::client::ShotID_t m_ShotID; // 0x0            
            std::uint32_t m_nBulletIndex; // 0x4            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::BulletID_t, m_ShotID) == 0x0);
        static_assert(offsetof(source2sdk::client::BulletID_t, m_nBulletIndex) == 0x4);
        
        static_assert(sizeof(source2sdk::client::BulletID_t) == 0x8);
    };
};
