#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelBaseYamatoAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/SatVolumeIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
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
        // Size: 0x15d0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bShadowFormCast"
        // static metadata: MNetworkVarNames "Vector m_vYamatoCastPos"
        // static metadata: MNetworkVarNames "Vector m_vTargetCastPos"
        // static metadata: MNetworkVarNames "GameTime_t m_flFlyingToTargetStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flEndAttackTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flGrappleStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flGrappleArriveTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flAttackLatchTime"
        // static metadata: MNetworkVarNames "Vector m_vAttackLatchPos"
        // static metadata: MNetworkVarNames "EHANDLE m_hTarget"
        // static metadata: MNetworkVarNames "bool m_bIsTargetAlly"
        // static metadata: MNetworkVarNames "GameTime_t m_flGrappleShotAttackTime"
        // static metadata: MNetworkVarNames "Vector m_rgPath"
        // static metadata: MNetworkVarNames "int m_nPathIdx"
        // static metadata: MNetworkVarNames "int m_nPathSize"
        // static metadata: MNetworkVarNames "float m_flPathLength"
        // static metadata: MNetworkVarNames "Vector m_vFlyingInitialOffsetToPath"
        // static metadata: MNetworkVarNames "float flDistFlown"
        #pragma pack(push, 1)
        class CCitadel_Ability_FlyingStrike : public source2sdk::client::CCitadelBaseYamatoAbility
        {
        public:
            uint8_t _pad11e0[0x28]; // 0x11e0
            source2sdk::client::SatVolumeIndex_t m_desatVolIdx; // 0x1208            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bShadowFormCast; // 0x120c            
            uint8_t _pad120d[0x3]; // 0x120d
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // metadata: MNetworkEncoder "coord"
            Vector m_vYamatoCastPos; // 0x1210            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // metadata: MNetworkEncoder "coord"
            Vector m_vTargetCastPos; // 0x121c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flFlyingToTargetStartTime; // 0x1228            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flEndAttackTime; // 0x122c            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flGrappleStartTime; // 0x1230            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flGrappleArriveTime; // 0x1234            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flAttackLatchTime; // 0x1238            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vAttackLatchPos; // 0x123c            
            // metadata: MNetworkEnable
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1248            
            // metadata: MNetworkEnable
            bool m_bIsTargetAlly; // 0x124c            
            uint8_t _pad124d[0x3]; // 0x124d
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flGrappleShotAttackTime; // 0x1250            
            uint8_t _pad1254[0x4]; // 0x1254
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // metadata: MNetworkEncoder "coord"
            // metadata: MNetworkChangeCallback "OnPathChanged"
            Vector m_rgPath[20]; // 0x1258            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nPathIdx; // 0x1348            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nPathSize; // 0x134c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flPathLength; // 0x1350            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vFlyingInitialOffsetToPath; // 0x1354            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float flDistFlown; // 0x1360            
            Vector m_vLastSafePos; // 0x1364            
            uint8_t _pad1370[0x200]; // 0x1370
            source2sdk::client::ParticleIndex_t m_nGrappleTravelEffect; // 0x1570            
            uint8_t _pad1574[0x54]; // 0x1574
            bool m_bPathDirty; // 0x15c8            
            uint8_t _pad15c9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_FlyingStrike because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_FlyingStrike) == 0x15d0);
    };
};
