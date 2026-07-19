#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelAutoScaledTime.hpp"
#include "source2sdk/client/CCitadelBaseShivAbility.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x1a60
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bDamagedAnyHero"
        // static metadata: MNetworkVarNames "bool m_bActive"
        // static metadata: MNetworkVarNames "bool m_bStartedOnGround"
        // static metadata: MNetworkVarNames "bool m_bIsBonusCast"
        // static metadata: MNetworkVarNames "Vector m_vStartPosition"
        // static metadata: MNetworkVarNames "QAngle m_qCurrentAngles"
        // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flDepartureTime"
        // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flArrivalTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flDrainSuppressEndTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flRecastWindowEnd"
        #pragma pack(push, 1)
        class CCitadel_Ability_Shiv_KillingBlow : public source2sdk::client::CCitadelBaseShivAbility
        {
        public:
            // m_vHitEnts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vHitEnts;
            char m_vHitEnts[0x18]; // 0x11d8            
            uint8_t _pad11f0[0x488]; // 0x11f0
            // metadata: MNetworkEnable
            bool m_bDamagedAnyHero; // 0x1678            
            // metadata: MNetworkEnable
            bool m_bActive; // 0x1679            
            // metadata: MNetworkEnable
            bool m_bStartedOnGround; // 0x167a            
            // metadata: MNetworkEnable
            bool m_bIsBonusCast; // 0x167b            
            // metadata: MNetworkEnable
            Vector m_vStartPosition; // 0x167c            
            // metadata: MNetworkEnable
            QAngle m_qCurrentAngles; // 0x1688            
            uint8_t _pad1694[0x4]; // 0x1694
            // metadata: MNetworkEnable
            source2sdk::client::CCitadelAutoScaledTime m_flDepartureTime; // 0x1698            
            // metadata: MNetworkEnable
            source2sdk::client::CCitadelAutoScaledTime m_flArrivalTime; // 0x16b0            
            Vector m_vLastKnownSafePos; // 0x16c8            
            bool m_bMadeSlashParticle; // 0x16d4            
            uint8_t _pad16d5[0x3]; // 0x16d5
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flDrainSuppressEndTime; // 0x16d8            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flRecastWindowEnd; // 0x16dc            
            uint8_t _pad16e0[0x380];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Shiv_KillingBlow because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Shiv_KillingBlow) == 0x1a60);
    };
};
