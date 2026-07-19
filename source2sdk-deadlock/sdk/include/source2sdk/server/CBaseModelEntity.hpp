#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CNetworkViewOffsetVector.hpp"
#include "source2sdk/client/HitGroup_t.hpp"
#include "source2sdk/client/RenderFx_t.hpp"
#include "source2sdk/client/RenderMode_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/CBaseModelEntity_OnDamageLevelChangedArgs_t.hpp"
#include "source2sdk/server/CCollisionProperty.hpp"
#include "source2sdk/server/CGlowProperty.hpp"
#include "source2sdk/server/CHitboxComponent.hpp"
#include "source2sdk/server/EntityRenderAttribute_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CChoreoComponent;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CDestructiblePartsComponent;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CRenderComponent;
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
        // Size: 0x780
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CRenderComponent::Storage_t m_CRenderComponent"
        // static metadata: MNetworkVarNames "CHitboxComponent::Storage_t m_CHitboxComponent"
        // static metadata: MNetworkVarNames "CChoreoComponent * m_pChoreoComponent"
        // static metadata: MNetworkVarNames "CDestructiblePartsComponent * m_pDestructiblePartsSystemComponent"
        // static metadata: MNetworkVarNames "RenderMode_t m_nRenderMode"
        // static metadata: MNetworkVarNames "RenderFx_t m_nRenderFX"
        // static metadata: MNetworkVarNames "Color m_clrRender"
        // static metadata: MNetworkVarNames "EntityRenderAttribute_t m_vecRenderAttributes"
        // static metadata: MNetworkVarNames "bool m_bRenderToCubemaps"
        // static metadata: MNetworkVarNames "bool m_bNoInterpolate"
        // static metadata: MNetworkVarNames "CCollisionProperty m_Collision"
        // static metadata: MNetworkVarNames "CGlowProperty m_Glow"
        // static metadata: MNetworkVarNames "float m_flGlowBackfaceMult"
        // static metadata: MNetworkVarNames "float32 m_fadeMinDist"
        // static metadata: MNetworkVarNames "float32 m_fadeMaxDist"
        // static metadata: MNetworkVarNames "float32 m_flFadeScale"
        // static metadata: MNetworkVarNames "float32 m_flShadowStrength"
        // static metadata: MNetworkVarNames "uint8 m_nObjectCulling"
        // static metadata: MNetworkVarNames "CNetworkViewOffsetVector m_vecViewOffset"
        // static metadata: MNetworkVarNames "uint32 m_bvDisabledHitGroups"
        #pragma pack(push, 1)
        class CBaseModelEntity : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNotSaved
            source2sdk::server::CRenderComponent* m_CRenderComponent; // 0x4a0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CHitboxComponent"
            // metadata: MNetworkAlias "CHitboxComponent"
            // metadata: MNetworkTypeAlias "CHitboxComponent"
            source2sdk::server::CHitboxComponent m_CHitboxComponent; // 0x4a8            
            // metadata: MNetworkEnable
            // metadata: MPtrAutoallocate
            // metadata: MNetworkChangePointerCallback
            source2sdk::server::CChoreoComponent* m_pChoreoComponent; // 0x4c0            
            source2sdk::client::HitGroup_t m_nDestructiblePartInitialStateDestructed0; // 0x4c8            
            source2sdk::client::HitGroup_t m_nDestructiblePartInitialStateDestructed1; // 0x4cc            
            source2sdk::client::HitGroup_t m_nDestructiblePartInitialStateDestructed2; // 0x4d0            
            source2sdk::client::HitGroup_t m_nDestructiblePartInitialStateDestructed3; // 0x4d4            
            source2sdk::client::HitGroup_t m_nDestructiblePartInitialStateDestructed4; // 0x4d8            
            std::int32_t m_nDestructiblePartInitialStateDestructed0_PartIndex; // 0x4dc            
            std::int32_t m_nDestructiblePartInitialStateDestructed1_PartIndex; // 0x4e0            
            std::int32_t m_nDestructiblePartInitialStateDestructed2_PartIndex; // 0x4e4            
            std::int32_t m_nDestructiblePartInitialStateDestructed3_PartIndex; // 0x4e8            
            std::int32_t m_nDestructiblePartInitialStateDestructed4_PartIndex; // 0x4ec            
            // metadata: MNetworkEnable
            // metadata: MPtrAutoallocate
            // metadata: MNetworkTypeAlias "CDestructiblePartsSystemComponent*"
            source2sdk::server::CDestructiblePartsComponent* m_pDestructiblePartsSystemComponent; // 0x4f0            
            // m_OnDestructibleHitGroupDamageLevelChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<source2sdk::server::CBaseModelEntity_OnDamageLevelChangedArgs_t> m_OnDestructibleHitGroupDamageLevelChanged;
            char m_OnDestructibleHitGroupDamageLevelChanged[0x28]; // 0x4f8            
            source2sdk::entity2::GameTime_t m_flDissolveStartTime; // 0x520            
            uint8_t _pad0524[0x4]; // 0x524
            source2sdk::entity2::CEntityIOOutput m_OnIgnite; // 0x528            
            // metadata: MNetworkEnable
            source2sdk::client::RenderMode_t m_nRenderMode; // 0x540            
            // metadata: MNetworkEnable
            source2sdk::client::RenderFx_t m_nRenderFX; // 0x541            
            uint8_t _pad0542[0x6]; // 0x542
            CUtlString m_szAddModifier; // 0x548            
            bool m_bAllowFadeInView; // 0x550            
            uint8_t _pad0551[0x1f]; // 0x551
            bool m_bHasCollision; // 0x570            
            uint8_t _pad0571[0x3]; // 0x571
            VectorWS m_vSupport; // 0x574            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnColorChanged"
            Color m_clrRender; // 0x580            
            uint8_t _pad0584[0x4]; // 0x584
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnRenderAttributesChanged"
            // m_vecRenderAttributes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::EntityRenderAttribute_t> m_vecRenderAttributes;
            char m_vecRenderAttributes[0x68]; // 0x588            
            // metadata: MNetworkEnable
            bool m_bRenderToCubemaps; // 0x5f0            
            // metadata: MNetworkEnable
            bool m_bNoInterpolate; // 0x5f1            
            uint8_t _pad05f2[0x6]; // 0x5f2
            // metadata: MNetworkEnable
            source2sdk::server::CCollisionProperty m_Collision; // 0x5f8            
            // metadata: MNetworkEnable
            source2sdk::server::CGlowProperty m_Glow; // 0x6b0            
            // metadata: MNetworkEnable
            float m_flGlowBackfaceMult; // 0x708            
            // metadata: MNetworkEnable
            float m_fadeMinDist; // 0x70c            
            // metadata: MNetworkEnable
            float m_fadeMaxDist; // 0x710            
            // metadata: MNetworkEnable
            float m_flFadeScale; // 0x714            
            // metadata: MNetworkEnable
            float m_flShadowStrength; // 0x718            
            // metadata: MNetworkEnable
            std::uint8_t m_nObjectCulling; // 0x71c            
            uint8_t _pad071d[0x3]; // 0x71d
            // m_bodyGroupChoices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<CGlobalSymbol,std::int32_t> m_bodyGroupChoices;
            char m_bodyGroupChoices[0x28]; // 0x720            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkUserGroup "Player"
            source2sdk::client::CNetworkViewOffsetVector m_vecViewOffset; // 0x748            
            uint8_t _pad0770[0x8]; // 0x770
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnDisabledHitgroupsChanged"
            // metadata: MSaveOpsForField
            std::uint32_t m_bvDisabledHitGroups[1]; // 0x778            
            uint8_t _pad077c[0x4];
            
            // Datamap fields:
            // void m_bvDisabledHitGroups; // 0x778
            // int32_t InputAlpha; // 0x0
            // Color InputColor; // 0x0
            // int32_t InputSkin; // 0x0
            // void CBaseModelEntityProcessSceneEventsThink; // 0x0
            // void CBaseModelEntitySUB_DissolveIfUncarried; // 0x0
            // void InputIgnite; // 0x0
            // float InputIgniteLifetime; // 0x0
            // int32_t InputIgniteNumHitboxFires; // 0x0
            // float InputIgniteHitboxFireScale; // 0x0
            // void InputExtinguish; // 0x0
            // CUtlString add_attribute; // 0x7fffffff
            // void CBaseModelEntitySUB_StartFadeOut; // 0x0
            // void CBaseModelEntitySUB_StartFadeOutInstant; // 0x0
            // void CBaseModelEntitySUB_FadeOut; // 0x0
            // void CBaseModelEntitySUB_StartShadowFadeOut; // 0x0
            // void CBaseModelEntitySUB_PerformShadowFadeOut; // 0x0
            // void CBaseModelEntitySUB_StartShadowFadeIn; // 0x0
            // void CBaseModelEntitySUB_PerformShadowFadeIn; // 0x0
            // void CBaseModelEntitySUB_StopShadowFade; // 0x0
            // Color rendercolor32; // 0x7fffffff
            // Color rendercolor; // 0x7fffffff
            // int32_t renderamt; // 0x7fffffff
            // Vector mins; // 0x7fffffff
            // Vector maxs; // 0x7fffffff
            // const char * skin; // 0x7fffffff
            // CUtlString bodygroups; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseModelEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseModelEntity) == 0x780);
    };
};
