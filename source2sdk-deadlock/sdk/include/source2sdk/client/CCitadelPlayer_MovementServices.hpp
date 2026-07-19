#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CNetworkVelocityVector.hpp"
#include "source2sdk/client/CPlayer_MovementServices_Humanoid.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x2f0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CNetworkVelocityVector m_vPositionDeltaVelocity"
        // static metadata: MNetworkVarNames "bool m_bToggleDuckActive"
        // static metadata: MNetworkVarNames "bool m_bDucked"
        // static metadata: MNetworkVarNames "bool m_bInPortalEnvironment"
        #pragma pack(push, 1)
        class CCitadelPlayer_MovementServices : public source2sdk::client::CPlayer_MovementServices_Humanoid
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            // metadata: MNetworkPriority "32"
            source2sdk::client::CNetworkVelocityVector m_vPositionDeltaVelocity; // 0x270            
            uint8_t _pad0298[0x8]; // 0x298
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            // metadata: MNetworkPriority "32"
            bool m_bToggleDuckActive; // 0x2a0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            bool m_bDucked; // 0x2a1            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            bool m_bInPortalEnvironment; // 0x2a2            
            uint8_t _pad02a3[0x1]; // 0x2a3
            Vector m_vecPogoVelocity; // 0x2a4            
            Vector m_vecSupport; // 0x2b0            
            bool m_bColliding; // 0x2bc            
            bool m_bLandedOnGround; // 0x2bd            
            bool m_bHasFreeCursor; // 0x2be            
            uint8_t _pad02bf[0x1]; // 0x2bf
            float m_flTurnSpringSpeed; // 0x2c0            
            float m_flInputDirectionCommitment; // 0x2c4            
            std::int8_t m_nSuccessiveDirChanges; // 0x2c8            
            uint8_t _pad02c9[0x3]; // 0x2c9
            source2sdk::entity2::GameTime_t m_flLastDirChange; // 0x2cc            
            Vector2D m_vLastWishDir; // 0x2d0            
            uint8_t _pad02d8[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelPlayer_MovementServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelPlayer_MovementServices) == 0x2f0);
    };
};
