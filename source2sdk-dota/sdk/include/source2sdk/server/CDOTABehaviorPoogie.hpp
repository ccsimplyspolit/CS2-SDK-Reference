#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABehaviorCompanion.hpp"
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x258
        // Has VTable
        #pragma pack(push, 1)
        class CDOTABehaviorPoogie : public source2sdk::server::CDOTABehaviorCompanion
        {
        public:
            // m_hMyHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hMyHero;
            char m_hMyHero[0x4]; // 0x180            
            // m_hEffigy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hEffigy;
            char m_hEffigy[0x4]; // 0x184            
            // m_hHighFiveAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hHighFiveAbility;
            char m_hHighFiveAbility[0x4]; // 0x188            
            uint8_t _pad018c[0xc]; // 0x18c
            bool m_bEnemiesNearBase; // 0x198            
            uint8_t _pad0199[0x3]; // 0x199
            std::int32_t m_iRightOffsetEffigy; // 0x19c            
            std::int32_t m_iForwardOffsetEffigy; // 0x1a0            
            std::int32_t m_iRightOffsetHero; // 0x1a4            
            std::int32_t m_iForwardOffsetHero; // 0x1a8            
            uint8_t _pad01ac[0x4]; // 0x1ac
            source2sdk::server::CountdownTimer m_PositionOffsetsTimer; // 0x1b0            
            source2sdk::server::CountdownTimer m_HighFiveTimer; // 0x1c8            
            source2sdk::server::CountdownTimer m_EmoteTimer; // 0x1e0            
            source2sdk::server::CountdownTimer m_VanishTimer; // 0x1f8            
            source2sdk::server::CountdownTimer m_GreetHeroTimer; // 0x210            
            source2sdk::server::CountdownTimer m_EnemiesNearBaseTimer; // 0x228            
            source2sdk::server::CountdownTimer m_FindEffigyTimer; // 0x240            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTABehaviorPoogie because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTABehaviorPoogie) == 0x258);
    };
};
