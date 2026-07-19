#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x730
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Tusk_Snowball : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            float snowball_windup_radius; // 0x6a8            
            float snowball_radius; // 0x6ac            
            float snowball_grow_rate; // 0x6b0            
            std::int32_t snowball_damage; // 0x6b4            
            std::int32_t snowball_damage_bonus; // 0x6b8            
            float stun_duration; // 0x6bc            
            float stun_duration_bonus; // 0x6c0            
            std::int32_t bonus_damage; // 0x6c4            
            float bonus_stun; // 0x6c8            
            std::int32_t snowball_speed; // 0x6cc            
            std::int32_t snowball_speed_bonus; // 0x6d0            
            float snowball_duration; // 0x6d4            
            VectorWS m_vProjectileLocation; // 0x6d8            
            uint8_t _pad06e4[0x4]; // 0x6e4
            // m_hSnowballedUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hSnowballedUnits;
            char m_hSnowballedUnits[0x18]; // 0x6e8            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x700            
            uint8_t _pad0704[0x4]; // 0x704
            source2sdk::client::CountdownTimer ctSnowball; // 0x708            
            bool m_bSpeakAlly; // 0x720            
            bool m_bIsExpired; // 0x721            
            bool m_bInWindup; // 0x722            
            uint8_t _pad0723[0x1]; // 0x723
            // m_hPrimaryTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hPrimaryTarget;
            char m_hPrimaryTarget[0x4]; // 0x724            
            std::int32_t m_nContainedValidUnits; // 0x728            
            bool m_bEndingSnowball; // 0x72c            
            uint8_t _pad072d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Tusk_Snowball because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Tusk_Snowball) == 0x730);
    };
};
