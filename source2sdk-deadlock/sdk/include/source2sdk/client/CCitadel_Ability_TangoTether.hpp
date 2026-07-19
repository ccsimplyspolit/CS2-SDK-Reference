#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
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
        // Size: 0x1378
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "Vector m_vecCastStartPos"
        // static metadata: MNetworkVarNames "Vector m_vecDashStartPos"
        // static metadata: MNetworkVarNames "Vector m_vecDashEndPos"
        // static metadata: MNetworkVarNames "QAngle m_angDashStartAng"
        // static metadata: MNetworkVarNames "GameTime_t m_flDashStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flGrappleStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flGrappleArriveTime"
        // static metadata: MNetworkVarNames "EHANDLE m_hTarget"
        // static metadata: MNetworkVarNames "GameTime_t m_flGrappleShotAttackTime"
        // static metadata: MNetworkVarNames "Vector m_rgTargetPos"
        // static metadata: MNetworkVarNames "GameTime_t m_rgTargetPosTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_TangoTether : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            source2sdk::client::SatVolumeIndex_t m_desatVolIdx; // 0x11d8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vecCastStartPos; // 0x11dc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vecDashStartPos; // 0x11e8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vecDashEndPos; // 0x11f4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            QAngle m_angDashStartAng; // 0x1200            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flDashStartTime; // 0x120c            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flGrappleStartTime; // 0x1210            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flGrappleArriveTime; // 0x1214            
            // metadata: MNetworkEnable
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1218            
            float m_flVelSpring; // 0x121c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flGrappleShotAttackTime; // 0x1220            
            std::int32_t m_nTicksNotMoving; // 0x1224            
            Vector m_vecPrevPos; // 0x1228            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // metadata: MNetworkEncoder "coord"
            Vector m_rgTargetPos[20]; // 0x1234            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_rgTargetPosTime[20]; // 0x1324            
            source2sdk::client::ParticleIndex_t m_nGrappleTravelEffect; // 0x1374            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_TangoTether because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_TangoTether) == 0x1378);
    };
};
