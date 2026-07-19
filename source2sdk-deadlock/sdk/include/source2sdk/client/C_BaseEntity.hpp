#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CNetworkTransmitComponent.hpp"
#include "source2sdk/client/CNetworkVelocityVector.hpp"
#include "source2sdk/client/EntityPlatformTypes_t.hpp"
#include "source2sdk/client/MoveCollide_t.hpp"
#include "source2sdk/client/MoveType_t.hpp"
#include "source2sdk/client/TakeDamageFlags_t.hpp"
#include "source2sdk/client/thinkfunc_t.hpp"
#include "source2sdk/entity2/CEntityInstance.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/particleslib/CParticleProperty.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CBodyComponent;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CCollisionProperty;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CGameSceneNode;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CModifierProperty;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CRenderComponent;
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
        // Size: 0x5f0
        // Has VTable
        // 
        // static metadata: MNetworkExcludeByName "m_bClientSideRagdoll"
        // static metadata: MNetworkExcludeByName "m_iMaxHealth"
        // static metadata: MNetworkExcludeByUserGroup "Player"
        // static metadata: MNetworkExcludeByUserGroup "Water"
        // static metadata: MNetworkExcludeByUserGroup "LocalPlayerExclusive"
        // static metadata: MNetworkExcludeByName "m_spawnflags"
        // static metadata: MNetworkExcludeByName "m_bTakesDamage"
        // static metadata: MNetworkExcludeByName "m_nTakeDamageFlags"
        // static metadata: MNetworkExcludeByName "m_vecAbsVelocity"
        // static metadata: MNetworkExcludeByName "m_flSpeed"
        // static metadata: MNetworkExcludeByName "m_flWaterLevel"
        // static metadata: MNetworkExcludeByName "m_vecBaseVelocity"
        // static metadata: MNetworkVarNames "CBodyComponent::Storage_t m_CBodyComponent"
        // static metadata: MNetworkVarNames "CModifierProperty * m_pModifierProp"
        // static metadata: MNetworkVarNames "int32 m_iMaxHealth"
        // static metadata: MNetworkVarNames "int32 m_iHealth"
        // static metadata: MNetworkVarNames "uint8 m_lifeState"
        // static metadata: MNetworkVarNames "bool m_bTakesDamage"
        // static metadata: MNetworkVarNames "TakeDamageFlags_t m_nTakeDamageFlags"
        // static metadata: MNetworkVarNames "EntityPlatformTypes_t m_nPlatformType"
        // static metadata: MNetworkVarNames "uint8 m_ubInterpolationFrame"
        // static metadata: MNetworkVarNames "EntitySubclassID_t m_nSubclassID"
        // static metadata: MNetworkVarNames "float32 m_flAnimTime"
        // static metadata: MNetworkVarNames "float32 m_flSimulationTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flCreateTime"
        // static metadata: MNetworkVarNames "float m_flSpeed"
        // static metadata: MNetworkVarNames "bool m_bClientSideRagdoll"
        // static metadata: MNetworkVarNames "uint8 m_iTeamNum"
        // static metadata: MNetworkVarNames "uint32 m_spawnflags"
        // static metadata: MNetworkVarNames "GameTick_t m_nNextThinkTick"
        // static metadata: MNetworkVarNames "uint32 m_fFlags"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hEffectEntity"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hOwnerEntity"
        // static metadata: MNetworkVarNames "MoveCollide_t m_MoveCollide"
        // static metadata: MNetworkVarNames "MoveType_t m_MoveType"
        // static metadata: MNetworkVarNames "float32 m_flWaterLevel"
        // static metadata: MNetworkVarNames "uint32 m_fEffects"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hGroundEntity"
        // static metadata: MNetworkVarNames "int m_nGroundBodyIndex"
        // static metadata: MNetworkVarNames "float32 m_flFriction"
        // static metadata: MNetworkVarNames "float32 m_flElasticity"
        // static metadata: MNetworkVarNames "float32 m_flGravityScale"
        // static metadata: MNetworkVarNames "float32 m_flTimeScale"
        // static metadata: MNetworkVarNames "bool m_bAnimatedEveryTick"
        // static metadata: MNetworkVarNames "bool m_bGravityDisabled"
        // static metadata: MNetworkVarNames "GameTime_t m_flNavIgnoreUntilTime"
        #pragma pack(push, 1)
        class C_BaseEntity : public source2sdk::entity2::CEntityInstance
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CBodyComponent"
            // metadata: MNetworkAlias "CBodyComponent"
            // metadata: MNetworkTypeAlias "CBodyComponent"
            // metadata: MNetworkPriority "48"
            source2sdk::client::CBodyComponent* m_CBodyComponent; // 0x30            
            // metadata: MNotSaved
            source2sdk::client::CNetworkTransmitComponent m_NetworkTransmitComponent; // 0x38            
            uint8_t _pad0208[0x120]; // 0x208
            // metadata: MNotSaved
            source2sdk::entity2::GameTick_t m_nLastThinkTick; // 0x328            
            uint8_t _pad032c[0x4]; // 0x32c
            // metadata: MNotSaved
            source2sdk::client::CGameSceneNode* m_pGameSceneNode; // 0x330            
            // metadata: MNotSaved
            source2sdk::client::CRenderComponent* m_pRenderComponent; // 0x338            
            // metadata: MNotSaved
            source2sdk::client::CCollisionProperty* m_pCollision; // 0x340            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangePointerCallback
            source2sdk::client::CModifierProperty* m_pModifierProp; // 0x348            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            // metadata: MNotSaved
            std::int32_t m_iMaxHealth; // 0x350            
            // metadata: MNetworkEnable
            // metadata: MNetworkSerializer "ClampHealth"
            // metadata: MNetworkUserGroup "Player"
            // metadata: MNetworkPriority "32"
            std::int32_t m_iHealth; // 0x354            
            // metadata: MNotSaved
            float m_flDamageAccumulator; // 0x358            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "Player"
            // metadata: MNetworkPriority "32"
            // metadata: MNotSaved
            std::uint8_t m_lifeState; // 0x35c            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            bool m_bTakesDamage; // 0x35d            
            uint8_t _pad035e[0x2]; // 0x35e
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            source2sdk::client::TakeDamageFlags_t m_nTakeDamageFlags; // 0x360            
            // metadata: MNetworkEnable
            source2sdk::client::EntityPlatformTypes_t m_nPlatformType; // 0x368            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnInterpolationFrameChanged"
            // metadata: MNotSaved
            std::uint8_t m_ubInterpolationFrame; // 0x369            
            uint8_t _pad036a[0x2]; // 0x36a
            // m_hSceneObjectController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hSceneObjectController;
            char m_hSceneObjectController[0x4]; // 0x36c            
            // metadata: MNotSaved
            std::int32_t m_nNoInterpolationTick; // 0x370            
            // metadata: MNotSaved
            std::int32_t m_nVisibilityNoInterpolationTick; // 0x374            
            // metadata: MNotSaved
            float m_flProxyRandomValue; // 0x378            
            // metadata: MNotSaved
            std::int32_t m_iEFlags; // 0x37c            
            // metadata: MNotSaved
            std::uint8_t m_nWaterType; // 0x380            
            // metadata: MNotSaved
            bool m_bInterpolateEvenWithNoModel; // 0x381            
            // metadata: MNotSaved
            bool m_bPredictionEligible; // 0x382            
            // metadata: MNotSaved
            bool m_bApplyLayerMatchIDToModel; // 0x383            
            // metadata: MNotSaved
            CUtlStringToken m_tokLayerMatchID; // 0x384            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnSubclassIDChanged"
            CUtlStringToken m_nSubclassID; // 0x388            
            uint8_t _pad038c[0xc]; // 0x38c
            // metadata: MNotSaved
            std::int32_t m_nSimulationTick; // 0x398            
            // metadata: MNotSaved
            std::int32_t m_iCurrentThinkContext; // 0x39c            
            // metadata: MNotSaved
            // m_aThinkFunctions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::thinkfunc_t> m_aThinkFunctions;
            char m_aThinkFunctions[0x18]; // 0x3a0            
            bool m_bDisabledContextThinks; // 0x3b8            
            uint8_t _pad03b9[0x3]; // 0x3b9
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "0"
            // metadata: MNetworkSerializer "animTimeSerializer"
            // metadata: MNotSaved
            float m_flAnimTime; // 0x3bc            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "1"
            // metadata: MNetworkSerializer "simulationTimeSerializer"
            // metadata: MNetworkChangeCallback "OnSimulationTimeChanged"
            // metadata: MNotSaved
            float m_flSimulationTime; // 0x3c0            
            std::uint8_t m_nSceneObjectOverrideFlags; // 0x3c4            
            // metadata: MNotSaved
            bool m_bHasSuccessfullyInterpolated; // 0x3c5            
            // metadata: MNotSaved
            bool m_bHasAddedVarsToInterpolation; // 0x3c6            
            // metadata: MNotSaved
            bool m_bRenderEvenWhenNotSuccessfullyInterpolated; // 0x3c7            
            // metadata: MNotSaved
            std::int32_t m_nInterpolationLatchDirtyFlags[2]; // 0x3c8            
            // metadata: MNotSaved
            std::uint16_t m_ListEntry[11]; // 0x3d0            
            uint8_t _pad03e6[0x2]; // 0x3e6
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flCreateTime; // 0x3e8            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            float m_flSpeed; // 0x3ec            
            // metadata: MNotSaved
            std::uint16_t m_EntClientFlags; // 0x3f0            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            bool m_bClientSideRagdoll; // 0x3f2            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnNetVarTeamNumChanged"
            // metadata: MNotSaved
            std::uint8_t m_iTeamNum; // 0x3f3            
            // metadata: MNetworkEnable
            std::uint32_t m_spawnflags; // 0x3f4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            // metadata: MNotSaved
            source2sdk::entity2::GameTick_t m_nNextThinkTick; // 0x3f8            
            uint8_t _pad03fc[0x4]; // 0x3fc
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkUserGroup "Player"
            // metadata: MNetworkChangeCallback "OnFlagsChanged"
            std::uint32_t m_fFlags; // 0x400            
            // metadata: MNotSaved
            Vector m_vecAbsVelocity; // 0x404            
            // metadata: MNetworkEnable
            // metadata: MNetworkAlias "m_vecVelocity"
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            // metadata: MNetworkChangeCallback "OnServerVelocityChanged"
            // metadata: MNetworkPriority "32"
            // metadata: MNotSaved
            source2sdk::client::CNetworkVelocityVector m_vecServerVelocity; // 0x410            
            source2sdk::client::CNetworkVelocityVector m_vecVelocity; // 0x438            
            uint8_t _pad0460[0xb8]; // 0x460
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            // m_hEffectEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hEffectEntity;
            char m_hEffectEntity[0x4]; // 0x518            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // m_hOwnerEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hOwnerEntity;
            char m_hOwnerEntity[0x4]; // 0x51c            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            source2sdk::client::MoveCollide_t m_MoveCollide; // 0x520            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnMoveTypeChanged"
            source2sdk::client::MoveType_t m_MoveType; // 0x521            
            source2sdk::client::MoveType_t m_nActualMoveType; // 0x522            
            uint8_t _pad0523[0x1]; // 0x523
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "Water"
            // metadata: MNetworkChangeCallback "OnWaterLevelChangeNetworked"
            // metadata: MNetworkBitCount "8"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "1,000000"
            // metadata: MNetworkEncodeFlags "8"
            // metadata: MNotSaved
            float m_flWaterLevel; // 0x524            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnEffectsChanged"
            // metadata: MNotSaved
            std::uint32_t m_fEffects; // 0x528            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkUserGroup "Player"
            // metadata: MNotSaved
            // m_hGroundEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hGroundEntity;
            char m_hGroundEntity[0x4]; // 0x52c            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkUserGroup "Player"
            // metadata: MNotSaved
            std::int32_t m_nGroundBodyIndex; // 0x530            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "8"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "4,000000"
            // metadata: MNetworkEncodeFlags "1"
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            // metadata: MNotSaved
            float m_flFriction; // 0x534            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            // metadata: MNotSaved
            float m_flElasticity; // 0x538            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnGravityUpdated"
            // metadata: MNotSaved
            float m_flGravityScale; // 0x53c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            // metadata: MNotSaved
            float m_flTimeScale; // 0x540            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnInterpolationAmountChanged"
            // metadata: MNotSaved
            bool m_bAnimatedEveryTick; // 0x544            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnGravityUpdated"
            bool m_bGravityDisabled; // 0x545            
            uint8_t _pad0546[0x2]; // 0x546
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnNavIgnoreChanged"
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flNavIgnoreUntilTime; // 0x548            
            // metadata: MNotSaved
            std::uint16_t m_hThink; // 0x54c            
            uint8_t _pad054e[0xa]; // 0x54e
            // metadata: MNotSaved
            std::uint8_t m_fBBoxVisFlags; // 0x558            
            uint8_t _pad0559[0x3]; // 0x559
            float m_flActualGravityScale; // 0x55c            
            bool m_bGravityActuallyDisabled; // 0x560            
            // metadata: MNotSaved
            bool m_bPredictable; // 0x561            
            bool m_bRenderWithViewModels; // 0x562            
            uint8_t _pad0563[0x1]; // 0x563
            // metadata: MNotSaved
            std::int32_t m_nFirstPredictableCommand; // 0x564            
            // metadata: MNotSaved
            std::int32_t m_nLastPredictableCommand; // 0x568            
            // metadata: MNotSaved
            // m_hOldMoveParent has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hOldMoveParent;
            char m_hOldMoveParent[0x4]; // 0x56c            
            // metadata: MNotSaved
            source2sdk::particleslib::CParticleProperty m_Particles; // 0x570            
            uint8_t _pad0598[0x8]; // 0x598
            QAngle m_vecAngVelocity; // 0x5a0            
            // metadata: MNotSaved
            std::int32_t m_DataChangeEventRef; // 0x5ac            
            // metadata: MNotSaved
            // m_dependencies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CEntityHandle> m_dependencies;
            char m_dependencies[0x18]; // 0x5b0            
            // metadata: MNotSaved
            std::int32_t m_nCreationTick; // 0x5c8            
            uint8_t _pad05cc[0xd]; // 0x5cc
            // metadata: MNotSaved
            bool m_bAnimTimeChanged; // 0x5d9            
            // metadata: MNotSaved
            bool m_bSimulationTimeChanged; // 0x5da            
            uint8_t _pad05db[0xd]; // 0x5db
            // metadata: MNotSaved
            CUtlString m_sUniqueHammerID; // 0x5e8            
            
            // Datamap fields:
            // CUtlSymbolLarge m_iszPrivateVScripts; // 0x8
            // void m_CScriptComponent; // 0x28
            // CUtlSymbolLarge subclass_name; // 0x7fffffff
            // void m_pSubclassVData; // 0x390
            // QAngle angles; // 0x7fffffff
            // Vector origin; // 0x7fffffff
            // CStrongHandle< InfoForResourceTypeCModel > model; // 0x7fffffff
            // CUtlString ownername; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BaseEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BaseEntity) == 0x5f0);
    };
};
