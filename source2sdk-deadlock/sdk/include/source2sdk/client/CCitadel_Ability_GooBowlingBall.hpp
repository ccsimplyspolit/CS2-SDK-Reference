#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/EViscousBowlingBallState_t.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_CitadelViscousBall;
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
        // Size: 0x1b90
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bIsRolling"
        // static metadata: MNetworkVarNames "CHandle< CCitadelViscousBall > m_hBall"
        // static metadata: MNetworkVarNames "EViscousBowlingBallState_t m_eRollingState"
        // static metadata: MNetworkVarNames "GameTime_t m_flNextStateTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flNextWallCheck"
        // static metadata: MNetworkVarNames "GameTime_t m_flRollStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flWallExitTime"
        // static metadata: MNetworkVarNames "Vector m_vecWallExitVelocity"
        #pragma pack(push, 1)
        class CCitadel_Ability_GooBowlingBall : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad11d8[0x700]; // 0x11d8
            std::int32_t m_nAirJumpsLeft; // 0x18d8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // metadata: MNetworkChangeCallback "OnIsRollingChanged"
            bool m_bIsRolling; // 0x18dc            
            uint8_t _pad18dd[0x3]; // 0x18dd
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // m_hBall has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_CitadelViscousBall> m_hBall;
            char m_hBall[0x4]; // 0x18e0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::client::EViscousBowlingBallState_t m_eRollingState; // 0x18e4            
            uint8_t _pad18e5[0x3]; // 0x18e5
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flNextStateTime; // 0x18e8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flNextWallCheck; // 0x18ec            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flRollStartTime; // 0x18f0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flWallExitTime; // 0x18f4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vecWallExitVelocity; // 0x18f8            
            uint8_t _pad1904[0x8]; // 0x1904
            source2sdk::client::ParticleIndex_t m_nDirectionParticleIndex; // 0x190c            
            uint8_t _pad1910[0x280];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_GooBowlingBall because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_GooBowlingBall) == 0x1b90);
    };
};
