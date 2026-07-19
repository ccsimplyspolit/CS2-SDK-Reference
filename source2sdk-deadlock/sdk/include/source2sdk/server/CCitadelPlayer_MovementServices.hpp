#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CNetworkVelocityVector.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CPlayer_MovementServices_Humanoid.hpp"

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
        // Size: 0x2f8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CNetworkVelocityVector m_vPositionDeltaVelocity"
        // static metadata: MNetworkVarNames "bool m_bToggleDuckActive"
        // static metadata: MNetworkVarNames "bool m_bDucked"
        // static metadata: MNetworkVarNames "bool m_bInPortalEnvironment"
        #pragma pack(push, 1)
        class CCitadelPlayer_MovementServices : public source2sdk::server::CPlayer_MovementServices_Humanoid
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            // metadata: MNetworkPriority "32"
            source2sdk::client::CNetworkVelocityVector m_vPositionDeltaVelocity; // 0x278            
            uint8_t _pad02a0[0x8]; // 0x2a0
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            // metadata: MNetworkPriority "32"
            bool m_bToggleDuckActive; // 0x2a8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            bool m_bDucked; // 0x2a9            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            bool m_bInPortalEnvironment; // 0x2aa            
            uint8_t _pad02ab[0x1]; // 0x2ab
            Vector m_vecPogoVelocity; // 0x2ac            
            Vector m_vecSupport; // 0x2b8            
            bool m_bColliding; // 0x2c4            
            bool m_bLandedOnGround; // 0x2c5            
            bool m_bHasFreeCursor; // 0x2c6            
            uint8_t _pad02c7[0x1]; // 0x2c7
            float m_flTurnSpringSpeed; // 0x2c8            
            float m_flInputDirectionCommitment; // 0x2cc            
            std::int8_t m_nSuccessiveDirChanges; // 0x2d0            
            uint8_t _pad02d1[0x3]; // 0x2d1
            source2sdk::entity2::GameTime_t m_flLastDirChange; // 0x2d4            
            Vector2D m_vLastWishDir; // 0x2d8            
            uint8_t _pad02e0[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelPlayer_MovementServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelPlayer_MovementServices) == 0x2f8);
    };
};
