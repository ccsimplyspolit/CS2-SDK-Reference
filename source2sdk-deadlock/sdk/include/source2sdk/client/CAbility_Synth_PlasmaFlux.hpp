#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
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
        // Size: 0x1518
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "EHANDLE m_hActiveProjectile"
        #pragma pack(push, 1)
        class CAbility_Synth_PlasmaFlux : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad11d8[0x28]; // 0x11d8
            bool m_bTeleported; // 0x1200            
            uint8_t _pad1201[0x3]; // 0x1201
            source2sdk::entity2::GameTime_t m_flProjectileLaunchTime; // 0x1204            
            source2sdk::entity2::GameTime_t m_flProjectileExpireTime; // 0x1208            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // m_hActiveProjectile has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hActiveProjectile;
            char m_hActiveProjectile[0x4]; // 0x120c            
            uint8_t _pad1210[0x308];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Synth_PlasmaFlux because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbility_Synth_PlasmaFlux) == 0x1518);
    };
};
