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
        // Size: 0x5b8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Tinker_Keen_Teleport : public source2sdk::server::CDOTABaseAbility
        {
        public:
            std::int32_t creep_teleport_level; // 0x580            
            std::int32_t hero_teleport_level; // 0x584            
            float outpost_channel_time; // 0x588            
            float jungle_outpost_channel_time; // 0x58c            
            // m_hTeleportTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTeleportTarget;
            char m_hTeleportTarget[0x4]; // 0x590            
            source2sdk::client::ParticleIndex_t m_nFXCaster; // 0x594            
            source2sdk::client::ParticleIndex_t m_nFXOrigin; // 0x598            
            source2sdk::client::ParticleIndex_t m_nFXDestination; // 0x59c            
            VectorWS m_vDestination; // 0x5a0            
            std::int32_t m_iMinDistance; // 0x5ac            
            float m_flBaseTeleportTime; // 0x5b0            
            uint8_t _pad05b4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Tinker_Keen_Teleport because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Tinker_Keen_Teleport) == 0x5b8);
    };
};
