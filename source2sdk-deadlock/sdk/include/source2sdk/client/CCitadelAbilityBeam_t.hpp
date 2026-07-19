#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_CitadelPlayerPawn;
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
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x10d0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_nActivateTime"
        #pragma pack(push, 1)
        struct CCitadelAbilityBeam_t
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_nActivateTime; // 0x8            
            uint8_t _pad000c[0x4]; // 0xc
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "qangle"
            // metadata: MNetworkChangeCallback "OnBeamAnglesChanged"
            QAngle m_angBeamAngles; // 0x10            
            uint8_t _pad001c[0x84]; // 0x1c
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            // metadata: MNetworkChangeCallback "OnBeamAimPosChanged"
            VectorWS m_vBeamAimPos; // 0xa0            
            uint8_t _pad00ac[0x84]; // 0xac
            bool m_bNeedsBeamReset; // 0x130            
            uint8_t _pad0131[0x3]; // 0x131
            // m_hShooter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hShooter;
            char m_hShooter[0x4]; // 0x134            
            // m_hPlayerShooter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_CitadelPlayerPawn> m_hPlayerShooter;
            char m_hPlayerShooter[0x4]; // 0x138            
            uint8_t _pad013c[0xf8c]; // 0x13c
            bool m_bEnforceLOSToShootPosition; // 0x10c8            
            uint8_t _pad10c9[0x7];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CCitadelAbilityBeam_t, m_nActivateTime) == 0x8);
        static_assert(offsetof(source2sdk::client::CCitadelAbilityBeam_t, m_angBeamAngles) == 0x10);
        static_assert(offsetof(source2sdk::client::CCitadelAbilityBeam_t, m_vBeamAimPos) == 0xa0);
        static_assert(offsetof(source2sdk::client::CCitadelAbilityBeam_t, m_bNeedsBeamReset) == 0x130);
        static_assert(offsetof(source2sdk::client::CCitadelAbilityBeam_t, m_hShooter) == 0x134);
        static_assert(offsetof(source2sdk::client::CCitadelAbilityBeam_t, m_hPlayerShooter) == 0x138);
        static_assert(offsetof(source2sdk::client::CCitadelAbilityBeam_t, m_bEnforceLOSToShootPosition) == 0x10c8);
        
        static_assert(sizeof(source2sdk::client::CCitadelAbilityBeam_t) == 0x10d0);
    };
};
