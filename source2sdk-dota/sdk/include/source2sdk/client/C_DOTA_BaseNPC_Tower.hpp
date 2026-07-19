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
        // Size: 0x1a90
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_BaseNPC_Tower : public source2sdk::client::C_DOTA_BaseNPC_Building
        {
        public:
            source2sdk::client::ParticleIndex_t m_nAltHeldRangeFX; // 0x1a20            
            bool m_bWasInRange; // 0x1a24            
            uint8_t _pad1a25[0x3]; // 0x1a25
            source2sdk::client::ParticleIndex_t m_iRangeFX; // 0x1a28            
            source2sdk::client::ParticleIndex_t m_iPulseFX; // 0x1a2c            
            std::uint8_t m_unTowerTier; // 0x1a30            
            uint8_t _pad1a31[0x3]; // 0x1a31
            float m_fTowerAggroDangerAmount; // 0x1a34            
            float m_flControlledUnitInRangeAmount; // 0x1a38            
            float m_flControlledUnitTargettedAmount; // 0x1a3c            
            source2sdk::client::ParticleIndex_t m_iAnticipationFX; // 0x1a40            
            uint8_t _pad1a44[0x4]; // 0x1a44
            CUtlSymbolLarge m_szAnticipationFXName; // 0x1a48            
            // m_hPrevTowerAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hPrevTowerAttackTarget;
            char m_hPrevTowerAttackTarget[0x4]; // 0x1a50            
            // m_hTowerAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTowerAttackTarget;
            char m_hTowerAttackTarget[0x4]; // 0x1a54            
            // m_hTowerHighFiveTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTowerHighFiveTarget;
            char m_hTowerHighFiveTarget[0x4]; // 0x1a58            
            std::int32_t m_iPoseParameterAim; // 0x1a5c            
            QAngle m_angDefaultCustomTowerAngle; // 0x1a60            
            float m_flLastAimYaw; // 0x1a6c            
            bool m_bClientSideCustomTower; // 0x1a70            
            uint8_t _pad1a71[0x7]; // 0x1a71
            source2sdk::client::CountdownTimer m_IdleRareAnimationTime; // 0x1a78            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_BaseNPC_Tower because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_BaseNPC_Tower) == 0x1a90);
    };
};
