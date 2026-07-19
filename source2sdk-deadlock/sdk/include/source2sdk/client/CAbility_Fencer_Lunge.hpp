#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x1f70
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "uint8 m_nCurrentLungeState"
        // static metadata: MNetworkVarNames "GameTime_t m_flStateStartTime"
        // static metadata: MNetworkVarNames "Vector m_vDashStartPos"
        // static metadata: MNetworkVarNames "Vector m_vDashDirection"
        // static metadata: MNetworkVarNames "Vector m_vLookDirection"
        // static metadata: MNetworkVarNames "Vector m_vStrikeDirection"
        // static metadata: MNetworkVarNames "bool m_bStartedInAir"
        // static metadata: MNetworkVarNames "uint8 m_iRemainingCasts"
        // static metadata: MNetworkVarNames "GameTime_t m_RecastEndTime"
        // static metadata: MNetworkVarNames "uint8 m_eLungeDirection"
        // static metadata: MNetworkVarNames "int m_nPowerLevel"
        #pragma pack(push, 1)
        class CAbility_Fencer_Lunge : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad11d8[0x4]; // 0x11d8
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::uint8_t m_nCurrentLungeState; // 0x11dc            
            uint8_t _pad11dd[0x3]; // 0x11dd
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flStateStartTime; // 0x11e0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vDashStartPos; // 0x11e4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vDashDirection; // 0x11f0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vLookDirection; // 0x11fc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vStrikeDirection; // 0x1208            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bStartedInAir; // 0x1214            
            // metadata: MNetworkEnable
            std::uint8_t m_iRemainingCasts; // 0x1215            
            uint8_t _pad1216[0x2]; // 0x1216
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_RecastEndTime; // 0x1218            
            // metadata: MNetworkEnable
            std::uint8_t m_eLungeDirection; // 0x121c            
            uint8_t _pad121d[0x3]; // 0x121d
            float m_flHeldTime; // 0x1220            
            uint8_t _pad1224[0x4]; // 0x1224
            // m_vecHitEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecHitEnemies;
            char m_vecHitEnemies[0x18]; // 0x1228            
            Vector m_vLastPosition; // 0x1240            
            source2sdk::entity2::GameTime_t m_flStuckTime; // 0x124c            
            uint8_t _pad1250[0x4]; // 0x1250
            source2sdk::client::ParticleIndex_t m_nGlintParticleIndex; // 0x1254            
            uint8_t _pad1258[0x284]; // 0x1258
            float m_flLastOuterCircleProgress; // 0x14dc            
            uint8_t _pad14e0[0x8]; // 0x14e0
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nPowerLevel; // 0x14e8            
            uint8_t _pad14ec[0xa84];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Fencer_Lunge because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbility_Fencer_Lunge) == 0x1f70);
    };
};
