#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelAutoScaledTime.hpp"
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
        // Size: 0x14e0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bActive"
        // static metadata: MNetworkVarNames "EHANDLE m_hCurrentTarget"
        // static metadata: MNetworkVarNames "EHANDLE m_hLastCastTarget"
        // static metadata: MNetworkVarNames "Vector m_vStartPosition"
        // static metadata: MNetworkVarNames "Vector m_vDeparturePosition"
        // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flDepartureTime"
        // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flArrivalTime"
        // static metadata: MNetworkVarNames "bool m_bIsFirstCastCompleted"
        // static metadata: MNetworkVarNames "GameTime_t m_tDoubleCastWindow"
        #pragma pack(push, 1)
        class CCitadel_Ability_Nano_Pounce_Instant : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f70[0x500]; // 0xf70
            // metadata: MNetworkEnable
            bool m_bActive; // 0x1470            
            uint8_t _pad1471[0x3]; // 0x1471
            // metadata: MNetworkEnable
            // m_hCurrentTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hCurrentTarget;
            char m_hCurrentTarget[0x4]; // 0x1474            
            // metadata: MNetworkEnable
            // m_hLastCastTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLastCastTarget;
            char m_hLastCastTarget[0x4]; // 0x1478            
            // metadata: MNetworkEnable
            Vector m_vStartPosition; // 0x147c            
            // metadata: MNetworkEnable
            Vector m_vDeparturePosition; // 0x1488            
            uint8_t _pad1494[0x4]; // 0x1494
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelAutoScaledTime m_flDepartureTime; // 0x1498            
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelAutoScaledTime m_flArrivalTime; // 0x14b0            
            Vector m_vLastKnownSafePos; // 0x14c8            
            bool m_bStartedPhase01; // 0x14d4            
            bool m_bStartedPhase02; // 0x14d5            
            // metadata: MNetworkEnable
            bool m_bIsFirstCastCompleted; // 0x14d6            
            uint8_t _pad14d7[0x1]; // 0x14d7
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tDoubleCastWindow; // 0x14d8            
            source2sdk::client::ParticleIndex_t m_CastStartParticle; // 0x14dc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Nano_Pounce_Instant because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Nano_Pounce_Instant) == 0x14e0);
    };
};
