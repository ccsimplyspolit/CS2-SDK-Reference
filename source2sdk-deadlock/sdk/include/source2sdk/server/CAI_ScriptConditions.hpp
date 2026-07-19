#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/NPC_STATE.hpp"
#include "source2sdk/client/ThreeState_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CAI_ProxTester.hpp"
#include "source2sdk/server/CAI_ScriptConditionsElement.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
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
        // Size: 0x588
        // Has VTable
        #pragma pack(push, 1)
        class CAI_ScriptConditions : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad04a0[0x8]; // 0x4a0
            source2sdk::entity2::CEntityIOOutput m_OnConditionsSatisfied; // 0x4a8            
            source2sdk::entity2::CEntityIOOutput m_OnConditionsTimeout; // 0x4c0            
            source2sdk::entity2::CEntityIOOutput m_NoValidActors; // 0x4d8            
            bool m_fDisabled; // 0x4f0            
            bool m_bLeaveAsleep; // 0x4f1            
            uint8_t _pad04f2[0x2]; // 0x4f2
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x4f4            
            float m_flRequiredDuration; // 0x4f8            
            source2sdk::client::NPC_STATE m_fMinState; // 0x4fc            
            source2sdk::client::NPC_STATE m_fMaxState; // 0x500            
            source2sdk::client::ThreeState_t m_fScriptStatus; // 0x504            
            source2sdk::client::ThreeState_t m_fActorSeePlayer; // 0x508            
            uint8_t _pad050c[0x4]; // 0x50c
            CUtlSymbolLarge m_Actor; // 0x510            
            float m_flPlayerActorProximity; // 0x518            
            source2sdk::server::CAI_ProxTester m_PlayerActorProxTester; // 0x51c            
            float m_flPlayerActorFOV; // 0x524            
            bool m_bPlayerActorFOVTrueCone; // 0x528            
            uint8_t _pad0529[0x3]; // 0x529
            source2sdk::client::ThreeState_t m_fPlayerActorLOS; // 0x52c            
            source2sdk::client::ThreeState_t m_fActorSeeTarget; // 0x530            
            float m_flActorTargetProximity; // 0x534            
            source2sdk::server::CAI_ProxTester m_ActorTargetProxTester; // 0x538            
            float m_flPlayerTargetProximity; // 0x540            
            source2sdk::server::CAI_ProxTester m_PlayerTargetProxTester; // 0x544            
            float m_flPlayerTargetFOV; // 0x54c            
            bool m_bPlayerTargetFOVTrueCone; // 0x550            
            uint8_t _pad0551[0x3]; // 0x551
            source2sdk::client::ThreeState_t m_fPlayerTargetLOS; // 0x554            
            source2sdk::client::ThreeState_t m_fPlayerBlockingActor; // 0x558            
            source2sdk::client::ThreeState_t m_fActorInPVS; // 0x55c            
            float m_flMinTimeout; // 0x560            
            float m_flMaxTimeout; // 0x564            
            source2sdk::client::ThreeState_t m_fActorInVehicle; // 0x568            
            source2sdk::client::ThreeState_t m_fPlayerInVehicle; // 0x56c            
            // m_ElementList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CAI_ScriptConditionsElement> m_ElementList;
            char m_ElementList[0x18]; // 0x570            
            
            // Datamap fields:
            // void CAI_ScriptConditionsEvaluationThink; // 0x0
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_ScriptConditions because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_ScriptConditions) == 0x588);
    };
};
