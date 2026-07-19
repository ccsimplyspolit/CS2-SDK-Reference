#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ragdoll_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseAnimGraph.hpp"
#include "source2sdk/server/CPropDataComponent.hpp"
#include "source2sdk/server/INavObstacle_NavObstacleType_t.hpp"
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
        struct CBasePlayerPawn;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct INavObstacle;
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
        // Size: 0xb20
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CRagdollProp : public source2sdk::server::CBaseAnimGraph
        {
        public:
            uint8_t _pad0960[0x10]; // 0x960
            source2sdk::server::CPropDataComponent m_CPropDataComponent; // 0x970            
            source2sdk::client::ragdoll_t m_ragdoll; // 0x9b0            
            bool m_bStartDisabled; // 0xa00            
            uint8_t _pad0a01[0x3]; // 0xa01
            float m_massScale; // 0xa04            
            float m_buoyancyScale; // 0xa08            
            uint8_t _pad0a0c[0x4]; // 0xa0c
            // m_ragEnabled has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<bool> m_ragEnabled;
            char m_ragEnabled[0x18]; // 0xa10            
            // m_ragPos has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<Vector> m_ragPos;
            char m_ragPos[0x18]; // 0xa28            
            // m_ragAngles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<QAngle> m_ragAngles;
            char m_ragAngles[0x18]; // 0xa40            
            std::uint32_t m_lastUpdateTickCount; // 0xa58            
            bool m_allAsleep; // 0xa5c            
            bool m_bFirstCollisionAfterLaunch; // 0xa5d            
            uint8_t _pad0a5e[0x2]; // 0xa5e
            source2sdk::server::INavObstacle_NavObstacleType_t m_nNavObstacleType; // 0xa60            
            bool m_bUpdateNavWhenMoving; // 0xa64            
            bool m_bForceNavObstacleCut; // 0xa65            
            bool m_bAttachedToReferenceFrame; // 0xa66            
            uint8_t _pad0a67[0x1]; // 0xa67
            // m_hDamageEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hDamageEntity;
            char m_hDamageEntity[0x4]; // 0xa68            
            // m_hKiller has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hKiller;
            char m_hKiller[0x4]; // 0xa6c            
            // m_hPhysicsAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePlayerPawn> m_hPhysicsAttacker;
            char m_hPhysicsAttacker[0x4]; // 0xa70            
            source2sdk::entity2::GameTime_t m_flLastPhysicsInfluenceTime; // 0xa74            
            source2sdk::entity2::GameTime_t m_flFadeOutStartTime; // 0xa78            
            float m_flFadeTime; // 0xa7c            
            VectorWS m_vecLastOrigin; // 0xa80            
            source2sdk::entity2::GameTime_t m_flAwakeTime; // 0xa8c            
            source2sdk::entity2::GameTime_t m_flLastOriginChangeTime; // 0xa90            
            uint8_t _pad0a94[0x4]; // 0xa94
            CUtlSymbolLarge m_strOriginClassName; // 0xa98            
            CUtlSymbolLarge m_strSourceClassName; // 0xaa0            
            bool m_bHasBeenPhysgunned; // 0xaa8            
            // metadata: MNotSaved
            bool m_bAllowStretch; // 0xaa9            
            uint8_t _pad0aaa[0x2]; // 0xaaa
            float m_flBlendWeight; // 0xaac            
            float m_flDefaultFadeScale; // 0xab0            
            uint8_t _pad0ab4[0x4]; // 0xab4
            // metadata: MNotSaved
            // m_ragdollMins has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<Vector> m_ragdollMins;
            char m_ragdollMins[0x18]; // 0xab8            
            // metadata: MNotSaved
            // m_ragdollMaxs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<Vector> m_ragdollMaxs;
            char m_ragdollMaxs[0x18]; // 0xad0            
            // metadata: MNotSaved
            bool m_bShouldDeleteActivationRecord; // 0xae8            
            uint8_t _pad0ae9[0x17]; // 0xae9
            // metadata: MNotSaved
            // m_vecNavObstacles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::INavObstacle*> m_vecNavObstacles;
            char m_vecNavObstacles[0x18]; // 0xb00            
            uint8_t _pad0b18[0x8];
            
            // Datamap fields:
            // void InputEnableMotion; // 0x0
            // void InputDisableMotion; // 0x0
            // void InputTurnOn; // 0x0
            // void InputTurnOff; // 0x0
            // float InputFadeAndRemove; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CRagdollProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CRagdollProp) == 0xb20);
    };
};
