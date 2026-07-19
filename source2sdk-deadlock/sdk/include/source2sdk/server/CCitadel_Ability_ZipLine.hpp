#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CNetworkVelocityVector.hpp"
#include "source2sdk/client/EAttachState_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"
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
        // Size: 0x1a58
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_flTimeStartZipping"
        // static metadata: MNetworkVarNames "GameTime_t m_flTimeForKnockdownProtection"
        // static metadata: MNetworkVarNames "GameTime_t m_flTimeStopZipping"
        // static metadata: MNetworkVarNames "float m_flCasterSpeed"
        // static metadata: MNetworkVarNames "CNetworkVelocityVector m_vecInitialVel"
        // static metadata: MNetworkVarNames "Vector m_vecAttachPoint"
        // static metadata: MNetworkVarNames "EHANDLE m_pPrevNode"
        // static metadata: MNetworkVarNames "EHANDLE m_pNextNode"
        // static metadata: MNetworkVarNames "GameTime_t m_flTimeEnterState"
        // static metadata: MNetworkVarNames "GameTime_t m_flLatchTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flDamagedTime"
        // static metadata: MNetworkVarNames "EAttachState_t m_eAttachState"
        // static metadata: MNetworkVarNames "int m_iAttachedZipLineLane"
        // static metadata: MNetworkVarNames "bool m_bDroppedFromZipline"
        // static metadata: MNetworkVarNames "Vector m_vAttachZipLineOffset"
        // static metadata: MNetworkVarNames "float m_flZiplineAirDrag"
        // static metadata: MNetworkVarNames "Vector m_vPendulumVelocity"
        // static metadata: MNetworkVarNames "Vector m_vPendulumPosition"
        // static metadata: MNetworkVarNames "Vector m_vVelocityHistory1"
        // static metadata: MNetworkVarNames "Vector m_vVelocityHistory2"
        // static metadata: MNetworkVarNames "int m_iDesiredLane"
        #pragma pack(push, 1)
        class CCitadel_Ability_ZipLine : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f70[0xa00]; // 0xf70
            source2sdk::entity2::GameTime_t m_flActivatePressTime; // 0x1970            
            bool m_bThinking; // 0x1974            
            bool m_bMoveCollidedPushUp; // 0x1975            
            bool m_bNoDelayNeeded; // 0x1976            
            bool m_bMouseWheelBind; // 0x1977            
            source2sdk::client::EAttachState_t m_eCommittedAttachState; // 0x1978            
            uint8_t _pad197c[0x2c]; // 0x197c
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTimeStartZipping; // 0x19a8            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTimeForKnockdownProtection; // 0x19ac            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flTimeStopZipping; // 0x19b0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flCasterSpeed; // 0x19b4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::client::CNetworkVelocityVector m_vecInitialVel; // 0x19b8            
            uint8_t _pad19e0[0x8]; // 0x19e0
            // metadata: MNetworkEnable
            Vector m_vecAttachPoint; // 0x19e8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // m_pPrevNode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_pPrevNode;
            char m_pPrevNode[0x4]; // 0x19f4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // m_pNextNode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_pNextNode;
            char m_pNextNode[0x4]; // 0x19f8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flTimeEnterState; // 0x19fc            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLatchTime; // 0x1a00            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flDamagedTime; // 0x1a04            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "AttachStateChanged"
            source2sdk::client::EAttachState_t m_eAttachState; // 0x1a08            
            // metadata: MNetworkEnable
            std::int32_t m_iAttachedZipLineLane; // 0x1a0c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bDroppedFromZipline; // 0x1a10            
            source2sdk::modellib::AttachmentHandle_t m_hAttachZipLine; // 0x1a11            
            uint8_t _pad1a12[0x2]; // 0x1a12
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vAttachZipLineOffset; // 0x1a14            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flZiplineAirDrag; // 0x1a20            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vPendulumVelocity; // 0x1a24            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vPendulumPosition; // 0x1a30            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vVelocityHistory1; // 0x1a3c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vVelocityHistory2; // 0x1a48            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // metadata: MNetworkChangeCallback "DesiredLaneChanged"
            std::int32_t m_iDesiredLane; // 0x1a54            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_ZipLine because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_ZipLine) == 0x1a58);
    };
};
