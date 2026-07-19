#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EFencerUltState_t.hpp"
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
        // Size: 0x16e0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "Vector m_vStartPosition"
        // static metadata: MNetworkVarNames "Vector m_vDashDirection"
        // static metadata: MNetworkVarNames "Vector m_vecLastPosition"
        // static metadata: MNetworkVarNames "EFencerUltState_t m_eUltState"
        // static metadata: MNetworkVarNames "GameTime_t m_flStateStartTime"
        #pragma pack(push, 1)
        class CAbility_Fencer_Ultimate : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vStartPosition; // 0xf70            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vDashDirection; // 0xf7c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vecLastPosition; // 0xf88            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::client::EFencerUltState_t m_eUltState; // 0xf94            
            uint8_t _pad0f95[0x3]; // 0xf95
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flStateStartTime; // 0xf98            
            bool m_bHitSomeone; // 0xf9c            
            uint8_t _pad0f9d[0x3]; // 0xf9d
            // m_vecHitEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecHitEnemies;
            char m_vecHitEnemies[0x18]; // 0xfa0            
            // m_vecHitHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecHitHeroes;
            char m_vecHitHeroes[0x18]; // 0xfb8            
            source2sdk::entity2::GameTime_t m_flStuckTime; // 0xfd0            
            source2sdk::client::ParticleIndex_t m_UltHoldVFX; // 0xfd4            
            source2sdk::client::ParticleIndex_t m_DirPreviewVFX; // 0xfd8            
            uint8_t _pad0fdc[0x704];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Fencer_Ultimate because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbility_Fencer_Ultimate) == 0x16e0);
    };
};
