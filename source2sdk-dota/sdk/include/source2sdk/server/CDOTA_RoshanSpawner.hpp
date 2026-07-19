#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CPointEntity.hpp"
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
        // Size: 0x4c0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_RoshanSpawner : public source2sdk::server::CPointEntity
        {
        public:
            bool m_bIsRoshanAlive; // 0x498            
            bool m_bSpawnRequested; // 0x499            
            uint8_t _pad049a[0x2]; // 0x49a
            source2sdk::entity2::GameTime_t m_fRoshanKillTime; // 0x49c            
            std::int32_t m_nSentRoshReclaim; // 0x4a0            
            std::int32_t m_nSentRoshRespawn; // 0x4a4            
            float m_fRoshanRespawnDuration; // 0x4a8            
            std::int32_t m_iLastKillerTeam; // 0x4ac            
            std::int32_t m_iKillCount; // 0x4b0            
            // m_hRoshan has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hRoshan;
            char m_hRoshan[0x4]; // 0x4b4            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x4b8            
            source2sdk::client::ParticleIndex_t m_nFXIndex2; // 0x4bc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_RoshanSpawner because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_RoshanSpawner) == 0x4c0);
    };
};
