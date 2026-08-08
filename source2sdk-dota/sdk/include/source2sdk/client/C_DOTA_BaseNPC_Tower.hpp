#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_BaseNPC_Building.hpp"
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
        // Size: 0x1a98
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_BaseNPC_Tower : public source2sdk::client::C_DOTA_BaseNPC_Building
        {
        public:
            source2sdk::client::ParticleIndex_t m_nAltHeldRangeFX; // 0x1a28
            bool m_bWasInRange; // 0x1a2c
            uint8_t _pad1a2d[0x3]; // 0x1a2d
            source2sdk::client::ParticleIndex_t m_iRangeFX; // 0x1a30
            source2sdk::client::ParticleIndex_t m_iPulseFX; // 0x1a34
            std::uint8_t m_unTowerTier; // 0x1a38
            uint8_t _pad1a39[0x3]; // 0x1a39
            float m_fTowerAggroDangerAmount; // 0x1a3c
            float m_flControlledUnitInRangeAmount; // 0x1a40
            float m_flControlledUnitTargettedAmount; // 0x1a44
            source2sdk::client::ParticleIndex_t m_iAnticipationFX; // 0x1a48
            uint8_t _pad1a4c[0x4]; // 0x1a4c
            CUtlSymbolLarge m_szAnticipationFXName; // 0x1a50
            // m_hPrevTowerAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hPrevTowerAttackTarget;
            char m_hPrevTowerAttackTarget[0x4]; // 0x1a58
            // m_hTowerAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTowerAttackTarget;
            char m_hTowerAttackTarget[0x4]; // 0x1a5c
            // m_hTowerHighFiveTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTowerHighFiveTarget;
            char m_hTowerHighFiveTarget[0x4]; // 0x1a60
            std::int32_t m_iPoseParameterAim; // 0x1a64
            QAngle m_angDefaultCustomTowerAngle; // 0x1a68
            float m_flLastAimYaw; // 0x1a74
            bool m_bClientSideCustomTower; // 0x1a78
            uint8_t _pad1a79[0x7]; // 0x1a79
            source2sdk::client::CountdownTimer m_IdleRareAnimationTime; // 0x1a80
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in C_DOTA_BaseNPC_Tower because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::C_DOTA_BaseNPC_Tower) == 0x1a98);
    };
};
