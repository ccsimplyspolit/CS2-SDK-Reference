#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CPlayer_WaterServices.hpp"

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
        // Size: 0x70
        // Has VTable
        #pragma pack(push, 1)
        class CCSPlayer_WaterServices : public source2sdk::client::CPlayer_WaterServices
        {
        public:
            float m_flWaterJumpTime; // 0x48            
            Vector m_vecWaterJumpVel; // 0x4c            
            float m_flSwimSoundTime; // 0x58            
            uint8_t _pad005c[0x14];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSPlayer_WaterServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCSPlayer_WaterServices) == 0x70);
    };
};
