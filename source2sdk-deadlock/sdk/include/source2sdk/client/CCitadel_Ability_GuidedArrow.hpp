#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
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
        // Size: 0x14a0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "EHANDLE m_hProjectile"
        // static metadata: MNetworkVarNames "float m_flArrowSpeed"
        // static metadata: MNetworkVarNames "GameTime_t m_flSnapAnglesBackTime"
        // static metadata: MNetworkVarNames "int m_nBonusTechPower"
        // static metadata: MNetworkVarNames "bool m_bNeedsExplosion"
        #pragma pack(push, 1)
        class CCitadel_Ability_GuidedArrow : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad11d8[0x8]; // 0x11d8
            // metadata: MNetworkEnable
            // m_hProjectile has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hProjectile;
            char m_hProjectile[0x4]; // 0x11e0            
            // metadata: MNetworkEnable
            float m_flArrowSpeed; // 0x11e4            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flSnapAnglesBackTime; // 0x11e8            
            // metadata: MNetworkEnable
            std::int32_t m_nBonusTechPower; // 0x11ec            
            // metadata: MNetworkEnable
            bool m_bNeedsExplosion; // 0x11f0            
            uint8_t _pad11f1[0x3]; // 0x11f1
            source2sdk::entity2::GameTime_t m_flCastTime; // 0x11f4            
            Vector m_vProjectileRemovedOrigin; // 0x11f8            
            QAngle m_angCasterAnglesAtCastTime; // 0x1204            
            float m_flTravelDistance; // 0x1210            
            bool m_bInKillFlow; // 0x1214            
            uint8_t _pad1215[0x3]; // 0x1215
            float m_flProjectileTurnVel; // 0x1218            
            uint8_t _pad121c[0x284];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_GuidedArrow because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_GuidedArrow) == 0x14a0);
    };
};
