#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CDOTABaseAbility;
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
        // Size: 0x5f0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Drow_Ranger_Glacier : public source2sdk::server::CDOTABaseAbility
        {
        public:
            std::int32_t shard_width; // 0x580            
            std::int32_t shard_count; // 0x584            
            float shard_duration; // 0x588            
            float shard_angle_step; // 0x58c            
            std::int32_t shard_distance; // 0x590            
            VectorWS m_vSpawnOrigin; // 0x594            
            Vector m_vDirection; // 0x5a0            
            uint8_t _pad05ac[0x4]; // 0x5ac
            // m_vecShards has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecShards;
            char m_vecShards[0x18]; // 0x5b0            
            uint8_t _pad05c8[0x8]; // 0x5c8
            source2sdk::server::CDOTABaseAbility* m_pIceShardsStop; // 0x5d0            
            uint8_t _pad05d8[0x14]; // 0x5d8
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x5ec            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Drow_Ranger_Glacier because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Drow_Ranger_Glacier) == 0x5f0);
    };
};
