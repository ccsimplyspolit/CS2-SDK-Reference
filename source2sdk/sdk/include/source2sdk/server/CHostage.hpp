#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CHostageExpresserShim.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
#include "source2sdk/server/EntitySpottedState_t.hpp"
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
        struct CCSPlayerPawn;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CCSPlayerPawnBase;
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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x2cc0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CHostage : public source2sdk::server::CHostageExpresserShim
        {
        public:
            uint8_t _pad0a40[0x18]; // 0xa40
            source2sdk::entity2::CEntityIOOutput m_OnHostageBeginGrab; // 0xa58            
            source2sdk::entity2::CEntityIOOutput m_OnFirstPickedUp; // 0xa70            
            source2sdk::entity2::CEntityIOOutput m_OnDroppedNotRescued; // 0xa88            
            source2sdk::entity2::CEntityIOOutput m_OnRescued; // 0xaa0            
            source2sdk::server::EntitySpottedState_t m_entitySpottedState; // 0xab8            
            std::int32_t m_nSpotRules; // 0xad0            
            std::uint32_t m_uiHostageSpawnExclusionGroupMask; // 0xad4            
            std::uint32_t m_nHostageSpawnRandomFactor; // 0xad8            
            bool m_bRemove; // 0xadc            
            uint8_t _pad0add[0x3]; // 0xadd
            Vector m_vel; // 0xae0            
            bool m_isRescued; // 0xaec            
            bool m_jumpedThisFrame; // 0xaed            
            uint8_t _pad0aee[0x2]; // 0xaee
            std::int32_t m_nHostageState; // 0xaf0            
            // m_leader has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_leader;
            char m_leader[0x4]; // 0xaf4            
            // m_lastLeader has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCSPlayerPawnBase> m_lastLeader;
            char m_lastLeader[0x4]; // 0xaf8            
            uint8_t _pad0afc[0x4]; // 0xafc
            source2sdk::server::CountdownTimer m_reuseTimer; // 0xb00            
            bool m_hasBeenUsed; // 0xb18            
            uint8_t _pad0b19[0x3]; // 0xb19
            Vector m_accel; // 0xb1c            
            bool m_isRunning; // 0xb28            
            bool m_isCrouching; // 0xb29            
            uint8_t _pad0b2a[0x6]; // 0xb2a
            source2sdk::server::CountdownTimer m_jumpTimer; // 0xb30            
            bool m_isWaitingForLeader; // 0xb48            
            uint8_t _pad0b49[0x200f]; // 0xb49
            source2sdk::server::CountdownTimer m_repathTimer; // 0x2b58            
            source2sdk::server::CountdownTimer m_inhibitDoorTimer; // 0x2b70            
            uint8_t _pad2b88[0x78]; // 0x2b88
            source2sdk::server::CountdownTimer m_inhibitObstacleAvoidanceTimer; // 0x2c00            
            uint8_t _pad2c18[0x8]; // 0x2c18
            source2sdk::server::CountdownTimer m_wiggleTimer; // 0x2c20            
            uint8_t _pad2c38[0x4]; // 0x2c38
            bool m_isAdjusted; // 0x2c3c            
            bool m_bHandsHaveBeenCut; // 0x2c3d            
            uint8_t _pad2c3e[0x2]; // 0x2c3e
            // m_hHostageGrabber has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCSPlayerPawn> m_hHostageGrabber;
            char m_hHostageGrabber[0x4]; // 0x2c40            
            source2sdk::entity2::GameTime_t m_fLastGrabTime; // 0x2c44            
            VectorWS m_vecPositionWhenStartedDroppingToGround; // 0x2c48            
            VectorWS m_vecGrabbedPos; // 0x2c54            
            source2sdk::entity2::GameTime_t m_flRescueStartTime; // 0x2c60            
            source2sdk::entity2::GameTime_t m_flGrabSuccessTime; // 0x2c64            
            source2sdk::entity2::GameTime_t m_flDropStartTime; // 0x2c68            
            std::int32_t m_nApproachRewardPayouts; // 0x2c6c            
            std::int32_t m_nPickupEventCount; // 0x2c70            
            VectorWS m_vecSpawnGroundPos; // 0x2c74            
            uint8_t _pad2c80[0x2c]; // 0x2c80
            VectorWS m_vecHostageResetPosition; // 0x2cac            
            uint8_t _pad2cb8[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CHostage because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CHostage) == 0x2cc0);
    };
};
