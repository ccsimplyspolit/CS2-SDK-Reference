#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"
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
        // Size: 0x1d08
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
        class CAbility_Fencer_Lunge : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f70[0x4]; // 0xf70
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::uint8_t m_nCurrentLungeState; // 0xf74            
            uint8_t _pad0f75[0x3]; // 0xf75
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flStateStartTime; // 0xf78            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vDashStartPos; // 0xf7c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vDashDirection; // 0xf88            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vLookDirection; // 0xf94            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vStrikeDirection; // 0xfa0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bStartedInAir; // 0xfac            
            // metadata: MNetworkEnable
            std::uint8_t m_iRemainingCasts; // 0xfad            
            uint8_t _pad0fae[0x2]; // 0xfae
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_RecastEndTime; // 0xfb0            
            // metadata: MNetworkEnable
            std::uint8_t m_eLungeDirection; // 0xfb4            
            uint8_t _pad0fb5[0x3]; // 0xfb5
            float m_flHeldTime; // 0xfb8            
            uint8_t _pad0fbc[0x4]; // 0xfbc
            // m_vecHitEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecHitEnemies;
            char m_vecHitEnemies[0x18]; // 0xfc0            
            Vector m_vLastPosition; // 0xfd8            
            source2sdk::entity2::GameTime_t m_flStuckTime; // 0xfe4            
            uint8_t _pad0fe8[0x4]; // 0xfe8
            source2sdk::client::ParticleIndex_t m_nGlintParticleIndex; // 0xfec            
            uint8_t _pad0ff0[0x284]; // 0xff0
            float m_flLastOuterCircleProgress; // 0x1274            
            uint8_t _pad1278[0x8]; // 0x1278
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nPowerLevel; // 0x1280            
            uint8_t _pad1284[0xa84];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Fencer_Lunge because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbility_Fencer_Lunge) == 0x1d08);
    };
};
