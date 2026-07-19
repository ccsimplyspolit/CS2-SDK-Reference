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
        // Size: 0x1748
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "EHANDLE m_hTarget"
        // static metadata: MNetworkVarNames "Vector m_vRiposteStartPosition"
        // static metadata: MNetworkVarNames "Vector m_vDashDirection"
        // static metadata: MNetworkVarNames "GameTime_t m_flStateStartTime"
        // static metadata: MNetworkVarNames "uint8 m_nCurrentRiposteState"
        // static metadata: MNetworkVarNames "GameTime_t m_flSuccessfulRiposteTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_Fencer_Riposte : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0xf70            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vRiposteStartPosition; // 0xf74            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vDashDirection; // 0xf80            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flStateStartTime; // 0xf8c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::uint8_t m_nCurrentRiposteState; // 0xf90            
            uint8_t _pad0f91[0x3]; // 0xf91
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flSuccessfulRiposteTime; // 0xf94            
            uint8_t _pad0f98[0x780]; // 0xf98
            // m_vecHitEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecHitEnemies;
            char m_vecHitEnemies[0x18]; // 0x1718            
            Vector m_vecLastPosition; // 0x1730            
            source2sdk::entity2::GameTime_t m_flStuckTime; // 0x173c            
            source2sdk::client::ParticleIndex_t m_nParriedFXIndex; // 0x1740            
            uint8_t _pad1744[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Fencer_Riposte because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Fencer_Riposte) == 0x1748);
    };
};
