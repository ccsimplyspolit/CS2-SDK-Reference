#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/navlib/Extent.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
#include "source2sdk/server/IntervalTimer.hpp"

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
        // Size: 0x13f8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CInferno : public source2sdk::server::CBaseModelEntity
        {
        public:
            VectorWS m_firePositions[64]; // 0x770            
            VectorWS m_fireParentPositions[64]; // 0xa70            
            bool m_bFireIsBurning[64]; // 0xd70            
            Vector m_BurnNormal[64]; // 0xdb0            
            std::int32_t m_fireCount; // 0x10b0            
            std::int32_t m_nInfernoType; // 0x10b4            
            std::int32_t m_nFireEffectTickBegin; // 0x10b8            
            float m_nFireLifetime; // 0x10bc            
            bool m_bInPostEffectTime; // 0x10c0            
            bool m_bWasCreatedInSmoke; // 0x10c1            
            uint8_t _pad10c2[0x206]; // 0x10c2
            source2sdk::navlib::Extent m_extent; // 0x12c8            
            source2sdk::server::CountdownTimer m_damageTimer; // 0x12e0            
            source2sdk::server::CountdownTimer m_damageRampTimer; // 0x12f8            
            Vector m_splashVelocity; // 0x1310            
            Vector m_InitialSplashVelocity; // 0x131c            
            VectorWS m_startPos; // 0x1328            
            VectorWS m_vecOriginalSpawnLocation; // 0x1334            
            source2sdk::server::IntervalTimer m_activeTimer; // 0x1340            
            std::int32_t m_fireSpawnOffset; // 0x1350            
            std::int32_t m_nMaxFlames; // 0x1354            
            std::int32_t m_nSpreadCount; // 0x1358            
            uint8_t _pad135c[0x4]; // 0x135c
            source2sdk::server::CountdownTimer m_BookkeepingTimer; // 0x1360            
            source2sdk::server::CountdownTimer m_NextSpreadTimer; // 0x1378            
            std::uint16_t m_nSourceItemDefIndex; // 0x1390            
            uint8_t _pad1392[0x66];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CInferno because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CInferno) == 0x13f8);
    };
};
