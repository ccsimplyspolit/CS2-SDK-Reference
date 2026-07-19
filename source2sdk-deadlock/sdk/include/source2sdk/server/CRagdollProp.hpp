#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ragdoll_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseAnimGraph.hpp"
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
        // Size: 0xbe0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_ragEnabled"
        // static metadata: MNetworkVarNames "Vector m_ragPos"
        // static metadata: MNetworkVarNames "QAngle m_ragAngles"
        // static metadata: MNetworkVarNames "float32 m_flBlendWeight"
        #pragma pack(push, 1)
        class CRagdollProp : public source2sdk::server::CBaseAnimGraph
        {
        public:
            uint8_t _pad0a90[0x10]; // 0xa90
            source2sdk::client::ragdoll_t m_ragdoll; // 0xaa0            
            bool m_bStartDisabled; // 0xaf0            
            uint8_t _pad0af1[0x7]; // 0xaf1
            // metadata: MNetworkEnable
            // m_ragEnabled has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<bool> m_ragEnabled;
            char m_ragEnabled[0x18]; // 0xaf8            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            // m_ragPos has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<Vector> m_ragPos;
            char m_ragPos[0x18]; // 0xb10            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "qangle"
            // metadata: MNetworkBitCount "13"
            // m_ragAngles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<QAngle> m_ragAngles;
            char m_ragAngles[0x18]; // 0xb28            
            std::uint32_t m_lastUpdateTickCount; // 0xb40            
            bool m_allAsleep; // 0xb44            
            bool m_bFirstCollisionAfterLaunch; // 0xb45            
            uint8_t _pad0b46[0x2]; // 0xb46
            // m_hDamageEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hDamageEntity;
            char m_hDamageEntity[0x4]; // 0xb48            
            // m_hKiller has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hKiller;
            char m_hKiller[0x4]; // 0xb4c            
            // m_hPhysicsAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePlayerPawn> m_hPhysicsAttacker;
            char m_hPhysicsAttacker[0x4]; // 0xb50            
            source2sdk::entity2::GameTime_t m_flLastPhysicsInfluenceTime; // 0xb54            
            source2sdk::entity2::GameTime_t m_flFadeOutStartTime; // 0xb58            
            float m_flFadeTime; // 0xb5c            
            VectorWS m_vecLastOrigin; // 0xb60            
            source2sdk::entity2::GameTime_t m_flAwakeTime; // 0xb6c            
            source2sdk::entity2::GameTime_t m_flLastOriginChangeTime; // 0xb70            
            uint8_t _pad0b74[0x4]; // 0xb74
            CUtlSymbolLarge m_strOriginClassName; // 0xb78            
            CUtlSymbolLarge m_strSourceClassName; // 0xb80            
            bool m_bHasBeenPhysgunned; // 0xb88            
            // metadata: MNotSaved
            bool m_bAllowStretch; // 0xb89            
            uint8_t _pad0b8a[0x2]; // 0xb8a
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "8"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "1,000000"
            // metadata: MNetworkEncodeFlags "1"
            float m_flBlendWeight; // 0xb8c            
            float m_flDefaultFadeScale; // 0xb90            
            uint8_t _pad0b94[0x4]; // 0xb94
            // metadata: MNotSaved
            // m_ragdollMins has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<Vector> m_ragdollMins;
            char m_ragdollMins[0x18]; // 0xb98            
            // metadata: MNotSaved
            // m_ragdollMaxs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<Vector> m_ragdollMaxs;
            char m_ragdollMaxs[0x18]; // 0xbb0            
            // metadata: MNotSaved
            bool m_bShouldDeleteActivationRecord; // 0xbc8            
            uint8_t _pad0bc9[0x17];
            
            // Datamap fields:
            // void InputEnableMotion; // 0x0
            // void InputDisableMotion; // 0x0
            // void InputTurnOn; // 0x0
            // void InputTurnOff; // 0x0
            // float InputFadeAndRemove; // 0x0
            // void CRagdollPropSetDebrisThink; // 0x0
            // void CRagdollPropClearFlagsThink; // 0x0
            // void CRagdollPropFadeOutThink; // 0x0
            // void CRagdollPropSettleThink; // 0x0
            // void CRagdollPropAttachedItemsThink; // 0x0
            // void m_ragdoll.list; // 0xaa0
            // void m_ragdoll.hierarchyJoints; // 0xab8
            // bool m_ragdoll.allowStretch; // 0xae8
            // float massScale; // 0x7fffffff
            // float buoyancyscale; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CRagdollProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CRagdollProp) == 0xbe0);
    };
};
