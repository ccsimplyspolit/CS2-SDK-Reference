#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CPlayerPawnComponent.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xa8
        // Has VTable
        #pragma pack(push, 1)
        class CCSPlayer_BulletServices : public source2sdk::client::CPlayerPawnComponent
        {
        public:
            std::int32_t m_totalHitsOnServer; // 0x48            
            uint8_t _pad004c[0x5c];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSPlayer_BulletServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCSPlayer_BulletServices) == 0xa8);
    };
};
