#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1aa0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_MonkeyKing_ArcToGround : public source2sdk::client::CDOTA_Buff
        {
        public:
            float leap_speed; // 0x1a58            
            float give_up_distance; // 0x1a5c            
            float attackspeed_duration; // 0x1a60            
            float m_flOriginalZDelta; // 0x1a64            
            float m_flZDelta; // 0x1a68            
            VectorWS m_vStart; // 0x1a6c            
            VectorWS m_vTargetPos; // 0x1a78            
            float m_flSpeed; // 0x1a84            
            bool m_bDroppedFromTree; // 0x1a88            
            uint8_t _pad1a89[0x3]; // 0x1a89
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a8c            
            source2sdk::client::ParticleIndex_t m_nFXIndex2; // 0x1a90            
            float m_flOriginalHeight; // 0x1a94            
            bool m_bRightClickHop; // 0x1a98            
            uint8_t _pad1a99[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_MonkeyKing_ArcToGround because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_MonkeyKing_ArcToGround) == 0x1aa0);
    };
};
