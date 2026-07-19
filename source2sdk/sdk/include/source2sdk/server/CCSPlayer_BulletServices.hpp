#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CPlayerPawnComponent.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x70
        // Has VTable
        #pragma pack(push, 1)
        class CCSPlayer_BulletServices : public source2sdk::client::CPlayerPawnComponent
        {
        public:
            std::int32_t m_totalHitsOnServer; // 0x48            
            uint8_t _pad004c[0x24];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSPlayer_BulletServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCSPlayer_BulletServices) == 0x70);
    };
};
