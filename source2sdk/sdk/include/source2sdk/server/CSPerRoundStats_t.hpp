#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x68
        // Has VTable
        #pragma pack(push, 1)
        struct CSPerRoundStats_t
        {
        public:
            uint8_t _pad0000[0x30]; // 0x0
            std::int32_t m_iKills; // 0x30            
            std::int32_t m_iDeaths; // 0x34            
            std::int32_t m_iAssists; // 0x38            
            std::int32_t m_iDamage; // 0x3c            
            std::int32_t m_iEquipmentValue; // 0x40            
            std::int32_t m_iMoneySaved; // 0x44            
            std::int32_t m_iKillReward; // 0x48            
            std::int32_t m_iLiveTime; // 0x4c            
            std::int32_t m_iHeadShotKills; // 0x50            
            std::int32_t m_iObjective; // 0x54            
            std::int32_t m_iCashEarned; // 0x58            
            std::int32_t m_iUtilityDamage; // 0x5c            
            std::int32_t m_iEnemiesFlashed; // 0x60            
            uint8_t _pad0064[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CSPerRoundStats_t, m_iKills) == 0x30);
        static_assert(offsetof(source2sdk::server::CSPerRoundStats_t, m_iDeaths) == 0x34);
        static_assert(offsetof(source2sdk::server::CSPerRoundStats_t, m_iAssists) == 0x38);
        static_assert(offsetof(source2sdk::server::CSPerRoundStats_t, m_iDamage) == 0x3c);
        static_assert(offsetof(source2sdk::server::CSPerRoundStats_t, m_iEquipmentValue) == 0x40);
        static_assert(offsetof(source2sdk::server::CSPerRoundStats_t, m_iMoneySaved) == 0x44);
        static_assert(offsetof(source2sdk::server::CSPerRoundStats_t, m_iKillReward) == 0x48);
        static_assert(offsetof(source2sdk::server::CSPerRoundStats_t, m_iLiveTime) == 0x4c);
        static_assert(offsetof(source2sdk::server::CSPerRoundStats_t, m_iHeadShotKills) == 0x50);
        static_assert(offsetof(source2sdk::server::CSPerRoundStats_t, m_iObjective) == 0x54);
        static_assert(offsetof(source2sdk::server::CSPerRoundStats_t, m_iCashEarned) == 0x58);
        static_assert(offsetof(source2sdk::server::CSPerRoundStats_t, m_iUtilityDamage) == 0x5c);
        static_assert(offsetof(source2sdk::server::CSPerRoundStats_t, m_iEnemiesFlashed) == 0x60);
        
        static_assert(sizeof(source2sdk::server::CSPerRoundStats_t) == 0x68);
    };
};
