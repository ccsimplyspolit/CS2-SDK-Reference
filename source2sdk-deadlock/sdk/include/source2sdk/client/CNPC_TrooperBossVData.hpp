#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAI_CitadelNPCVData.hpp"
#include "source2sdk/client/CCitadelModifier.hpp"

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
        // Size: 0x13d8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNPC_TrooperBossVData : public source2sdk::client::CAI_CitadelNPCVData
        {
        public:
            bool m_bMitigateDamageFromPlayers; // 0x1348            
            uint8_t _pad1349[0x3]; // 0x1349
            float m_flPlayerAutoAttackRange; // 0x134c            
            float m_flMinMeleeAttackTime; // 0x1350            
            float m_flMeleeDuration; // 0x1354            
            float m_flInvulRange; // 0x1358            
            float m_flTrooperDamageResistPct; // 0x135c            
            float m_flPlayerDamageResistPct; // 0x1360            
            float m_flBackDoorProtectionRange; // 0x1364            
            // metadata: MPropertyStartGroup "Death"
            float m_flDeathFadeTimeStart; // 0x1368            
            float m_flDeathFadeTimeEnd; // 0x136c            
            // metadata: MPropertyStartGroup "Collision"
            float m_flTier1PlayerClipCapsuleRadius; // 0x1370            
            float m_flTier1PlayerClipCapsuleHeight; // 0x1374            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_sAngryStart; // 0x1378            
            CSoundEventName m_sAngryLoop; // 0x1388            
            CSoundEventName m_sAngryStop; // 0x1398            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_BackdoorProtectionModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_BackdoorProtectionModifier;
            char m_BackdoorProtectionModifier[0x10]; // 0x13a8            
            // m_TrooperBossInvulnModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_TrooperBossInvulnModifier;
            char m_TrooperBossInvulnModifier[0x10]; // 0x13b8            
            // metadata: MPropertyStartGroup "DPS"
            // metadata: MPropertyDescription "Vs Trooper DPS"
            float m_flTrooperDPS; // 0x13c8            
            // metadata: MPropertyDescription "Vs Player DPS"
            float m_flPlayerDPS; // 0x13cc            
            float m_flDPSPctGrowthPerMinute; // 0x13d0            
            uint8_t _pad13d4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_TrooperBossVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CNPC_TrooperBossVData) == 0x13d8);
    };
};
