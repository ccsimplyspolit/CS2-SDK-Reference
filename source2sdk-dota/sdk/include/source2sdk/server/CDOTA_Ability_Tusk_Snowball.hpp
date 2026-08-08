#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x6d8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Tusk_Snowball : public source2sdk::server::CDOTABaseAbility
        {
        public:
            uint8_t _pad0580[0x10]; // 0x580
            float snowball_windup_radius; // 0x590
            float snowball_radius; // 0x594
            float snowball_grow_rate; // 0x598
            std::int32_t snowball_damage; // 0x59c
            std::int32_t snowball_damage_bonus; // 0x5a0
            float stun_duration; // 0x5a4
            float stun_duration_bonus; // 0x5a8
            std::int32_t bonus_damage; // 0x5ac
            float bonus_stun; // 0x5b0
            std::int32_t snowball_speed; // 0x5b4
            std::int32_t snowball_speed_bonus; // 0x5b8
            float snowball_duration; // 0x5bc
            VectorWS m_vProjectileLocation; // 0x5c0
            uint8_t _pad05cc[0x4]; // 0x5cc
            // m_hSnowballedUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hSnowballedUnits;
            char m_hSnowballedUnits[0x18]; // 0x5d0
            // m_hEnemiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hEnemiesHit;
            char m_hEnemiesHit[0x18]; // 0x5e8
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x600
            uint8_t _pad0604[0x4]; // 0x604
            source2sdk::server::CountdownTimer ctSnowball; // 0x608
            bool m_bSpeakAlly; // 0x620
            bool m_bIsExpired; // 0x621
            bool m_bInWindup; // 0x622
            uint8_t _pad0623[0x1]; // 0x623
            // m_hPrimaryTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hPrimaryTarget;
            char m_hPrimaryTarget[0x4]; // 0x624
            std::int32_t m_nContainedValidUnits; // 0x628
            bool m_bEndingSnowball; // 0x62c
            uint8_t _pad062d[0xa3]; // 0x62d
            std::int32_t m_nSnowballProjectileHandle; // 0x6d0
            uint8_t _pad06d4[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Ability_Tusk_Snowball because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Tusk_Snowball) == 0x6d8);
    };
};
