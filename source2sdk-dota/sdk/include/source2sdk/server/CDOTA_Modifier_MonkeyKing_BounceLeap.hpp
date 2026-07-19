#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

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
        // Size: 0x1ab0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_MonkeyKing_BounceLeap : public source2sdk::client::CDOTA_Buff
        {
        public:
            float give_up_distance; // 0x1a58            
            float ground_jump_distance; // 0x1a5c            
            float m_flZDelta; // 0x1a60            
            float perched_day_vision; // 0x1a64            
            float perched_night_vision; // 0x1a68            
            VectorWS m_vStart; // 0x1a6c            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1a78            
            VectorWS m_vTargetPos; // 0x1a7c            
            float m_flSpeed; // 0x1a88            
            bool m_bTargetingEntity; // 0x1a8c            
            bool m_bGroundToTree; // 0x1a8d            
            bool m_bTreeToGround; // 0x1a8e            
            bool m_bTreeToTree; // 0x1a8f            
            bool m_bIsSpringJump; // 0x1a90            
            uint8_t _pad1a91[0x3]; // 0x1a91
            float m_fSpringChanneledPercent; // 0x1a94            
            std::int32_t m_nLeapSpeed; // 0x1a98            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a9c            
            source2sdk::client::ParticleIndex_t m_nFXIndex2; // 0x1aa0            
            float m_flFlightDuration; // 0x1aa4            
            float m_flCurrentTimeVert; // 0x1aa8            
            uint8_t _pad1aac[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_MonkeyKing_BounceLeap because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_MonkeyKing_BounceLeap) == 0x1ab0);
    };
};
