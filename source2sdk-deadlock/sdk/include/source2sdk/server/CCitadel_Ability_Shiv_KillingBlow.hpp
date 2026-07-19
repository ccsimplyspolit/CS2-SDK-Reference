#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelAutoScaledTime.hpp"
#include "source2sdk/server/CCitadelBaseShivAbility.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
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
        // Size: 0x1818
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
        class CCitadel_Ability_Shiv_KillingBlow : public source2sdk::server::CCitadelBaseShivAbility
        {
        public:
            // m_vHitEnts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vHitEnts;
            char m_vHitEnts[0x18]; // 0xf70            
            uint8_t _pad0f88[0x488]; // 0xf88
            // metadata: MNetworkEnable
            bool m_bDamagedAnyHero; // 0x1410            
            // metadata: MNetworkEnable
            bool m_bActive; // 0x1411            
            // metadata: MNetworkEnable
            bool m_bStartedOnGround; // 0x1412            
            // metadata: MNetworkEnable
            bool m_bIsBonusCast; // 0x1413            
            // metadata: MNetworkEnable
            Vector m_vStartPosition; // 0x1414            
            // metadata: MNetworkEnable
            QAngle m_qCurrentAngles; // 0x1420            
            uint8_t _pad142c[0x4]; // 0x142c
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelAutoScaledTime m_flDepartureTime; // 0x1430            
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelAutoScaledTime m_flArrivalTime; // 0x1448            
            Vector m_vLastKnownSafePos; // 0x1460            
            bool m_bMadeSlashParticle; // 0x146c            
            uint8_t _pad146d[0x3]; // 0x146d
            source2sdk::client::ParticleIndex_t m_ChannelParticle; // 0x1470            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flDrainSuppressEndTime; // 0x1474            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flRecastWindowEnd; // 0x1478            
            uint8_t _pad147c[0x384]; // 0x147c
            // m_BuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CModifierHandleTyped<source2sdk::server::CCitadelModifier> m_BuffModifier;
            char m_BuffModifier[0x18]; // 0x1800            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Shiv_KillingBlow because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Shiv_KillingBlow) == 0x1818);
    };
};
