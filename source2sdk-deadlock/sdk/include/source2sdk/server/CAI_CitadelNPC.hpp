#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CAI_BaseNPC.hpp"
#include "source2sdk/server/CCitadelAbilityComponent.hpp"
#include "source2sdk/server/CCitadelMinimapComponent.hpp"
#include "source2sdk/server/CCitadelRegenComponent.hpp"
#include "source2sdk/server/WeakPoint_t.hpp"
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
        struct CCitadelBaseAbility;
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
        // Registered alignment: unknown
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x17b0
        // Has VTable
        // Is Abstract
        // 
        // static metadata: MNetworkIncludeByName "m_iMaxHealth"
        // static metadata: MNetworkIncludeByName "m_iHealth"
        // static metadata: MNetworkIncludeByName "m_iTeam"
        // static metadata: MNetworkIncludeByName "m_vecViewOffset"
        // static metadata: MNetworkExcludeByUserGroup "m_flCycle"
        // static metadata: MNetworkExcludeByName "m_flEncodedController"
        // static metadata: MNetworkExcludeByName "m_flPoseParameter"
        // static metadata: MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
        // static metadata: MNetworkVarNames "CCitadelRegenComponent::Storage_t m_CCitadelRegenComponent"
        // static metadata: MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
        // static metadata: MNetworkVarNames "WeakPoint_t m_vecWeakPoints"
        // static metadata: MNetworkVarNames "bool m_bMinion"
        // static metadata: MNetworkVarNames "EHANDLE m_hLookTarget"
        // static metadata: MNetworkVarNames "bool m_bBeamActive"
        // static metadata: MNetworkVarNames "VectorWS m_vEyeBeamTarget"
        #pragma pack(push, 1)
        class CAI_CitadelNPC : public source2sdk::server::CAI_BaseNPC
        {
        public:
            uint8_t _pad1150[0x78]; // 0x1150
            // metadata: MNotSaved
            Vector m_vLastGroundEntityCheckPos; // 0x11c8            
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flLastGroundCheckTime; // 0x11d4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelAbilityComponent"
            // metadata: MNetworkAlias "CCitadelAbilityComponent"
            // metadata: MNetworkTypeAlias "CCitadelAbilityComponent"
            source2sdk::server::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0x11d8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelRegenComponent"
            // metadata: MNetworkAlias "CCitadelRegenComponent"
            // metadata: MNetworkTypeAlias "CCitadelRegenComponent"
            source2sdk::server::CCitadelRegenComponent m_CCitadelRegenComponent; // 0x1440            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelMinimapComponent"
            // metadata: MNetworkAlias "CCitadelMinimapComponent"
            // metadata: MNetworkTypeAlias "CCitadelMinimapComponent"
            source2sdk::server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0x15a0            
            uint8_t _pad15c0[0x8]; // 0x15c0
            std::int32_t m_iBaseGoldReward; // 0x15c8            
            std::int32_t m_iSkillShotReward; // 0x15cc            
            uint8_t _pad15d0[0x2c]; // 0x15d0
            // m_hAbilityOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadelBaseAbility> m_hAbilityOwner;
            char m_hAbilityOwner[0x4]; // 0x15fc            
            uint8_t _pad1600[0x60]; // 0x1600
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            // m_vecWeakPoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::WeakPoint_t> m_vecWeakPoints;
            char m_vecWeakPoints[0x68]; // 0x1660            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            bool m_bMinion; // 0x16c8            
            uint8_t _pad16c9[0x3]; // 0x16c9
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            // m_hLookTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLookTarget;
            char m_hLookTarget[0x4]; // 0x16cc            
            std::int32_t m_iCoverGroupID; // 0x16d0            
            uint8_t _pad16d4[0x60]; // 0x16d4
            VectorWS m_vecSpawnOrigin; // 0x1734            
            uint8_t _pad1740[0x24]; // 0x1740
            // metadata: MNetworkEnable
            bool m_bBeamActive; // 0x1764            
            uint8_t _pad1765[0x3]; // 0x1765
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            VectorWS m_vEyeBeamTarget; // 0x1768            
            uint8_t _pad1774[0x3c];
            
            // Datamap fields:
            // CHandle< CBaseEntity > m_hCaster; // 0x1600
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_CitadelNPC because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_CitadelNPC) == 0x17b0);
    };
};
