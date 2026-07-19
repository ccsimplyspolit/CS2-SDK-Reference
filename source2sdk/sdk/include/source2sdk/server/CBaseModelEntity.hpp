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
        // Size: 0x770
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CBaseModelEntity : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNotSaved
            source2sdk::server::CRenderComponent* m_CRenderComponent; // 0x4a8            
            source2sdk::server::CHitboxComponent m_CHitboxComponent; // 0x4b0            
            source2sdk::server::CChoreoComponent* m_pChoreoComponent; // 0x4c8            
            source2sdk::client::HitGroup_t m_nDestructiblePartInitialStateDestructed0; // 0x4d0            
            source2sdk::client::HitGroup_t m_nDestructiblePartInitialStateDestructed1; // 0x4d4            
            source2sdk::client::HitGroup_t m_nDestructiblePartInitialStateDestructed2; // 0x4d8            
            source2sdk::client::HitGroup_t m_nDestructiblePartInitialStateDestructed3; // 0x4dc            
            source2sdk::client::HitGroup_t m_nDestructiblePartInitialStateDestructed4; // 0x4e0            
            std::int32_t m_nDestructiblePartInitialStateDestructed0_PartIndex; // 0x4e4            
            std::int32_t m_nDestructiblePartInitialStateDestructed1_PartIndex; // 0x4e8            
            std::int32_t m_nDestructiblePartInitialStateDestructed2_PartIndex; // 0x4ec            
            std::int32_t m_nDestructiblePartInitialStateDestructed3_PartIndex; // 0x4f0            
            std::int32_t m_nDestructiblePartInitialStateDestructed4_PartIndex; // 0x4f4            
            bool m_bDestructiblePartInitialStateDestructed0_GenerateBreakpieces; // 0x4f8            
            bool m_bDestructiblePartInitialStateDestructed1_GenerateBreakpieces; // 0x4f9            
            bool m_bDestructiblePartInitialStateDestructed2_GenerateBreakpieces; // 0x4fa            
            bool m_bDestructiblePartInitialStateDestructed3_GenerateBreakpieces; // 0x4fb            
            bool m_bDestructiblePartInitialStateDestructed4_GenerateBreakpieces; // 0x4fc            
            uint8_t _pad04fd[0x3]; // 0x4fd
            source2sdk::server::CDestructiblePartsComponent* m_pDestructiblePartsSystemComponent; // 0x500            
            // m_OnDestructibleHitGroupDamageLevelChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<source2sdk::server::CBaseModelEntity_OnDamageLevelChangedArgs_t> m_OnDestructibleHitGroupDamageLevelChanged;
            char m_OnDestructibleHitGroupDamageLevelChanged[0x28]; // 0x508            
            source2sdk::entity2::GameTime_t m_flDissolveStartTime; // 0x530            
            uint8_t _pad0534[0x4]; // 0x534
            source2sdk::entity2::CEntityIOOutput m_OnIgnite; // 0x538            
            source2sdk::client::RenderMode_t m_nRenderMode; // 0x550            
            source2sdk::client::RenderFx_t m_nRenderFX; // 0x551            
            bool m_bAllowFadeInView; // 0x552            
            uint8_t _pad0553[0x1d]; // 0x553
            Color m_clrRender; // 0x570            
            uint8_t _pad0574[0x4]; // 0x574
            // m_vecRenderAttributes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::EntityRenderAttribute_t> m_vecRenderAttributes;
            char m_vecRenderAttributes[0x68]; // 0x578            
            bool m_bRenderToCubemaps; // 0x5e0            
            bool m_bNoInterpolate; // 0x5e1            
            uint8_t _pad05e2[0x6]; // 0x5e2
            source2sdk::server::CCollisionProperty m_Collision; // 0x5e8            
            source2sdk::server::CGlowProperty m_Glow; // 0x6a0            
            float m_flGlowBackfaceMult; // 0x6f8            
            float m_fadeMinDist; // 0x6fc            
            float m_fadeMaxDist; // 0x700            
            float m_flFadeScale; // 0x704            
            float m_flShadowStrength; // 0x708            
            std::uint8_t m_nObjectCulling; // 0x70c            
            uint8_t _pad070d[0x3]; // 0x70d
            // m_bodyGroupChoices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<CGlobalSymbol,std::int32_t> m_bodyGroupChoices;
            char m_bodyGroupChoices[0x28]; // 0x710            
            source2sdk::client::CNetworkViewOffsetVector m_vecViewOffset; // 0x738            
            uint8_t _pad0760[0x8]; // 0x760
            // metadata: MKV3TransferSaveOpsForField
            std::uint32_t m_bvDisabledHitGroups[1]; // 0x768            
            uint8_t _pad076c[0x4];
            
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
        
        static_assert(sizeof(source2sdk::server::CBaseModelEntity) == 0x770);
    };
};
