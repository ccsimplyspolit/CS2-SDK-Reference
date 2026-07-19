#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
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
        // Size: 0x520
        // Has VTable
        #pragma pack(push, 1)
        class CEnvEntityMaker : public source2sdk::server::CPointEntity
        {
        public:
            // metadata: MNotSaved
            Vector m_vecEntityMins; // 0x4a0            
            // metadata: MNotSaved
            Vector m_vecEntityMaxs; // 0x4ac            
            // m_hCurrentInstance has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hCurrentInstance;
            char m_hCurrentInstance[0x4]; // 0x4b8            
            // m_hCurrentBlocker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hCurrentBlocker;
            char m_hCurrentBlocker[0x4]; // 0x4bc            
            Vector m_vecBlockerOrigin; // 0x4c0            
            QAngle m_angPostSpawnDirection; // 0x4cc            
            float m_flPostSpawnDirectionVariance; // 0x4d8            
            float m_flPostSpawnSpeed; // 0x4dc            
            bool m_bPostSpawnUseAngles; // 0x4e0            
            uint8_t _pad04e1[0x7]; // 0x4e1
            CUtlSymbolLarge m_iszTemplate; // 0x4e8            
            source2sdk::entity2::CEntityIOOutput m_pOutputOnSpawned; // 0x4f0            
            source2sdk::entity2::CEntityIOOutput m_pOutputOnFailedSpawn; // 0x508            
            
            // Datamap fields:
            // void InputForceSpawn; // 0x0
            // CUtlSymbolLarge InputForceSpawnAtEntityOrigin; // 0x0
            // void CEnvEntityMakerCheckSpawnThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvEntityMaker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvEntityMaker) == 0x520);
    };
};
