#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EFlightState.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x16a0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "EHANDLE m_hGrabTarget"
        // static metadata: MNetworkVarNames "EFlightState m_eFlightState"
        // static metadata: MNetworkVarNames "bool m_bIsGrabbing"
        // static metadata: MNetworkVarNames "bool m_bIsHoldingBomb"
        // static metadata: MNetworkVarNames "float m_flCurrentSpeed"
        #pragma pack(push, 1)
        class CCitadel_Ability_Tengu_AirLift : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f70[0x18]; // 0xf70
            // metadata: MNetworkEnable
            // m_hGrabTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hGrabTarget;
            char m_hGrabTarget[0x4]; // 0xf88            
            source2sdk::client::ParticleIndex_t m_nHoldBombEffect; // 0xf8c            
            uint8_t _pad0f90[0x708]; // 0xf90
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::client::EFlightState m_eFlightState; // 0x1698            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bIsGrabbing; // 0x1699            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bIsHoldingBomb; // 0x169a            
            uint8_t _pad169b[0x1]; // 0x169b
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flCurrentSpeed; // 0x169c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Tengu_AirLift because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Tengu_AirLift) == 0x16a0);
    };
};
