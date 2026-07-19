#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CPlayer_WaterServices.hpp"

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
        // Size: 0x80
        // Has VTable
        #pragma pack(push, 1)
        class CCSPlayer_WaterServices : public source2sdk::server::CPlayer_WaterServices
        {
        public:
            source2sdk::entity2::GameTime_t m_NextDrownDamageTime; // 0x48            
            std::int32_t m_nDrownDmgRate; // 0x4c            
            source2sdk::entity2::GameTime_t m_AirFinishedTime; // 0x50            
            float m_flWaterJumpTime; // 0x54            
            Vector m_vecWaterJumpVel; // 0x58            
            float m_flSwimSoundTime; // 0x64            
            uint8_t _pad0068[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSPlayer_WaterServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCSPlayer_WaterServices) == 0x80);
    };
};
