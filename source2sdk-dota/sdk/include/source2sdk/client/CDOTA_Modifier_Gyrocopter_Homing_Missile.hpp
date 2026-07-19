#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1ae0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Gyrocopter_Homing_Missile : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a58            
            source2sdk::client::ParticleIndex_t m_nFXIndex2; // 0x1a5c            
            std::int32_t hero_damage; // 0x1a60            
            std::int32_t acceleration; // 0x1a64            
            float hit_damage; // 0x1a68            
            std::int32_t max_distance; // 0x1a6c            
            float shard_radius; // 0x1a70            
            float shard_delay; // 0x1a74            
            float pre_flight_time; // 0x1a78            
            float stun_duration; // 0x1a7c            
            std::int32_t m_nTeamNumber; // 0x1a80            
            uint8_t _pad1a84[0x14]; // 0x1a84
            float speed; // 0x1a98            
            // m_hAttachTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hAttachTarget;
            char m_hAttachTarget[0x4]; // 0x1a9c            
            VectorWS m_vStartPosition; // 0x1aa0            
            uint8_t _pad1aac[0x4]; // 0x1aac
            source2sdk::client::CountdownTimer m_EnemyVision; // 0x1ab0            
            source2sdk::client::CountdownTimer m_MoveTime; // 0x1ac8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Gyrocopter_Homing_Missile because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Gyrocopter_Homing_Missile) == 0x1ae0);
    };
};
