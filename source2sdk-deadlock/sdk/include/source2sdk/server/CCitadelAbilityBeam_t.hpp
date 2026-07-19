#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
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
        struct CCitadelPlayerPawn;
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
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0xfc0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_nActivateTime"
        // static metadata: MNetworkVarNames "QAngle m_angBeamAngles"
        // static metadata: MNetworkVarNames "VectorWS m_vBeamAimPos"
        #pragma pack(push, 1)
        struct CCitadelAbilityBeam_t
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_nActivateTime; // 0x8            
            // metadata: MNetworkEnable
            QAngle m_angBeamAngles; // 0xc            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            // metadata: MNetworkPriority "32"
            VectorWS m_vBeamAimPos; // 0x18            
            // m_hShooter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hShooter;
            char m_hShooter[0x4]; // 0x24            
            // m_hPlayerShooter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadelPlayerPawn> m_hPlayerShooter;
            char m_hPlayerShooter[0x4]; // 0x28            
            uint8_t _pad002c[0xf8c]; // 0x2c
            bool m_bEnforceLOSToShootPosition; // 0xfb8            
            uint8_t _pad0fb9[0x7];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CCitadelAbilityBeam_t, m_nActivateTime) == 0x8);
        static_assert(offsetof(source2sdk::server::CCitadelAbilityBeam_t, m_angBeamAngles) == 0xc);
        static_assert(offsetof(source2sdk::server::CCitadelAbilityBeam_t, m_vBeamAimPos) == 0x18);
        static_assert(offsetof(source2sdk::server::CCitadelAbilityBeam_t, m_hShooter) == 0x24);
        static_assert(offsetof(source2sdk::server::CCitadelAbilityBeam_t, m_hPlayerShooter) == 0x28);
        static_assert(offsetof(source2sdk::server::CCitadelAbilityBeam_t, m_bEnforceLOSToShootPosition) == 0xfb8);
        
        static_assert(sizeof(source2sdk::server::CCitadelAbilityBeam_t) == 0xfc0);
    };
};
