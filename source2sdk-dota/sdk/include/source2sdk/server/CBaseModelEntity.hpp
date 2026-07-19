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
        // Size: 0x778
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CBaseModelEntity : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNotSaved
            source2sdk::server::CRenderComponent* m_CRenderComponent; // 0x498            
            source2sdk::server::CHitboxComponent m_CHitboxComponent; // 0x4a0            
            source2sdk::server::CChoreoComponent* m_pChoreoComponent; // 0x4b8            
            source2sdk::client::HitGroup_t m_nDestructiblePartInitialStateDestructed0; // 0x4c0            
            source2sdk::client::HitGroup_t m_nDestructiblePartInitialStateDestructed1; // 0x4c4            
            source2sdk::client::HitGroup_t m_nDestructiblePartInitialStateDestructed2; // 0x4c8            
            source2sdk::client::HitGroup_t m_nDestructiblePartInitialStateDestructed3; // 0x4cc            
            source2sdk::client::HitGroup_t m_nDestructiblePartInitialStateDestructed4; // 0x4d0            
            std::int32_t m_nDestructiblePartInitialStateDestructed0_PartIndex; // 0x4d4            
            std::int32_t m_nDestructiblePartInitialStateDestructed1_PartIndex; // 0x4d8            
            std::int32_t m_nDestructiblePartInitialStateDestructed2_PartIndex; // 0x4dc            
            std::int32_t m_nDestructiblePartInitialStateDestructed3_PartIndex; // 0x4e0            
            std::int32_t m_nDestructiblePartInitialStateDestructed4_PartIndex; // 0x4e4            
            bool m_bDestructiblePartInitialStateDestructed0_GenerateBreakpieces; // 0x4e8            
            bool m_bDestructiblePartInitialStateDestructed1_GenerateBreakpieces; // 0x4e9            
            bool m_bDestructiblePartInitialStateDestructed2_GenerateBreakpieces; // 0x4ea            
            bool m_bDestructiblePartInitialStateDestructed3_GenerateBreakpieces; // 0x4eb            
            bool m_bDestructiblePartInitialStateDestructed4_GenerateBreakpieces; // 0x4ec            
            uint8_t _pad04ed[0x3]; // 0x4ed
            source2sdk::server::CDestructiblePartsComponent* m_pDestructiblePartsSystemComponent; // 0x4f0            
            // m_OnDestructibleHitGroupDamageLevelChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<source2sdk::server::CBaseModelEntity_OnDamageLevelChangedArgs_t> m_OnDestructibleHitGroupDamageLevelChanged;
            char m_OnDestructibleHitGroupDamageLevelChanged[0x28]; // 0x4f8            
            source2sdk::entity2::GameTime_t m_flDissolveStartTime; // 0x520            
            uint8_t _pad0524[0x4]; // 0x524
            source2sdk::entity2::CEntityIOOutput m_OnIgnite; // 0x528            
            std::int32_t m_iViewerID; // 0x540            
            std::int32_t m_iTeamVisibilityBitmask; // 0x544            
            source2sdk::client::RenderMode_t m_nRenderMode; // 0x548            
            bool m_bVisibilityDirtyFlag; // 0x549            
            std::int16_t m_iFOWTempViewerID[10]; // 0x54a            
            source2sdk::client::RenderFx_t m_nRenderFX; // 0x55e            
            bool m_bAllowFadeInView; // 0x55f            
            uint8_t _pad0560[0x18]; // 0x560
            Color m_clrRender; // 0x578            
            uint8_t _pad057c[0x4]; // 0x57c
            // m_vecRenderAttributes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::EntityRenderAttribute_t> m_vecRenderAttributes;
            char m_vecRenderAttributes[0x68]; // 0x580            
            bool m_bRenderToCubemaps; // 0x5e8            
            bool m_bNoInterpolate; // 0x5e9            
            uint8_t _pad05ea[0x6]; // 0x5ea
            source2sdk::server::CCollisionProperty m_Collision; // 0x5f0            
            source2sdk::server::CGlowProperty m_Glow; // 0x6a8            
            float m_flGlowBackfaceMult; // 0x700            
            float m_fadeMinDist; // 0x704            
            float m_fadeMaxDist; // 0x708            
            float m_flFadeScale; // 0x70c            
            float m_flShadowStrength; // 0x710            
            std::uint8_t m_nObjectCulling; // 0x714            
            uint8_t _pad0715[0x3]; // 0x715
            // m_bodyGroupChoices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<CGlobalSymbol,std::int32_t> m_bodyGroupChoices;
            char m_bodyGroupChoices[0x28]; // 0x718            
            source2sdk::client::CNetworkViewOffsetVector m_vecViewOffset; // 0x740            
            uint8_t _pad0768[0x8]; // 0x768
            // metadata: MKV3TransferSaveOpsForField
            std::uint32_t m_bvDisabledHitGroups[1]; // 0x770            
            uint8_t _pad0774[0x4];
            
            // Datamap fields:
            // CUtlString add_attribute; // 0x7fffffff
            // Color rendercolor32; // 0x7fffffff
            // int32_t renderamt; // 0x7fffffff
            // Vector mins; // 0x7fffffff
            // Vector maxs; // 0x7fffffff
            // const char * skin; // 0x7fffffff
            // CUtlString bodygroups; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseModelEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseModelEntity) == 0x778);
    };
};
