#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CCitadel_GuidedArrow_OwlModel;
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
        // Size: 0x1248
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "EHANDLE m_hProjectile"
        // static metadata: MNetworkVarNames "float m_flArrowSpeed"
        // static metadata: MNetworkVarNames "GameTime_t m_flSnapAnglesBackTime"
        // static metadata: MNetworkVarNames "int m_nBonusTechPower"
        // static metadata: MNetworkVarNames "bool m_bNeedsExplosion"
        #pragma pack(push, 1)
        class CCitadel_Ability_GuidedArrow : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f70[0x8]; // 0xf70
            // metadata: MNetworkEnable
            // m_hProjectile has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hProjectile;
            char m_hProjectile[0x4]; // 0xf78            
            // metadata: MNetworkEnable
            float m_flArrowSpeed; // 0xf7c            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flSnapAnglesBackTime; // 0xf80            
            // metadata: MNetworkEnable
            std::int32_t m_nBonusTechPower; // 0xf84            
            // metadata: MNetworkEnable
            bool m_bNeedsExplosion; // 0xf88            
            uint8_t _pad0f89[0x3]; // 0xf89
            // m_hOwl has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadel_GuidedArrow_OwlModel> m_hOwl;
            char m_hOwl[0x4]; // 0xf8c            
            uint8_t _pad0f90[0xc]; // 0xf90
            source2sdk::entity2::GameTime_t m_flCastTime; // 0xf9c            
            Vector m_vProjectileRemovedOrigin; // 0xfa0            
            QAngle m_angCasterAnglesAtCastTime; // 0xfac            
            float m_flTravelDistance; // 0xfb8            
            bool m_bInKillFlow; // 0xfbc            
            uint8_t _pad0fbd[0x3]; // 0xfbd
            float m_flProjectileTurnVel; // 0xfc0            
            uint8_t _pad0fc4[0x284];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_GuidedArrow because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_GuidedArrow) == 0x1248);
    };
};
