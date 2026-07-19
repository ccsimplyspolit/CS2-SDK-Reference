#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/BloodType.hpp"
#include "source2sdk/client/CNetworkTransmitComponent.hpp"
#include "source2sdk/client/CNetworkVelocityVector.hpp"
#include "source2sdk/client/DamageOptions_t.hpp"
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
        // Construct allowed
        #pragma pack(push, 1)
        class C_BaseEntity : public source2sdk::entity2::CEntityInstance
        {
        public:
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
            // metadata: MNotSaved
            std::int32_t m_iMaxHealth; // 0x348            
            std::int32_t m_iHealth; // 0x34c            
            // metadata: MNotSaved
            float m_flDamageAccumulator; // 0x350            
            // metadata: MNotSaved
            std::uint8_t m_lifeState; // 0x354            
            source2sdk::client::DamageOptions_t m_takedamage; // 0x355            
            // metadata: MNotSaved
            bool m_bTakesDamage; // 0x356            
            uint8_t _pad0357[0x1]; // 0x357
            // metadata: MNotSaved
            source2sdk::client::TakeDamageFlags_t m_nTakeDamageFlags; // 0x358            
            source2sdk::client::EntityPlatformTypes_t m_nPlatformType; // 0x360            
            // metadata: MNotSaved
            std::uint8_t m_ubInterpolationFrame; // 0x361            
            uint8_t _pad0362[0x2]; // 0x362
            // m_hSceneObjectController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hSceneObjectController;
            char m_hSceneObjectController[0x4]; // 0x364            
            // metadata: MNotSaved
            std::int32_t m_nNoInterpolationTick; // 0x368            
            // metadata: MNotSaved
            std::int32_t m_nVisibilityNoInterpolationTick; // 0x36c            
            // metadata: MNotSaved
            float m_flProxyRandomValue; // 0x370            
            // metadata: MNotSaved
            std::int32_t m_iEFlags; // 0x374            
            // metadata: MNotSaved
            std::uint8_t m_nWaterType; // 0x378            
            // metadata: MNotSaved
            bool m_bInterpolateEvenWithNoModel; // 0x379            
            // metadata: MNotSaved
            bool m_bPredictionEligible; // 0x37a            
            // metadata: MNotSaved
            bool m_bApplyLayerMatchIDToModel; // 0x37b            
            // metadata: MNotSaved
            CUtlStringToken m_tokLayerMatchID; // 0x37c            
            CUtlStringToken m_nSubclassID; // 0x380            
            uint8_t _pad0384[0xc]; // 0x384
            // metadata: MNotSaved
            std::int32_t m_nSimulationTick; // 0x390            
            // metadata: MNotSaved
            std::int32_t m_iCurrentThinkContext; // 0x394            
            // metadata: MNotSaved
            // m_aThinkFunctions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::thinkfunc_t> m_aThinkFunctions;
            char m_aThinkFunctions[0x18]; // 0x398            
            bool m_bDisabledContextThinks; // 0x3b0            
            uint8_t _pad03b1[0x3]; // 0x3b1
            // metadata: MNotSaved
            float m_flAnimTime; // 0x3b4            
            // metadata: MNotSaved
            float m_flSimulationTime; // 0x3b8            
            std::uint8_t m_nSceneObjectOverrideFlags; // 0x3bc            
            // metadata: MNotSaved
            bool m_bHasSuccessfullyInterpolated; // 0x3bd            
            // metadata: MNotSaved
            bool m_bHasAddedVarsToInterpolation; // 0x3be            
            // metadata: MNotSaved
            bool m_bRenderEvenWhenNotSuccessfullyInterpolated; // 0x3bf            
            // metadata: MNotSaved
            std::int32_t m_nInterpolationLatchDirtyFlags[2]; // 0x3c0            
            // metadata: MNotSaved
            std::uint16_t m_ListEntry[11]; // 0x3c8            
            uint8_t _pad03de[0x2]; // 0x3de
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flCreateTime; // 0x3e0            
            // metadata: MNotSaved
            std::uint16_t m_EntClientFlags; // 0x3e4            
            // metadata: MNotSaved
            bool m_bClientSideRagdoll; // 0x3e6            
            // metadata: MNotSaved
            std::uint8_t m_iTeamNum; // 0x3e7            
            std::uint32_t m_spawnflags; // 0x3e8            
            // metadata: MNotSaved
            source2sdk::entity2::GameTick_t m_nNextThinkTick; // 0x3ec            
            uint8_t _pad03f0[0x4]; // 0x3f0
            // metadata: MSaveBehavior
            std::uint32_t m_fFlags; // 0x3f4            
            // metadata: MNotSaved
            Vector m_vecAbsVelocity; // 0x3f8            
            // metadata: MNotSaved
            source2sdk::client::CNetworkVelocityVector m_vecServerVelocity; // 0x404            
            uint8_t _pad042c[0x4]; // 0x42c
            source2sdk::client::CNetworkVelocityVector m_vecVelocity; // 0x430            
            uint8_t _pad0458[0xb8]; // 0x458
            // metadata: MNotSaved
            // m_hEffectEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hEffectEntity;
            char m_hEffectEntity[0x4]; // 0x510            
            // m_hOwnerEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hOwnerEntity;
            char m_hOwnerEntity[0x4]; // 0x514            
            // metadata: MNotSaved
            source2sdk::client::MoveCollide_t m_MoveCollide; // 0x518            
            source2sdk::client::MoveType_t m_MoveType; // 0x519            
            source2sdk::client::MoveType_t m_nActualMoveType; // 0x51a            
            uint8_t _pad051b[0x1]; // 0x51b
            // metadata: MNotSaved
            float m_flWaterLevel; // 0x51c            
            // metadata: MNotSaved
            std::uint32_t m_fEffects; // 0x520            
            // metadata: MNotSaved
            // m_hGroundEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hGroundEntity;
            char m_hGroundEntity[0x4]; // 0x524            
            // metadata: MNotSaved
            std::int32_t m_nGroundBodyIndex; // 0x528            
            // metadata: MNotSaved
            float m_flFriction; // 0x52c            
            // metadata: MNotSaved
            float m_flElasticity; // 0x530            
            // metadata: MNotSaved
            float m_flGravityScale; // 0x534            
            // metadata: MNotSaved
            float m_flTimeScale; // 0x538            
            // metadata: MNotSaved
            bool m_bAnimatedEveryTick; // 0x53c            
            bool m_bGravityDisabled; // 0x53d            
            uint8_t _pad053e[0x2]; // 0x53e
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flNavIgnoreUntilTime; // 0x540            
            // metadata: MNotSaved
            std::uint16_t m_hThink; // 0x544            
            uint8_t _pad0546[0xa]; // 0x546
            // metadata: MNotSaved
            std::uint8_t m_fBBoxVisFlags; // 0x550            
            uint8_t _pad0551[0x3]; // 0x551
            float m_flActualGravityScale; // 0x554            
            bool m_bGravityActuallyDisabled; // 0x558            
            // metadata: MNotSaved
            bool m_bPredictable; // 0x559            
            bool m_bRenderWithViewModels; // 0x55a            
            uint8_t _pad055b[0x1]; // 0x55b
            // metadata: MNotSaved
            std::int32_t m_nFirstPredictableCommand; // 0x55c            
            // metadata: MNotSaved
            std::int32_t m_nLastPredictableCommand; // 0x560            
            // metadata: MNotSaved
            // m_hOldMoveParent has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hOldMoveParent;
            char m_hOldMoveParent[0x4]; // 0x564            
            // metadata: MNotSaved
            source2sdk::particleslib::CParticleProperty m_Particles; // 0x568            
            uint8_t _pad0590[0x8]; // 0x590
            QAngle m_vecAngVelocity; // 0x598            
            // metadata: MNotSaved
            std::int32_t m_DataChangeEventRef; // 0x5a4            
            // metadata: MNotSaved
            // m_dependencies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CEntityHandle> m_dependencies;
            char m_dependencies[0x18]; // 0x5a8            
            // metadata: MNotSaved
            std::int32_t m_nCreationTick; // 0x5c0            
            uint8_t _pad05c4[0xd]; // 0x5c4
            // metadata: MNotSaved
            bool m_bAnimTimeChanged; // 0x5d1            
            // metadata: MNotSaved
            bool m_bSimulationTimeChanged; // 0x5d2            
            uint8_t _pad05d3[0xd]; // 0x5d3
            // metadata: MNotSaved
            CUtlString m_sUniqueHammerID; // 0x5e0            
            source2sdk::client::BloodType m_nBloodType; // 0x5e8            
            uint8_t _pad05ec[0x4];
            
            // Datamap fields:
            // CUtlSymbolLarge m_iszPrivateVScripts; // 0x8
            // CUtlSymbolLarge subclass_name; // 0x7fffffff
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
