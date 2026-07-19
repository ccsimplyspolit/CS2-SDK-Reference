#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelAnimatingModelEntity.hpp"
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
        // Size: 0xcf0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flUpFactor"
        // static metadata: MNetworkVarNames "float m_flBounceVelocity"
        // static metadata: MNetworkVarNames "GameTime_t m_tDeactivationTime"
        #pragma pack(push, 1)
        class C_Citadel_Bounce_Pad : public source2sdk::client::CCitadelAnimatingModelEntity
        {
        public:
            // metadata: MNetworkEnable
            float m_flUpFactor; // 0xcb0            
            // metadata: MNetworkEnable
            float m_flBounceVelocity; // 0xcb4            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tDeactivationTime; // 0xcb8            
            bool m_bDeactivated; // 0xcbc            
            uint8_t _pad0cbd[0x3]; // 0xcbd
            float m_flBarrelBounceVelocity; // 0xcc0            
            float m_flBarrelUpFactor; // 0xcc4            
            bool m_bSpeedOnLand; // 0xcc8            
            uint8_t _pad0cc9[0x7]; // 0xcc9
            // m_vBouncedPlayerBefore has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vBouncedPlayerBefore;
            char m_vBouncedPlayerBefore[0x18]; // 0xcd0            
            uint8_t _pad0ce8[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Citadel_Bounce_Pad because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Citadel_Bounce_Pad) == 0xcf0);
    };
};
