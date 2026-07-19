#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelAutoScaledTime.hpp"
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
        // Size: 0x1530
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flFlurryEndTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flNextAttackTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_BulletFlurry : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::client::CCitadelAutoScaledTime m_flFlurryEndTime; // 0x11d8            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flNextAttackTime; // 0x11f0            
            uint8_t _pad11f4[0x304]; // 0x11f4
            // m_vecShootTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecShootTargets;
            char m_vecShootTargets[0x18]; // 0x14f8            
            std::int32_t m_nNumPlayersKilled; // 0x1510            
            std::int32_t m_nShootIndex; // 0x1514            
            std::int32_t m_nShootIndexNPC; // 0x1518            
            std::int32_t m_nBurstShots; // 0x151c            
            source2sdk::client::SatVolumeIndex_t m_nSatVolumeIndex; // 0x1520            
            bool m_bHasCameraOverride; // 0x1524            
            uint8_t _pad1525[0x3]; // 0x1525
            source2sdk::client::ParticleIndex_t m_nConeVFX; // 0x1528            
            uint8_t _pad152c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_BulletFlurry because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_BulletFlurry) == 0x1530);
    };
};
